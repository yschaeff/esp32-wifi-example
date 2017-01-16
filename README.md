# ESP32 Connect to most powerful known access point. #

To install, assuming the ESP-IDF is properly setup:

- `make menuconfig` edit the 'WiFi Configuration' section.
- make flash

The ESP will try to connect to one of its known access points (set at compile 
time) and will try the one with the strongest signal first. By supplying 
SSID's and passwords on compile time no passwords need to be visible in the
source.

NOTE: make sure you set the number of access points appropriately in
menuconfig.  It may or may not be set correct automatically.

