#!/bin/bash
wget -0 /tmp/win.so https://github.com/radu2022/alx-low_level_programming/raw/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
