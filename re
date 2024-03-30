#!/bin/sh

git pull
echo reboot > fork
git commit -am re
git push
