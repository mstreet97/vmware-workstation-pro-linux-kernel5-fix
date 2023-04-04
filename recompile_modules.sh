#!/bin/bash
sudo cp ./vmware-host-modules-workstation-16.2.0/vmmon-only/include/vm_asm_x86.h /usr/lib/vmware/modules/source/vmmon-only/include/vm_asm_x86.h
cd /usr/lib/vmware/modules/source/vmmon-only
sudo make
cd ../vmnet-only
sudo make
cd ../
sudo cp vmmon.o /lib/modules/`uname -r`/kernel/drivers/misc/vmmon.ko
sudo cp vmnet.o /lib/modules/`uname -r`/kernel/drivers/misc/vmnet.ko
sudo depmod -a
sudo systemctl restart vmware.service

