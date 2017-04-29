#!/bin/bash
make clean
qmake
make -j4
make clean
