#include <stdio.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"
#include "esp_err.h"
#include "nvs_flash.h"

#include "wifi.h"

void app_main()
{
    nvs_flash_init();

    esp_err_t err = wifi_network_up();
    if (err != ESP_OK) {
        ESP_LOGE(__func__, "Could not bring up network");
    }
    ESP_LOGE(__func__, "Done.");
}
