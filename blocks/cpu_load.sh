#!/bin/dash
echo " $(cut -d " " -f 1,2,3 /proc/loadavg)"
