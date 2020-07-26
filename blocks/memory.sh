#!/bin/dash
echo " $(free --mega | awk '{ if (NR == 2) { print $3 } }')MB"
