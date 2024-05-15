/*
   -- New project --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.10 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.13.11 or later version;
     - for iOS 1.10.3 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// you can enable debug logging to Serial at 115200
#define REMOTEXY__DEBUGLOG    

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP8266_HARDSERIAL_POINT


// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 115200
#define REMOTEXY_WIFI_SSID "RemoteXY"
#define REMOTEXY_WIFI_PASSWORD "123456789"
#define REMOTEXY_SERVER_PORT 6377


#include <RemoteXY.h>

// RemoteXY GUI configuration  
#pragma pack(push, 1)  
uint8_t RemoteXY_CONF[] =   // 118 bytes
  { 255,5,0,0,0,111,0,17,0,0,0,5,2,106,200,200,84,1,1,5,
  0,2,73,32,23,52,122,15,44,22,1,31,26,31,31,79,78,0,79,70,
  70,0,1,2,30,57,57,32,15,24,24,0,31,31,0,2,6,116,28,27,
  11,49,83,9,0,1,26,31,31,79,78,0,79,70,70,0,2,62,117,28,
  27,15,50,53,11,0,135,26,31,31,79,78,0,79,70,70,0,2,37,157,
  28,27,121,50,53,11,0,205,26,31,31,79,78,0,79,70,70,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t switch_01; // =1 if switch ON and =0 if OFF
  uint8_t button_01; // =1 if button pressed, else =0
  uint8_t switch_02; // =1 if switch ON and =0 if OFF
  uint8_t switch_03; // =1 if switch ON and =0 if OFF
  uint8_t switch_04; // =1 if switch ON and =0 if OFF

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0

} RemoteXY;   
#pragma pack(pop)
 
/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#define PIN_SWITCH_01 13
#define PIN_BUTTON_01 12
#define PIN_SWITCH_02 9
#define PIN_SWITCH_03 10
#define PIN_SWITCH_04 11


void setup() 
{
  RemoteXY_Init (); 
  
  pinMode (PIN_SWITCH_01, OUTPUT);
  pinMode (PIN_BUTTON_01, OUTPUT);
  pinMode (PIN_SWITCH_02, OUTPUT);
  pinMode (PIN_SWITCH_03, OUTPUT);
  pinMode (PIN_SWITCH_04, OUTPUT);
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  digitalWrite(PIN_SWITCH_01, (RemoteXY.switch_01==0)?LOW:HIGH);
  digitalWrite(PIN_BUTTON_01, (RemoteXY.button_01==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_02, (RemoteXY.switch_02==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_03, (RemoteXY.switch_03==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_04, (RemoteXY.switch_04==0)?LOW:HIGH);
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay(), use instead RemoteXY_delay() 


}