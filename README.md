# DZ60 60% Mechanical Keyboard PCB

![DZ60](https://cdn.shopify.com/s/files/1/1473/3902/products/c_1.jpg)

## A Customizable 60% Mechanical Keyboard PCB

This section is **copied form the QMK repository**.

![A Customizable 60% Mechanical Keyboard PCB](https://cdn.shopify.com/s/files/1/1473/3902/files/1_03_abb48769-9486-44bd-a761-7cd39d7e1bda.jpg)

* Keyboard Maintainer: QMK Community
* Hardware Supported: DZ60 60% Mechanical Keyboard PCB
* Hardware Availability: [KBDfans](https://kbdfans.com/collections/60/products/dz60-60-pcb)

Make example for this keyboard (after setting up your build environment):

    make dz60:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## QMK setup

First, we must setup setup qmk in a virtual environment.
To install the necessary packages and python modules

```sh
sudo apt install -y git python3-venv
python -m venv .venv
source .venv/bin/activate (or .venv/bin/activate.fish)
python -m pip install -U -r requirements.txt
```

Now, clone the qmk repository

```sh
git clone https://github.com/qmk/qmk_firmware.git /path/to/qmk/home
```

Finally, run the setup

```sh
qmk setup --home /path/to/qmk/home
```

## This repository

This config is suitable for both V1 (DZ60 Rev 3.0) and V2 (DZ60 V2 Flex cut) board.

### Cloning this repo

This repository holds a fake new keyboard with only custom changes. It requires needs to be cloned in the "qmk_firmwares/keyboard" directory of QMK in order to be usable.

```sh
git clone https://github.com/ickule/dz60_ickule.git /path/to/qmk/home/keyboards/
```

### QMK configuration

To set this keyboard and its keymap as default, use the following:

```sh
qmk config compile.keyboard=dz60_ickule/v1
or
qmk config compile.keyboard=dz60_ickule/v2
qmk config compile.keymap=via
```

To set the default number of threads to use for compiling, use the following:
Make sure you adapt the number to the number of threads of your computer.

```sh
qmk config compile.parallel=16
```

### Compiling the keyboard

To compile after the previous section setup, run the following:

```sh
qmk compile
```

Alternatively, you can compile the keyboard and its keymap directly with the following:

```sh
qmk compile -kb dz60_ickule/v1 -km via -j 16
or
qmk compile -kb dz60_ickule/v2 -km via -j 16
```
