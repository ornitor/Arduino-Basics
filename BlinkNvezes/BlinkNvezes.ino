int nvezes;

void setup() 
{
    pinMode(LED_BUILTIN, OUTPUT);
    nvezes = 3;
}

void loop() 
{

    for( int i=0 ; i< nvezes; i++){
        digitalWrite(LED_BUILTIN, HIGH);  
        delay(200);                      
        digitalWrite(LED_BUILTIN, LOW);    
        delay(200);
    }
    delay(1000);
}
