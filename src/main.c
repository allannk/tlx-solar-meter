#include <zephyr/drivers/gpio.h>
#include <zephyr/kernel.h>
// #include <zephyr/logging/log.h>

int main(void) {
    // LOG_INF("Booted MCU");
    __asm("nop");
}

// K_THREAD_DEFINE(heartbeat_tid, 1024, heartbeat_fn, NULL, NULL, NULL, 5, 0, 500);