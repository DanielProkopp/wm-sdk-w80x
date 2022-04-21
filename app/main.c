#include "wm_include.h"
#include "wm_timer.h"
#include <stdint.h>

static struct tls_timer_cfg g_timer_cfg;
static const enum tls_io_name g_pin = WM_IO_PB_05;

void gpio_init(void)
{
    tls_gpio_cfg(g_pin, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_FLOATING);
}

uint8_t timer_init(struct tls_timer_cfg *cfg, tls_timer_irq_callback callback, uint32_t timeout_ms)
{
    uint8_t timer_id;

    cfg->unit = TLS_TIMER_UNIT_MS;
    cfg->timeout = timeout_ms;
    cfg->is_repeat = 1;
    cfg->callback = (tls_timer_irq_callback)callback;
    cfg->arg = NULL;

    timer_id = tls_timer_create(cfg);
    tls_timer_start(timer_id);

    return timer_id;
}

static uint8_t blink_callback(uint8_t *args)
{
    static int led_state = 0;

    tls_gpio_write(g_pin, led_state);
    led_state = ~led_state;
}

void UserMain(void)
{
    uint8_t id;
    gpio_init();
    id = timer_init(&g_timer_cfg, (tls_timer_irq_callback)blink_callback, 1000);
    tls_timer_start(id);
}
