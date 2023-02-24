void setup()
{
    pinMode(2, INPUT);
    pinMode(3, INPUT);
    pinMode(4, INPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
}
void loop()
{
    if (digitalRead(2) == 0 && digitalRead(3) == 0 && digitalRead(4) == 0)
    {
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
    }

    if (digitalRead(2) == 1 && digitalRead(4) == 0 && digitalRead(3) == 1)
    {
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
    }
    if (digitalRead(2) == 1 && digitalRead(4) == 0 && digitalRead(3) == 0)
    {
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(9, LOW);
        delay(15);
    }
    if (digitalRead(2) == 0 && digitalRead(4) == 0 && digitalRead(3) == 1)
    {
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        delay(15);
    }
    if (digitalRead(2) == 0 && digitalRead(4) == 1 && digitalRead(3) == 1)
    {
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        delay(15);
    }
    if (digitalRead(2) == 1 && digitalRead(4) == 1 && digitalRead(3) == 0)
    {
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(9, LOW);
        delay(15);
    }
    if (digitalRead(2) == 0 && digitalRead(4) == 1 && digitalRead(3) == 0)
    {
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        delay(15);
    }
}