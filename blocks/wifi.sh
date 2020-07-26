#!/bin/dash
ROW=$(nmcli -t -f active,ssid,signal dev wifi | rg '^yes' | cut -c 5-)
echo " ${ROW}%"
