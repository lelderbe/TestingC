#!/bin/bash
./main1 | ./main2 | ./main3
echo $?
#./main1 | ./main2 | ./main3 | ps xo pid,ppid,comm
