#!/bin/sh

find . -type f -name "*.sh" | sed "s/.*\///" | rev | cut -c4- | rev
