#ifndef LANESP32_H
#define LANESP32_H

#include <Arduino.h>

// =========================
// Modos de red
// =========================
#define NET_WIFI     1
#define NET_ETHERNET 2
#define NET_GSM      3

// El firmware DEBE definir NET_MODE.
// Si no lo hace, usamos WIFI por defecto.
#ifndef NET_MODE
  #define NET_MODE NET_WIFI
#endif

// =========================
// WiFi
// =========================
#if NET_MODE == NET_WIFI

  #include <WiFi.h>
  #include <WiFiClientSecure.h>

  #ifndef W_SSID
    #define W_SSID "IOT"
  #endif

  #ifndef W_PASSWORD
    #define W_PASSWORD "IOT"
  #endif

#endif // NET_WIFI

// =========================
// Ethernet
// =========================
#if NET_MODE == NET_ETHERNET

  #include <ETH.h>

  #ifndef ETH_PHY_ADDR
    #define ETH_PHY_ADDR 0
  #endif

  #ifndef ETH_POWER_PIN
    #define ETH_POWER_PIN -1
  #endif

  #ifndef ETH_MDC_PIN
    #define ETH_MDC_PIN 23
  #endif

  #ifndef ETH_MDIO_PIN
    #define ETH_MDIO_PIN 18
  #endif

  #ifndef ETH_TYPE
    #define ETH_TYPE ETH_PHY_LAN8720
  #endif

  #ifndef ETH_CLK_MODE
    #define ETH_CLK_MODE ETH_CLOCK_GPIO0_IN
  #endif

#endif // NET_ETHERNET

// =========================
// GSM (OPCIONAL)
// =========================
#if NET_MODE == NET_GSM

  #include <TinyGsmClient.h>

  #ifndef TINY_GSM_MODEM_SIM800
    #define TINY_GSM_MODEM_SIM800
  #endif

#endif // NET_GSM

#endif // LANESP32_H
