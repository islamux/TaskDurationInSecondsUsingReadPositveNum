#include <iostream>
using namespace std;

#include "read_number_positive_int.h"
#include "mintes_to_seconds_int.h"
#include "hours_to_minutes_int.h"
#include "days_to_hours_int.h"
#include "result_task_duration_in_seconds.h"

#include "print_shapes.h"
#include "print_number_float_with_double_msg.h"
#include "print_number_int_with_double_msg.h"

//#include "st_task_duration.h"

/*
    * Calculate the task duration in seconds
        * Read : days, hours, minutes, seconds ==> ReadingPositiveNum Func
        *               2,      5,    ,     45,         35      = 193,535
        
         # Steps
            - ReadingPositiveNum Func , days, hours, minuts, seconds //? Done
            - ReadStruct                                          //? Done
            -  HoursToMinutes()
            
            
            -  DaysToHours()                                //? Done
            -  DaysToMinutes()
            
            -  MinutesToSeconds(int minutes)                           //? Done
            -  HoursToSeconds(int hours)
            -  DaysToSecondes(int days)
           
            - PrintTimeDurationInSeconds()
*/

int main(){

    // Reading using ReadPositiv number Func.
    int daysNum = ReadNumberPositiveInt("Enter a positive day number:  ");
    int hoursNum = ReadNumberPositiveInt("Enter a positive hours number:  ");
    int miuntesNum = ReadNumberPositiveInt("Enter a positive miutets number:  ");
    int secondsNum = ReadNumberPositiveInt("Enter a positive seconds number: ");

    // Decoration 
    PrintShapes(30,'*');

    // Seconds 
    PrintNumberIntWithDoubleMsg("Seconds = ",secondsNum ,".");

    // Minutes ==> seconds | Read Minutes from ReadingPositiveNum Func 
    int minutuesToSeconds =  MinutesToSecondsInt(miuntesNum);
    PrintNumberIntWithDoubleMsg("Minutes To Seconds = " ,minutuesToSeconds, " seconds.");

    // Hours ==> minutes | Read hours from ReadingPositiveNum Func
    int hoursToMinutes = HoursToMinutesInt(hoursNum);
    //PrintNumberIntWithDoubleMsg("Hours = ", hoursToMinutes, " minutes.");
    int hoursToSeconds = MinutesToSecondsInt(hoursToMinutes);
    PrintNumberIntWithDoubleMsg("Hours To Seconds = ", hoursToSeconds, " seconds");

    // Days ==> hours | Read days from ReadingPositiveNum Func
     int daysToHours =  DaysToHoursInt(daysNum);
    //PrintNumberIntWithDoubleMsg("Days = ",daysToHours, " hours.");
    int hoursToMinutes2 =  HoursToMinutesInt(daysToHours);
    int daysToSeconds =  MinutesToSecondsInt(hoursToMinutes2);
    PrintNumberIntWithDoubleMsg("Days To Seconds = ",daysToSeconds, " seconds");

    //Calculate the result
    float Result = ResultTaskDurationInSeconds(secondsNum, minutuesToSeconds, hoursToSeconds, daysToSeconds );  

    // Decoration 
    PrintShapes(30,'*');

    // Print Resutl 
    PrintNumberFloatWithDoublMsg("Task Duration = ",Result , " seconds.");
    
    return 0;
}