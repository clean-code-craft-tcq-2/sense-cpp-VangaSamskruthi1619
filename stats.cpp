#include "stats.h"
#include "math.h"
#include <bits/stdc++.h>

using namespace std;

Stats Statistics::ComputeStatistics(const std::vector<double>& vect ) 
{
    //Implement statistics here
    Stats sensor1;
    if (vect.empty())
    {
        sensor1.average = (sqrt(-1.0)); 
        sensor1.max = (sqrt(-1.0));
        sensor1.min = (sqrt(-1.0));
    }
    else
    {
        double avg = std::accumulate(vect.begin(), vect.end(), 0.0) / vect.size();
        sensor1.average = round(avg*1000.0)/1000.0;
        sensor1.max = *std::max_element(vect.begin(), vect.end()); 
        sensor1.min = *std::min_element(vect.begin(), vect.end()); 
    }
    return sensor1;  
}
void StatsAlerter::checkAndAlert(const std::vector<double>& vect)
{
    if(*std::max_element(vect.begin(), vect.end()) > MaxThreshold)
    {
        alert[0].emailSent = true;
        alert[1].ledGlows = true;
    }
    else
    {
        alert[0].emailSent = false;
        alert[1].ledGlows = false;
    }
}
