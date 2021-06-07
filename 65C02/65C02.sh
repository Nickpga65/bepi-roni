#!/bin/bash
ca65 ~/bepi-roni/65C02/src/rom.s -I ~/bepi-roni/65C02/inc -I ~/bepi-roni/65C02/src
ld65 ~/bepi-roni/65C02/src/rom.o -C ~/bepi-roni/65C02/bepi-roni.cfg