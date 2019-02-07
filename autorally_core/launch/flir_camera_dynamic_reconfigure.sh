#!/bin/bash

# This file exists to add a delay between the two invocations of 'dynparam load'

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

sleep 3

rosrun dynamic_reconfigure dynparam load left_camera_nodelet ${DIR}/flir_default_dynconfig.yaml -t 5

sleep 5

rosrun dynamic_reconfigure dynparam load right_camera_nodelet ${DIR}/flir_default_dynconfig.yaml -t 5
