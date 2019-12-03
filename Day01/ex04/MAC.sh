#!/bin/sh
ifconfig | grep "ether " | sed 's/ether//' | tr -d ' \t' | sort -u
