## Time Conversion
### Problem Statement
<p>Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.
</p>
 
### Input
```c
 int duration, hour, minute, sec;
// take input
scanf("%d", &duration);
```
### Time conversion from sec to hour:minute:sec
```c
hour = duration / 3600;
sec = duration % 3600;
minute = sec / 60;
sec %= 60;
```
### Output
```c
printf("%d:%d:%d\n", hour, minute, sec);\
```