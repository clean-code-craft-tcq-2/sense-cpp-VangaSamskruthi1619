#include "stats.h"
#include "math.h"

using namespace std;

struct Stats
{
        float average;
        float max;
        float min;
};

Stats Statistics::ComputeStatistics(const std::vector<___>& func ) 
{
    //Implement statistics here
    Stats sensor1;
    if (func.empty())
    {
        sensor1.average = (sqrt(-1.0)); 
        sensor1.max = (sqrt(-1.0));
        sensor1.min = (sqrt(-1.0));
    }
    else
    {
        sensor1.average = std::accumulate(func.begin(), func.end(), 0.0) / func.size(); 
        sensor1.max = *std::max_element(func.begin(), func.end()); 
        sensor1.min = *std::min_element(func.begin(), func.end()); 
    }
    return sensor1;  
}
