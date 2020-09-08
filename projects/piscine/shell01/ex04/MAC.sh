#!/bin/sh

ifconfig -a | grep ether | sed /autoselect/d | cut -c8-24
