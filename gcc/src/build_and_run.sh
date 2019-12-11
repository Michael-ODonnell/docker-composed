#!/bin/bash

set -eu

cd /app

g++ -std=c++17 -o /app/app.exe /app/main.cpp
/app/app.exe