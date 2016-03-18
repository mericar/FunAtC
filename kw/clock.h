<<<<<<< HEAD

#ifndef CLOCK_H_
#define CLOCK_H_
/** The class Clock represents the time of day. */
class Clock {
  public:
    // The interface is defined here
    /** Set the clock. */
    void set_clock(int hr, int min, int sec);
    /** Get the current hour. */
    int get_hours() const;
    /** Get the current minute. */
    int get_minutes() const;
    /** Get the current second. */
    int get_seconds() const;
    /** Advance the clock by one second. */
    void tick();
   
private:
    // The implementation details are defined here
    /** The hours since midnight or noon. */
    int hours;
    /** The minutes within the current hour. */
    int minutes;
    /** The seconds within the current minute. */
    int seconds;
}; 

#endif
=======
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
>>>>>>> 8dba4515a621c5cbffbf7968566762a002d6e846
