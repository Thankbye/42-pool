#!/bin/sh
ifconfig | grep -i ether | sed 's/        ether //g' | sed  's/  tx.*//'

