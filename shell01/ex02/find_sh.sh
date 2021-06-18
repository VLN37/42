#!/bin/bash
find . -type f | rev | cut -d '/' -f1 | grep '^hs.' | rev | cut -d '.' -f1