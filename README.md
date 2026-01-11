# LANesp32

**LANesp32** es una librería para ESP32 desarrollada dentro del ecosistema **ThinksIoT** (FG Tech Software S.L.) que encapsula la **configuración y gestión de conectividad de red** (WiFi / Ethernet / GSM) de forma centralizada y reutilizable.

El objetivo es **sacar la lógica de red fuera del firmware principal**, evitando duplicaciones y permitiendo que distintos proyectos usen exactamente el mismo comportamiento de red.

---

## 🎯 Objetivo

- Centralizar la gestión de red en ESP32
- Evitar código duplicado de WiFi/Ethernet/GSM
- Permitir selección de red por compilación (`NET_MODE`)
- Simplificar el `setup()` de los firmwares
- Ser compatible con MQTT, HTTP y OTA

---

## ✨ Características

- Soporte para:
  - WiFi
  - Ethernet (LAN8720, etc.)
  - GSM (TinyGSM)
- Selección de red en tiempo de compilación
- Inclusión automática de dependencias necesarias
- Valores por defecto de red
- Diseñada para trabajar con NVSStore y PubSubClient
- Librería header-only

---

## 📦 Estructura

LANesp32/
  library.properties
  README.md
  src/
    LANesp32.h

---

## 🔧 Uso

```cpp
#include <LANesp32.h>

bool ok = initNetwork(ssid, pass);
```

---

## 🧠 Filosofía

LANesp32 no gestiona tareas ni lógica de negocio.
Solo inicializa conectividad de red.

---

Uso interno FG Tech Software S.L.