#include <Servo.h>

class MotorList
{
  public:
    void init(Servo motor1, Servo motor2, Servo motor3);
    void clear();
    void fold() const;
    
  private:
    //sides
    Servo motor1;
    Servo motor2;
    //bottom
    Servo motot3;
};