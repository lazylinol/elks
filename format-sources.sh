#!/bin/bash

find ./elks -iname '*.h' -o -iname '*.c' | xargs clang-format -i