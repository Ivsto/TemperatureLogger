#pragma once

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPUpdateServer.h>
#include <ESP8266mDNS.h>

#include "user_interface.h"

#include "Settings.h"
#include "SystemCheck.h"
#include "WiFi.h"
#include "WebServer.h"
#include "Logger.h"
#include "InfluxDBSender.h"


extern Logger logger;
extern Settings settings;
extern WiFiManager wifi;
extern InfluxDBSender dataSender;
extern BME280 bme280;

// If DEBUG is defined the serial output will provide debug messages.
// #define DEBUG

#include "StateMachine.h"
#include "BME280.h"

extern BME280 bme280;

#define HTTP_PORT 80
#define HOSTNAME "temp-monitor"
#define SAMPLING_INTERVAL_NS 30000000UL   // Interval on which to take measurments in nanoseconds
#define GET_V_BAT round(475.0 * analogRead(A0) / 1023)