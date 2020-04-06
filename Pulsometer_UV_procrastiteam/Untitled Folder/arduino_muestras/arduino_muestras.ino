int contador;

void setup(){
  
  contador=1;
  Serial.begin(9600);
  }

void loop(){

  muestreo();
  contador++;
}

void muestreo(){

    int A=analogRead(A0);
    float B=(A*5)/1023;
    Serial.print(millis());
    Serial.print(";");
    Serial.println(B);

delay(2);
  }
