# 📡 Arduino Joystick Controlled Radar System

*[Türkçe açıklama için aşağı kaydırın / Scroll down for Turkish]*

An interactive embedded radar/proximity alert system built with an **Arduino**, **SG90 Servo Motor**, **HC-SR04 Ultrasonic Distance Sensor**, **Analog Joystick**, **16x2 LCD Display**, and **Buzzer**.

The joystick allows manual control over the servo motor angle. The ultrasonic sensor measures object distance at the targeted angle and displays real-time quantitative distance and a dynamic proximity bar on the LCD. The buzzer triggers audio alerts with varying frequencies and rhythms based on object distance.

---

## 🚀 Features (English)

- **Angle Control:** Smooth orientation of the servo motor between $0^\circ$ and $180^\circ$ via the joystick X-axis.
- **Real-Time Distance Measurement:** Precise target distance calculation in centimeters using the HC-SR04 sensor.
- **Visual Display (16x2 LCD):**
  - **Top Row:** Live servo angle (`A:`) and measured distance (`M:`).
  - **Bottom Row:** Dynamic proximity radar bar that scales with object closeness (`R:[████....]`).
- **Multi-Level Audio Alerts (Buzzer):**
  - **$< 10\text{ cm}$:** High-frequency (1500 Hz) continuous alarm with a fully filled bar.
  - **$10 - 25\text{ cm}$:** Fast beep (1000 Hz) with mid-range bar.
  - **$25 - 45\text{ cm}$:** Slow beep (800 Hz) with low-level bar.
  - **$> 45\text{ cm}$:** Safe zone (No sound, empty bar).

---

## 🛠️ Components Required

- 1x Arduino (Uno / Nano / Mega)
- 1x SG90 Servo Motor
- 1x HC-SR04 Ultrasonic Distance Sensor
- 1x 16x2 Character LCD Display (HD44780 compatible)
- 1x Analog Joystick Module
- 1x Active/Passive Buzzer
- Breadboard & Jumper Wires

---

## 🔌 Pin Mapping

| Component | Module Pin | Arduino Pin |
| :--- | :--- | :--- |
| **16x2 LCD** | RS, Enable, D4, D5, D6, D7 | 12, 11, 5, 4, 2, 7 |
| **Servo Motor** | Signal (S) | Pin 3 |
| **Joystick** | X-Axis (VRx) | Pin A0 |
| **HC-SR04** | Trigger (Trig) | Pin 8 |
| **HC-SR04** | Echo | Pin 9 |
| **Buzzer** | + (Signal) | Pin 10 |

---

## 💻 Setup & Execution

1. Connect the hardware components according to the **Pin Mapping** table.
2. Ensure the `Servo.h` and `LiquidCrystal.h` libraries are available in your Arduino IDE.
3. Upload the `arduino-joystick-radar.ino` sketch to your board.
4. Open the Serial Monitor at **9600 baud** rate to inspect live distance logs on your computer.

---
---

# 📡 Arduino Joystick Kontrollü Radar Sistemi

Bu proje; bir **Arduino**, **SG90 Servo Motor**, **HC-SR04 Ultrasonik Mesafe Sensörü**, **Joystick**, **16x2 LCD Ekran** ve **Buzzer** kullanılarak geliştirilmiş dahili bir radar/yakınlık uyarı sistemidir.

Joystick aracılığıyla servo motorun açısı manuel olarak kontrol edilir; yöneltilen açıdaki engel mesafesi sensör ile ölçülerek LCD ekranda hem sayısal hem de görsel yakınlık barı şeklinde anlık gösterilir. Engelin yakınlığına göre buzzer farklı frekans ve ritimlerde sesli uyarı verir.

---

## 🚀 Özellikler (Türkçe)

- **Açı Kontrolü:** Joystick X ekseni hareketi ile servo motor $0^\circ$ ile $180^\circ$ arasında hassas şekilde yönlendirilir.
- **Anlık Ölçüm:** HC-SR04 ultrasonik sensör ile hedef mesafe cm cinsinden hesaplanır.
- **Görsel Takip (LCD Ekran):**
  - **Üst Satır:** Anlık servo açısı (`A:`) ve ölçülen mesafe (`M:`).
  - **Alt Satır:** Nesnenin yakınlığına göre uzayıp kısalan dinamik radar barı (`R:[████....]`).
- **Aşamalı Sesli Uyarı (Buzzer):**
  - **$< 10\text{ cm}$:** Yüksek frekanslı (1500 Hz) kesintisiz alarm ve tam dolu bar.
  - **$10 - 25\text{ cm}$:** Hızlı bip sesi (1000 Hz) ve orta derece bar.
  - **$25 - 45\text{ cm}$:** Seyrek bip sesi (800 Hz) ve düşük seviye bar.
  - **$> 45\text{ cm}$:** Güvenli alan (Ses yok, boş bar).

---

## 🛠️ Kullanılan Bileşenler

- 1x Arduino (Uno, Nano veya Mega)
- 1x SG90 Servo Motor
- 1x HC-SR04 Ultrasonik Mesafe Sensörü
- 1x 16x2 Karakter LCD Ekran
- 1x Analog Joystick Modülü
- 1x Pasif/Aktif Buzzer
- Breadboard ve Jumper Kablolar

---

## 🔌 Pin Bağlantı Tablosu

| Bileşen | Modül Pini | Arduino Pini |
| :--- | :--- | :--- |
| **LCD Ekran** | RS, Enable, D4, D5, D6, D7 | 12, 11, 5, 4, 2, 7 |
| **Servo Motor** | Sinyal (S) | Pin 3 |
| **Joystick** | X Ekseni (VRx) | Pin A0 |
| **HC-SR04** | Trigger (Trig) | Pin 8 |
| **HC-SR04** | Echo | Pin 9 |
| **Buzzer** | + (Sinyal) | Pin 10 |

---

## 💻 Kurulum ve Çalıştırma

1. Devre bağlantılarını yukarıdaki **Pin Bağlantı Tablosuna** göre tamamlayın.
2. `Servo.h` ve `LiquidCrystal.h` kütüphanelerinin Arduino IDE içerisinde yüklü olduğundan emin olun.
3. `arduino-joystick-radar.ino` kodunu Arduino IDE ile açıp kartınıza yükleyin.
4. Seri Port Ekranını (Serial Monitor) **9600 baud** hızında açarak anlık mesafe verilerini bilgisayar üzerinden de takip edebilirsiniz.
