#ifndef CONSTANTS_H
#define CONSTANTS_H
#define REQUEST_CLIENT_HANDLER_LEDS "GET id=1\n"
#define REQUEST_CLIENT_HANDLER_LCD "GET id=2\n"
#define WIFI_SSID "YOUR_SSID"
#define WIFI_PASS "YOUR_PASS"
#define SERVER_ADDRESS "SERVER_ADRESS"
const int SERVER_PORT = 1000;
const int LEDS_COUNT = 6;
const int TRANSMISSION_SPEED = 115200;
const int ledPins[LEDS_COUNT] = {15, 2, 4, 5, 18, 19};
const int CLIENTS_ACTUATORS_COUNT = 2;
#endif