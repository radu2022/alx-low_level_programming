#!/bin/bash
gcc *.o -fPIC -shared -o libwin.so
LD_PRELOAD=/$PWD/libwin.so
