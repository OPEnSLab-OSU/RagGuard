# 🚽 RagGuard | [Wiki](https://github.com/OPEnSLab-OSU/RagGuard/wiki)
Project Lead: **Dylan Heisey**
Project Members: **Aiden Olsen**

Sewer pipes carry waste that contains fats, oils, grease (FOG), and other debris that can cause buildup and complications in the system. The RagGuard project aims to protect sensors in these pipes from FOG and debris buildup that can affect the integrity of readings. Using a motor, the RagGuard periodically shakes itself and the sensor to reduce the amount of debris affecting the sensor's performance.

More information about assembly, testing, and operation can be found at the [wiki](https://github.com/OPEnSLab-OSU/RagGuard/wiki).

# ⚙️ RagGuard Programming Instructions

## Arduino UNO Setup:

1. In the arduino IDE do the following: `File > Examples > ArduinoISP > ArduinoISP`
2. Select the ardunio uno board and port
3. Upload the sketch

## Install ATtiny85 board core:

1. Go to `Settings`
2. Add the following url to the additional board manager URLs: `http://drazzy.com/package_drazzy.com_index.json`
3. In the `Board Manager` install search and install `ATtinyCore`

## Burn the bootloader:

1. Set the board: `Tools > Board > ATTinyCore > ATtiny25/45/85 (no bootloader)`
2. Set clock to `8MHz`
3. Set programmer as `Arduino as ISP`
4. Click `Tools > Burn Bootloader` to burn the bootloader

## Upload the code:

1. Set the board: `Tools > Board > ATTinyCore > ATtiny25/45/85 (no bootloader)`
2. Set clock to `8MHz`
3. Set programmer as `Arduino as ISP`
4. Upload the `RagGuard.ino` sketch to the board
