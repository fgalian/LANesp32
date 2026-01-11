#ifndef LANESP32_H
#define LANESP32_H

// ============================================
// LANesp32
// Librería de encapsulación de red (ESP32)
// ============================================
//
// Requiere que el firmware defina:
//   - NET_MODE
//   - NET_WIFI / NET_ETHERNET / NET_GSM
//
// NO inicializa red
// NO usa NVS
// NO decide lógica
// ============================================


// --- Configuración Wi-Fi ---
#if NET_MODE == NET_WIFI
  #include <WiFi.h>
  #include <WiFiClientSecure.h>

  // Valores por defecto si no existen
  #ifndef W_SSID
    #define W_SSID "IOT"
  #endif

  #ifndef W_PASSWORD
    #define W_PASSWORD "IOT"
  #endif
#endif


// --- Configuración Ethernet ---
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
#endif


// --- Configuración GSM ---
#if NET_MODE == NET_GSM
  #include <TinyGsmClient.h>
  extern TinyGsm modem;

  #ifndef GSM_APN
    #define GSM_APN "internet"
  #endif

  #ifndef GSM_USER
    #define GSM_USER ""
  #endif

  #ifndef GSM_PASS
    #define GSM_PASS ""
  #endif
#endif


#include <HTTPClient.h>

#endif // LANESP32_H
