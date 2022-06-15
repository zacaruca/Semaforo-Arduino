#include <Arduino.h>

#include <TaskScheduler.h>

// Declaracion de variables

// Semaforo 1
const byte S1_Coches_Rojo = 13;   // pin para el semaforo 1 Rojo
const byte S1_Coches_Ambar = 12;  // pin para el semaforo 1 Ambar
const byte S1_Coches_Verde = 11;  // pin para el semaforo 1 Verde
const byte S1_Peatones_Rojo = 10; // pin para el semaforo 1 Rojo
const byte S1_Peatones_Verde = 9; // pin para el semaforo 1 Verde

// Semaforo 2
const byte S2_Coches_Rojo = 7;    // pin para el semaforo 2 Rojo
const byte S2_Coches_Ambar = 6;   // pin para el semaforo 2 Ambar
const byte S2_Coches_Verde = 5;   // pin para el semaforo 2 Verde
const byte S2_Peatones_Rojo = 4;  // pin para el semaforo 2 Rojo
const byte S2_Peatones_Verde = 3; // pin para el semaforo 2 Verde

// Semaforo 3
const byte S3_Coches_Rojo = 1;    // pin para el semaforo 3 Rojo
const byte S3_Coches_Ambar = 1;   // pin para el semaforo 3 Ambar
const byte S3_Coches_Verde = 1;   // pin para el semaforo 3 Verde
const byte S3_Peatones_Rojo = 1;  // pin para el semaforo 3 Rojo
const byte S3_Peatones_Verde = 1; // pin para el semaforo 3 Verde

// Semaforo 4
const byte S4_Coches_Rojo = 1;    // pin para el semaforo 4 Rojo
const byte S4_Coches_Ambar = 1;   // pin para el semaforo 4 Ambar
const byte S4_Coches_Verde = 1;   // pin para el semaforo 4 Verde
const byte S4_Peatones_Rojo = 1;  // pin para el semaforo 4 Rojo
const byte S4_Peatones_Verde = 1; // pin para el semaforo 4 Verde

void setup()
{
  // Semaforo 1
  pinMode(S1_Coches_Rojo, OUTPUT);
  pinMode(S1_Coches_Ambar, OUTPUT);
  pinMode(S1_Coches_Verde, OUTPUT);
  pinMode(S1_Peatones_Rojo, OUTPUT);
  pinMode(S1_Peatones_Verde, OUTPUT);

  // Semaforo 2
  pinMode(S2_Coches_Rojo, OUTPUT);
  pinMode(S2_Coches_Ambar, OUTPUT);
  pinMode(S2_Coches_Verde, OUTPUT);
  pinMode(S2_Peatones_Rojo, OUTPUT);
  pinMode(S2_Peatones_Verde, OUTPUT);

  // Semaforo 3
  pinMode(S3_Coches_Rojo, OUTPUT);
  pinMode(S3_Coches_Ambar, OUTPUT);
  pinMode(S3_Coches_Verde, OUTPUT);
  pinMode(S3_Peatones_Rojo, OUTPUT);
  pinMode(S3_Peatones_Verde, OUTPUT);

  // Semaforo 4
  pinMode(S4_Coches_Rojo, OUTPUT);
  pinMode(S4_Coches_Ambar, OUTPUT);
  pinMode(S4_Coches_Verde, OUTPUT);
  pinMode(S4_Peatones_Rojo, OUTPUT);
  pinMode(S4_Peatones_Verde, OUTPUT);

  // Apagamos todo el semaforo 1
  digitalWrite(S1_Coches_Rojo, false);
  digitalWrite(S1_Coches_Ambar, false);
  digitalWrite(S1_Coches_Verde, false);
  digitalWrite(S1_Peatones_Rojo, false);
  digitalWrite(S1_Peatones_Verde, false);

  // Apagamos todo el semaforo 2
  digitalWrite(S2_Coches_Rojo, false);
  digitalWrite(S2_Coches_Ambar, false);
  digitalWrite(S2_Coches_Verde, false);
  digitalWrite(S2_Peatones_Rojo, false);
  digitalWrite(S2_Peatones_Verde, false);

  // Apagamos todo el semaforo 3
  digitalWrite(S3_Coches_Rojo, false);
  digitalWrite(S3_Coches_Ambar, false);
  digitalWrite(S3_Coches_Verde, false);
  digitalWrite(S3_Peatones_Rojo, false);
  digitalWrite(S3_Peatones_Verde, false);

  // Apagamos todo el semaforo 4
  digitalWrite(S4_Coches_Rojo, false);
  digitalWrite(S4_Coches_Ambar, false);
  digitalWrite(S4_Coches_Verde, false);
  digitalWrite(S4_Peatones_Rojo, false);
  digitalWrite(S4_Peatones_Verde, false);
}

void loop()
{
}