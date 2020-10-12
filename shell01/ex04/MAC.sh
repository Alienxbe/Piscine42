#!/bin/sh

ifconfig -a | grep -i ether | sed /autoselect/d | cut -c8-24
