# On-demand time blurring for Xen guest-VMs

Please refer to our esorics 2017 paper "On-demand time blurring to support side-channel defense" for more details.

Please use this following configs for building xen-4.6.0

--disable-blktap1 --disable-qemu-traditional --disable-rombios --with-system-seabios=/usr/share/seabios/bios-256k.bin --with-extra-qemu-configure-args="--enable-spice --enable-usb-redir"

---

## Usage:

1. re-compile Xen
2. install Xen
3. re-compile Guest Linux Kernel
4. install kernel and guest-VM
5. enable time blurring
