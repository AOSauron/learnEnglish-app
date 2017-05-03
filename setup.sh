#!/bin/bash
make clean
qmake
make -j4
make clean

echo "[COMPILATION FINISHED] To launch the app, juste launch ./learnEnglish"
