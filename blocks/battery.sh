#!/bin/dash
FILE=/sys/class/power_supply/BAT0/capacity
if test -f "$FILE"; then
  read -r capacity <"$FILE"
  echo "${capacity}%"
fi
