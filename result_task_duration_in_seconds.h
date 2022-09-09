#include <iostream>
using namespace std;

float ResultTaskDurationInSeconds(int seconds, int minutesToSeconds, int hoursToSeconds, int daysToSeconds){

    return  seconds + minutesToSeconds + hoursToSeconds + daysToSeconds;
}