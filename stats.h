#include <vector>

struct Stats
{
        double average = 0.0;
        double max = 0.0;
        double min = 0.0;
};
/*struct EmailAlert
{
        bool emailSent = false;
};
struct LEDAlert
{
        bool ledGlows = false;
};
struct IAlerter
{
        //bool Alerter = false;
        EmailAlert emailAlert;
        LEDAlert ledAlert;
};*/
//typedef bool IAlerter;
class IAlerter{
        public:
                IAlerter(){}
                bool emailSent = false;
                bool ledGlows = false;
};
class EmailAlert : public IAlerter{
        public:
                EmailAlert(){}               
};
class LEDAlert : public IAlerter{
        public:
                LEDAlert(){}                
};

class StatsAlerter
{
        public :
                StatsAlerter(){}
                StatsAlerter(const float Maxthreshold,std::vector<IAlerter*> Alert): MaxThreshold(Maxthreshold),alert(Alert){}
                const float MaxThreshold = 0.0;
                std::vector<IAlerter*> alert;
                void checkAndAlert(const std::vector<double>&);                  
};           

namespace Statistics {
    Stats ComputeStatistics(const std::vector<double>& );
}
