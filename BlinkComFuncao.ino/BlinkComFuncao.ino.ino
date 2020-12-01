

void setup() 
{
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{

    pisca (5);
    delay(3000);
}


void pisca( int nvezes)
{
    for( int i=0 ; i< nvezes; i++){
        digitalWrite(LED_BUILTIN, HIGH);  
        delay(200);                      
        digitalWrite(LED_BUILTIN, LOW);    
        delay(200);
    }
}
