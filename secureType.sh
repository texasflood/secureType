#!/bin/bash
read data
if [ "$1" == "" ]; then
    sleep 3
else
    sleep $1
fi

xdotool type --clearmodifiers "$data"
