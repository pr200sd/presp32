Сетевой интерфейс **presp32** предназначен для расширения коммуникационных возможностей программируемых реле серии ПР200, ПР102, ПР100. 
В зависимости от используемой [прошивки](https://github.com/pr200sd/presp32/wiki/3.1-%D0%92%D0%B5%D1%80%D1%81%D0%B8%D0%B8-%D0%BF%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%BD%D0%BE%D0%B3%D0%BE-%D0%BE%D0%B1%D0%B5%D1%81%D0%BF%D0%B5%D1%87%D0%B5%D0%BD%D0%B8%D1%8F) и [модификации плат](https://github.com/pr200sd/presp32/wiki/2.-%D0%9C%D0%BE%D0%B4%D0%B8%D1%84%D0%B8%D0%BA%D0%B0%D1%86%D0%B8%D0%B8), доступны следующие сервисы и протоколы:
* [modbus TCP](https://github.com/pr200sd/presp32/wiki/4.2-Modbus-TCP)
* [Modbus RTU](https://github.com/pr200sd/presp32/wiki/4.3-Modbus-RTU)
* [Telegram Bot](https://github.com/pr200sd/presp32/wiki/4.4-Telegram-Bot)
* [HomeKit](https://github.com/pr200sd/presp32/wiki/4.5-HomeKit)
* [MQTT](https://github.com/pr200sd/presp32/wiki/4.8-MQTT)
* [1-wire(ds18b20)](https://github.com/pr200sd/presp32/wiki/4.6-ds18b20)
* [Logger](https://github.com/pr200sd/presp32/wiki/4.9-Logger)
* [Digital-IO](https://github.com/pr200sd/presp32/wiki/4.7-Digital-IO)

Существует несколько модификаций сетевых интерфейсов для подключения к программируемым реле.
***
_Вариант для установки в модификацию ПР200, подключение через WI-FI._
![](https://github.com/pr200sd/presp32/blob/main/img/presp32_psram.jpg)
***
_Вариант внешнего интерфейса, подключается через RS485, можно использовать совместно с модификациями ПР200, ПР102, ПР100, подключение через WI-FI._
![](https://github.com/pr200sd/presp32/blob/main/img/presp32_ext.jpg)
***
_Вариант в виде USB стика, можно использовать так же как внешний вариант, или как отладочный комплект при пусконаладочных работах на объекте, подключение через WI-FI._
![](https://github.com/pr200sd/presp32/blob/main/img/pr_stick_tr.jpg)
***
_Версия с подключением по Ethernet._
![](https://github.com/pr200sd/presp32/blob/main/img/pr_eth1.jpg)
