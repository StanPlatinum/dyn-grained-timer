# On-demand time blurring for Xen guest-VMs

Please refer to our esorics 2017 paper "On-demand time blurring to support side-channel defense" for more details.


---

## Usage:

1. re-compile Xen

Please use this following configs for building xen-4.6.0

--disable-blktap1 --disable-qemu-traditional --disable-rombios --with-system-seabios=/usr/share/seabios/bios-256k.bin --with-extra-qemu-configure-args="--enable-spice --enable-usb-redir"

2. install Xen

Just need to make xen (no need to make tools)

3. re-compile Guest Linux Kernel using the provided (modified) 3.14.60 Linux version

4. install kernel and guest-VM

5. enable time blurring
