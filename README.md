# 🚽 RagGuard | [Wiki](https://github.com/OPEnSLab-OSU/RagGuard/wiki)
Project Lead: **Dylan Heisey**
Project Members: **Aiden Olsen**

Sewer pipes carry waste that contains fats, oils, grease (FOG), and other debris that can cause buildup and complications in the system. The RagGuard project aims to protect sensors in these pipes from FOG and debris buildup that can affect the integrity of readings. Using a motor, the RagGuard periodically shakes itself and the sensor to reduce the amount of debris affecting the sensor's performance.

More information about assembly, testing, and operation can be found at the [wiki](https://github.com/OPEnSLab-OSU/RagGuard/wiki).

# ⚙️ RagGuard Programming Instructions

## 🛠️ Arduino UNO Setup:
#### ↬ The Arduino UNO must be setup as a programmer in order to flash the ATtiny85 microcontroller that the controller board uses. In order to do this, complete the following steps:

1. In the arduino IDE do the following: `File > Examples > ArduinoISP > ArduinoISP`
2. Select the ardunio uno board and port
3. Upload the sketch

## 💾 Install ATtiny85 board core:
#### ↬ The ATtiny85 doesnt have an Arduino core by deafault so you must install it to your Arduino IDE as follows:

1. Go to `Settings`
2. Add the following url to the additional board manager URLs:
   ```
   http://drazzy.com/package_drazzy.com_index.json
   ```
3. In the `Board Manager` search for and install `ATtinyCore`

## 🔥 Burn the bootloader:
#### ↬ In order to have the correct clock speed (which is important for timing) the bootloader must be burned in the following manner:

1. Set the board: `Tools > Board > ATTinyCore > ATtiny25/45/85 (no bootloader)`
2. Set clock to `8MHz`
3. Set programmer as `Arduino as ISP`
4. Click `Tools > Burn Bootloader` to burn the bootloader

## 🚀 Upload the code:
#### ↬ Once the bootloader is burned, we can flash a sketch onto the control board using the Arduino as an In-System-Programmer (ISP).

1. Set the board: `Tools > Board > ATTinyCore > ATtiny25/45/85 (no bootloader)`
2. Set clock to `8MHz`
3. Set programmer as `Arduino as ISP`
4. Upload the `RagGuard.ino` sketch to the board w/ `Sketch > Upload Using Programmer`
