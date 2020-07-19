# !/bin/python3

import math
import os
import random
import re
import sys
import datetime
# Complete the time_delta function below.

def time_delta(t1, t2):
    #Getting the date, time from t1
    wd1 = t1[:3]
    dd1 = int(t1[3:6])
    mon1 = t1[7:10]
    yy1 = int(t1[10:15])
    hh1 = int(t1[16:18])
    mm1 = int(t1[19:21])
    ss1 = int(t1[22:24])
    #tm1 = t1[15:24]
    #z1 = t1[26:31]
    off1 = t1[25:26]
    offh1 = t1[26:28]
    offm1 = t1[28:30]

    z1 = offh1+':'+offm1+':'+'00'

    #Getting the date, time from t2
    wd2 = t2[:3]
    dd2 = int(t2[3:6])
    mon2 = t2[7:10]

    yy2 = int(t2[10:15])
    hh2 = int(t2[16:18])
    mm2 = int(t2[19:21])
    ss2 = int(t2[22:24])

    #tm2 = t2[15:24
    #z2 = t2[26:31]
    off2 = t2[25:26]
    offh2 = t2[26:28]
    offm2 = t2[28:30]

    z2 = offh2+':'+offm2+':'+'00'
    # List of months.

    month_set = ['Dummy','Jan','Feb','Mar','Apr','May',
                 'Jun','Jul','Aug','Sep','Oct','Nov','Dec']

    #day1 = datetime.date(yy1, month_set.index(mon1), dd1)
    #day2 = datetime.date(yy2, month_set.index(mon2), dd2)
    #tm1 = datetime.time(hour=hh1, minute=mm1, second=ss1, 
    #tm2 = datetime.time(hour=hh2, minute=mm2, second=ss2,
    #Forming the timestamps

    timestamp1 = datetime.datetime(yy1, month_set.index(mon1),
    dd1, hour = hh1, minute=mm1, second=ss1, microsecond=0, tzinfo=None)
    timestamp2 = datetime.datetime(yy2, month_set.index(mon2), 
    dd2, hour=hh2, minute=mm2, second=ss2, microsecond=0, tzinfo=None)

    #Creating the offset in datetime format
    offset1 =datetime.time(hour=int(offh1), minute=int(offm1), 
    second=0, microsecond=0, tzinfo=None)

