#!/usr/bin/env bash

if [[ $# -gt 0 ]]; then
   comm="qemu-x86_64 -L ./lib/runtime ./build/bin/$*"
   echo $comm && $comm
fi
