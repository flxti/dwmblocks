#!/bin/dash
case $BLOCK_BUTTON in
    #1) pamixer --toggle-mute ;;
    1) pactl set-sink-mute 1 toggle ;;
    2) exec pavucontrol ;;
esac
