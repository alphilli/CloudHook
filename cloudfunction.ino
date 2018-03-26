bool red_status = false;
bool green_status = false;
bool yellow_status = false;

int RedPin = 7;
int GreenPin = 6;
int YellowPin = 5;

int toggle_led(String colour)
{
    if(colour == "red")
    {
        red_status = !red_status;
        digitalWrite(RedPin, red_status);
        return 1;
    }
    else if (colour == "green")
    {
        green_status = !green_status;
        digitalWrite(GreenPin, green_status);
        return 1;
    }
    else if (colour == "yellow")
    {
        yellow_status = !yellow_status;
        digitalWrite(YellowPin, yellow_status);
        return 1;
    }
    return 0;
}

void setup() 
{
    pinMode(RedPin, OUTPUT);
    pinMode(GreenPin, OUTPUT);
    pinMode(YellowPin, OUTPUT);
    
    bool success = Particle.function("toggle_led", toggle_led);
}

void loop() 
{

}