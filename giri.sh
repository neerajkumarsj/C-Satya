#!/bin/bash

which docker

if [ $? -eq 0 ]
then
    docker --version | grep "Docker version"
    if [ $? -eq 0 ]
    then
        echo "Docker is Installed"
        sudo docker ps -a
    else
        echo "Docker is Installed, But not Running"
    fi
else
    echo "Docker needs to be installed" >&2
fi
