#ifndef WIFI_CONNECT_H
#define WIFI_CONNECT_H

#include "esp_err.h"

/** Bring up the network and connect the strongest known access point
 * that is detected
 */
esp_err_t
wifi_network_up();

#endif /*WIFI_CONNECT_H*/
