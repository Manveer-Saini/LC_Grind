class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourFactor = 30.0;
        double minuteFactor = 6.0;
        
        double minuteAngle = minutes * minuteFactor;
        
        double hourAngle = (hour % 12 + minutes / 60.0) * hourFactor;
        
        double difference = abs(hourAngle - minuteAngle);
        
        
        
        double result = 360 - difference <= difference ? 360 - difference : difference;
        
        return result;
    }
};