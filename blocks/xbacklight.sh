#!/bin/dash
BACKLIGHTF=$(xbacklight -get)
BACKLIGHT=${BACKLIGHTF%.*}
echo "🌑 ${BACKLIGHT}%"
