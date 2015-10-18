#!/usr/bin/env python3
import subprocess
import sys
from time import sleep
import os

if len(sys.argv) == 2:
    delay = int(sys.argv[1])
else:
    delay = 3

data = sys.stdin.read().rstrip('\n')
sleep(delay)
subprocess.call(['xdotool', 'type', '--clearmodifiers', data])
