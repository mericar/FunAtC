#ifndef CLOCK_H_
#define CLOCK_H_


class Clock {
  public:
    // The interface is defined here
    
    void set_clock(int hr, int min, int sec);
    
    int get_hours() const;
    
    int get_minutes() const;
    
    int get_seconds() const;
    
    void tick();
   
private:
    // The implementation details are defined here
    
    int hours;
    int minutes;
    int seconds;
}; 

#endif
