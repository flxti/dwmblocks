#!/bin/dash

volstat=$(pamixer --get-mute --get-volume)

if "${volstat% *}" ; then
    echo " muted"
else
    echo " ${volstat#* }%"
fi
