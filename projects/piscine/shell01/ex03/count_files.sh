#!/bin/sh

find . -type f -o -type d | wc -l | cut -c8-
