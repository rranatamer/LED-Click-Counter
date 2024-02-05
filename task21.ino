int button = 13;
int red = 9;
int yellow = 10;
int white = 11;
int reading = 0;
int counter = 0;
int time = 250;

void setup() {
for(int i=9;i<=11;i++)
{
pinMode
(i,OUTPUT);}
}
void loop() {
for(int
i
=
9;i<=11;i++)

{
digitalWrite(i,HIGH);
delay(250);
}
for(int
i
=11;i>=
9;i--
)

{
digitalWrite(i,LOW);
delay(250);
}
}
