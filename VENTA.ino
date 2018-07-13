/* 
MIDI IN FOR OLD ORGAN
Written by,
Michał Szablewski
email : miszkablewski@gmail.com
*/

#include <MIDI.h>
#include <PCF8574.h>
#include <Wire.h>

PCF8574 PCF_0;
PCF8574 PCF_1;
PCF8574 PCF_2;
PCF8574 PCF_3;
PCF8574 PCF_4;
PCF8574 PCF_5;
PCF8574 PCF_6;
PCF8574 PCF_7; 

MIDI_CREATE_DEFAULT_INSTANCE();

void setup() {
  pinMode(13, OUTPUT);
  PCF_0.begin(0x20);
   PCF_0.pinMode(0, OUTPUT);
   PCF_0.pinMode(1, OUTPUT);
   PCF_0.pinMode(2, OUTPUT);
   PCF_0.pinMode(3, OUTPUT);
   PCF_0.pinMode(4, OUTPUT);
   PCF_0.pinMode(5, OUTPUT);
   PCF_0.pinMode(6, OUTPUT);
   PCF_0.pinMode(7, OUTPUT); 
  PCF_1.begin(0x21);
   PCF_1.pinMode(0, OUTPUT);
   PCF_1.pinMode(1, OUTPUT);
   PCF_1.pinMode(2, OUTPUT);
   PCF_1.pinMode(3, OUTPUT);
   PCF_1.pinMode(4, OUTPUT);
   PCF_1.pinMode(5, OUTPUT);
   PCF_1.pinMode(6, OUTPUT);
   PCF_1.pinMode(7, OUTPUT);
  PCF_2.begin(0x22);
   PCF_2.pinMode(0, OUTPUT);
   PCF_2.pinMode(1, OUTPUT);
   PCF_2.pinMode(2, OUTPUT);
   PCF_2.pinMode(3, OUTPUT);
   PCF_2.pinMode(4, OUTPUT);
   PCF_2.pinMode(5, OUTPUT);
   PCF_2.pinMode(6, OUTPUT);
   PCF_2.pinMode(7, OUTPUT);
  PCF_3.begin(0x23);
   PCF_3.pinMode(0, OUTPUT);
   PCF_3.pinMode(1, OUTPUT);
   PCF_3.pinMode(2, OUTPUT);
   PCF_3.pinMode(3, OUTPUT);
   PCF_3.pinMode(4, OUTPUT);
   PCF_3.pinMode(5, OUTPUT);
   PCF_3.pinMode(6, OUTPUT);
   PCF_3.pinMode(7, OUTPUT);
  PCF_4.begin(0x24);
   PCF_4.pinMode(0, OUTPUT);
   PCF_4.pinMode(1, OUTPUT);
   PCF_4.pinMode(2, OUTPUT);
   PCF_4.pinMode(3, OUTPUT);
   PCF_4.pinMode(4, OUTPUT);
   PCF_4.pinMode(5, OUTPUT);
   PCF_4.pinMode(6, OUTPUT);
   PCF_4.pinMode(7, OUTPUT);
  PCF_5.begin(0x25);
   PCF_5.pinMode(0, OUTPUT);
   PCF_5.pinMode(1, OUTPUT);
   PCF_5.pinMode(2, OUTPUT);
   PCF_5.pinMode(3, OUTPUT);
   PCF_5.pinMode(4, OUTPUT);
   PCF_5.pinMode(5, OUTPUT);
   PCF_5.pinMode(6, OUTPUT);
   PCF_5.pinMode(7, OUTPUT);   
  PCF_6.begin(0x26);
   PCF_6.pinMode(0, OUTPUT);
   PCF_6.pinMode(1, OUTPUT);
   PCF_6.pinMode(2, OUTPUT);
   PCF_6.pinMode(3, OUTPUT);
   PCF_6.pinMode(4, OUTPUT);
   PCF_6.pinMode(5, OUTPUT);
   PCF_6.pinMode(6, OUTPUT);
   PCF_6.pinMode(7, OUTPUT); 
  PCF_7.begin(0x27);
   PCF_7.pinMode(0, OUTPUT);
   PCF_7.pinMode(1, OUTPUT);
   PCF_7.pinMode(2, OUTPUT);
   PCF_7.pinMode(3, OUTPUT);
   PCF_7.pinMode(4, OUTPUT);
   PCF_7.pinMode(5, OUTPUT);
   PCF_7.pinMode(6, OUTPUT);
   PCF_7.pinMode(7, OUTPUT);   

      digitalWrite(13,LOW);
      PCF_0.digitalWrite(0,HIGH);
      PCF_0.digitalWrite(1,HIGH);
      PCF_0.digitalWrite(2,HIGH);
      PCF_0.digitalWrite(3,HIGH);
      PCF_0.digitalWrite(4,HIGH);
      PCF_0.digitalWrite(5,HIGH);
      PCF_0.digitalWrite(6,HIGH);
      PCF_0.digitalWrite(7,HIGH);
      PCF_1.digitalWrite(0,HIGH);
      PCF_1.digitalWrite(1,HIGH);
      PCF_1.digitalWrite(2,HIGH);
      PCF_1.digitalWrite(3,HIGH);
      PCF_1.digitalWrite(4,HIGH);
      PCF_1.digitalWrite(5,HIGH);
      PCF_1.digitalWrite(6,HIGH);
      PCF_1.digitalWrite(7,HIGH);
      PCF_2.digitalWrite(0,HIGH);
      PCF_2.digitalWrite(1,HIGH);
      PCF_2.digitalWrite(2,HIGH);
      PCF_2.digitalWrite(3,HIGH);
      PCF_2.digitalWrite(4,HIGH);
      PCF_2.digitalWrite(5,HIGH);
      PCF_2.digitalWrite(6,HIGH);
      PCF_2.digitalWrite(7,HIGH);
      PCF_3.digitalWrite(0,HIGH);
      PCF_3.digitalWrite(1,HIGH);
      PCF_3.digitalWrite(2,HIGH);
      PCF_3.digitalWrite(3,HIGH);
      PCF_3.digitalWrite(4,HIGH);
      PCF_3.digitalWrite(5,HIGH);
      PCF_3.digitalWrite(6,HIGH);
      PCF_3.digitalWrite(7,HIGH);
      PCF_4.digitalWrite(0,HIGH);
      PCF_4.digitalWrite(1,HIGH);
      PCF_4.digitalWrite(2,HIGH);
      PCF_4.digitalWrite(3,HIGH);
      PCF_4.digitalWrite(4,HIGH);
      PCF_4.digitalWrite(5,HIGH);
      PCF_4.digitalWrite(6,HIGH);
      PCF_4.digitalWrite(7,HIGH);
      PCF_5.digitalWrite(0,HIGH);
      PCF_5.digitalWrite(1,HIGH);
      PCF_5.digitalWrite(2,HIGH);
      PCF_5.digitalWrite(3,HIGH);
      PCF_5.digitalWrite(4,HIGH);
      PCF_5.digitalWrite(5,HIGH);
      PCF_5.digitalWrite(6,HIGH);
      PCF_5.digitalWrite(7,HIGH);
      PCF_6.digitalWrite(0,HIGH);
      PCF_6.digitalWrite(1,HIGH);
      PCF_6.digitalWrite(2,HIGH);
      PCF_6.digitalWrite(3,HIGH);
      PCF_6.digitalWrite(4,HIGH);
      PCF_6.digitalWrite(5,HIGH);
      PCF_6.digitalWrite(6,HIGH);
      PCF_6.digitalWrite(7,HIGH);
      PCF_7.digitalWrite(0,HIGH);
      PCF_7.digitalWrite(1,HIGH);
      PCF_7.digitalWrite(2,HIGH);
      PCF_7.digitalWrite(3,HIGH);
      PCF_7.digitalWrite(4,HIGH);
      PCF_7.digitalWrite(5,HIGH);
      PCF_7.digitalWrite(6,HIGH);
      PCF_7.digitalWrite(7,HIGH);

  MIDI.begin(14); // Initialize the Midi Library.
  // OMNI sets it to listen to all channels.. MIDI.begin(2) would set it 
  // to respond to notes on channel 2 only.
  MIDI.setHandleNoteOn(NoteOn); // This is important!! This command
  // tells the Midi Library which function you want to call when a NOTE ON command
  // is received. In this case it's "NoteOn".
  MIDI.setHandleNoteOff(NoteOff); // This command tells the Midi Library 
  // to call "NoteOff" when a NOTE OFF command is received. 
}


void loop() {
    MIDI.read(); // Continuously check if Midi data has been received.
}

void NoteOn(byte channel, byte pitch, byte velocity) { 

    digitalWrite(13,HIGH);
    switch (pitch) {
    case 36:
      PCF_0.digitalWrite(7,LOW);
      break;
    case 37:
      PCF_0.digitalWrite(6,LOW);
      break;
    case 38:
      PCF_0.digitalWrite(5,LOW);
      break;
    case 39:
      PCF_0.digitalWrite(4,LOW);
      break;
    case 40:
      PCF_0.digitalWrite(3,LOW);
      break;
    case 41:
      PCF_0.digitalWrite(2,LOW);
       break;
    case 42:
      PCF_0.digitalWrite(1,LOW);
      break;
    case 43:
      PCF_0.digitalWrite(0,LOW);
      break;
    case 44:
      PCF_1.digitalWrite(7,LOW);
      break;
    case 45:
      PCF_1.digitalWrite(6,LOW);
      break;
    case 46:
      PCF_1.digitalWrite(5,LOW);
      break;
    case 47:
      PCF_1.digitalWrite(4,LOW);
      break;
    case 48:
      PCF_1.digitalWrite(3,LOW);
      break;
    case 49:
      PCF_1.digitalWrite(2,LOW);
      break;
    case 50:
      PCF_1.digitalWrite(1,LOW);
      break;
    case 51:
      PCF_1.digitalWrite(0,LOW);
      break;
    case 52:
      PCF_2.digitalWrite(7,LOW);
      break;
    case 53:
      PCF_2.digitalWrite(6,LOW);
      break;
    case 54:
      PCF_2.digitalWrite(5,LOW);
      break;
    case 55:
      PCF_2.digitalWrite(4,LOW);
      break;
    case 56:
      PCF_2.digitalWrite(3,LOW);
      break;
    case 57:
      PCF_2.digitalWrite(2,LOW);
      break;
    case 58:
      PCF_2.digitalWrite(1,LOW);
      break;
    case 59:
      PCF_2.digitalWrite(0,LOW);
      break;
    case 60:
      PCF_3.digitalWrite(7,LOW);
      break;
    case 61:
      PCF_3.digitalWrite(6,LOW);
      break;
    case 62:
      PCF_3.digitalWrite(5,LOW);
      break;
    case 63:
      PCF_3.digitalWrite(4,LOW);
      break;
    case 64:
      PCF_3.digitalWrite(3,LOW);
      break;
    case 65:
      PCF_3.digitalWrite(2,LOW);
      break;
    case 66:
      PCF_3.digitalWrite(1,LOW);
      break;
    case 67:
      PCF_3.digitalWrite(0,LOW);
      break;
    case 68:
      PCF_4.digitalWrite(7,LOW);
      break;
    case 69:
      PCF_4.digitalWrite(6,LOW);
      break;
    case 70:
      PCF_4.digitalWrite(5,LOW);
      break;
    case 71:
      PCF_4.digitalWrite(4,LOW);
      break;
    case 72:
      PCF_4.digitalWrite(3,LOW);
      break;
    case 73:
      PCF_4.digitalWrite(2,LOW);
      break;
    case 74:
      PCF_4.digitalWrite(1,LOW);
      break;
    case 75:
      PCF_4.digitalWrite(0,LOW);
      break;
    case 76:
      PCF_5.digitalWrite(7,LOW);
      break;
    case 77:
      PCF_5.digitalWrite(6,LOW);
      break;
    case 78:
      PCF_5.digitalWrite(5,LOW);
      break;
    case 79:
      PCF_5.digitalWrite(4,LOW);
      break;
    case 80:
      PCF_5.digitalWrite(3,LOW);
      break;
    case 81:
      PCF_5.digitalWrite(2,LOW);
      break;
    case 82:
      PCF_5.digitalWrite(1,LOW);
      break;
    case 83:
      PCF_5.digitalWrite(0,LOW);
      break;
    case 84:
      PCF_6.digitalWrite(7,LOW);
      break;
    case 85:
      PCF_6.digitalWrite(6,LOW);
      break;
    case 86:
      PCF_6.digitalWrite(5,LOW);
      break;
    case 87:
      PCF_6.digitalWrite(4,LOW);
      break;
    case 88:
      PCF_6.digitalWrite(3,LOW);
      break;
    case 89:
      PCF_6.digitalWrite(2,LOW);
      break;
    case 90:
      PCF_6.digitalWrite(1,LOW);
      break;
    case 91:
      PCF_6.digitalWrite(0,LOW);
      break;
    case 92:
      PCF_7.digitalWrite(7,LOW);
      break;
    case 93:
      PCF_7.digitalWrite(6,LOW);
      break;
    case 94:
      PCF_7.digitalWrite(5,LOW);
      break;
    case 95:
      PCF_7.digitalWrite(4,LOW);
      break;
    case 96:
      PCF_7.digitalWrite(3,LOW);
      break;
    case 97:
      PCF_7.digitalWrite(2,LOW);
      break;
    case 98:
      PCF_7.digitalWrite(1,LOW);
      break;
    case 99:
      PCF_7.digitalWrite(0,LOW);
      break;        
  }
}
  
void NoteOff(byte channel, byte pitch, byte velocity) { 

    digitalWrite(13,LOW);
    switch (pitch) {
    case 36:
      PCF_0.digitalWrite(7,HIGH);
      break;
    case 37:
      PCF_0.digitalWrite(6,HIGH);
      break;
    case 38:
      PCF_0.digitalWrite(5,HIGH);
      break;
    case 39:
      PCF_0.digitalWrite(4,HIGH);
      break;
    case 40:
      PCF_0.digitalWrite(3,HIGH);
      break;
    case 41:
      PCF_0.digitalWrite(2,HIGH);
      break;
    case 42:
      PCF_0.digitalWrite(1,HIGH);
      break;
    case 43:
      PCF_0.digitalWrite(0,HIGH);
      break;
    case 44:
      PCF_1.digitalWrite(7,HIGH);
      break;
    case 45:
      PCF_1.digitalWrite(6,HIGH);
      break;
    case 46:
      PCF_1.digitalWrite(5,HIGH);
      break;
    case 47:
      PCF_1.digitalWrite(4,HIGH);
      break;
    case 48:
      PCF_1.digitalWrite(3,HIGH);
      break;
    case 49:
      PCF_1.digitalWrite(2,HIGH);
      break;
    case 50:
      PCF_1.digitalWrite(1,HIGH);
      break;
    case 51:
      PCF_1.digitalWrite(0,HIGH);
      break;
    case 52:
      PCF_2.digitalWrite(7,HIGH);
      break;
    case 53:
      PCF_2.digitalWrite(6,HIGH);
      break;
    case 54:
      PCF_2.digitalWrite(5,HIGH);
      break;
    case 55:
      PCF_2.digitalWrite(4,HIGH);
      break;
    case 56:
      PCF_2.digitalWrite(3,HIGH);
      break;
    case 57:
      PCF_2.digitalWrite(2,HIGH);
      break;
    case 58:
      PCF_2.digitalWrite(1,HIGH);
      break;
    case 59:
      PCF_2.digitalWrite(0,HIGH);
      break;
    case 60:
      PCF_3.digitalWrite(7,HIGH);
      break;
    case 61:
      PCF_3.digitalWrite(6,HIGH);
      break;
    case 62:
      PCF_3.digitalWrite(5,HIGH);
      break;
    case 63:
      PCF_3.digitalWrite(4,HIGH);
      break;
    case 64:
      PCF_3.digitalWrite(3,HIGH);
      break;
    case 65:
      PCF_3.digitalWrite(2,HIGH);
      break;
    case 66:
      PCF_3.digitalWrite(1,HIGH);
      break;
    case 67:
      PCF_3.digitalWrite(0,HIGH);
      break;
    case 68:
      PCF_4.digitalWrite(7,HIGH);
      break;
    case 69:
      PCF_4.digitalWrite(6,HIGH);
      break;
    case 70:
      PCF_4.digitalWrite(5,HIGH);
      break;
    case 71:
      PCF_4.digitalWrite(4,HIGH);
      break;
    case 72:
      PCF_4.digitalWrite(3,HIGH);
      break;
    case 73:
      PCF_4.digitalWrite(2,HIGH);
      break;
    case 74:
      PCF_4.digitalWrite(1,HIGH);
      break;
    case 75:
      PCF_4.digitalWrite(0,HIGH);
      break;
    case 76:
      PCF_5.digitalWrite(7,HIGH);
      break;
    case 77:
      PCF_5.digitalWrite(6,HIGH);
      break;
    case 78:
      PCF_5.digitalWrite(5,HIGH);
      break;
    case 79:
      PCF_5.digitalWrite(4,HIGH);
      break;
    case 80:
      PCF_5.digitalWrite(3,HIGH);
      break;
    case 81:
      PCF_5.digitalWrite(2,HIGH);
      break;
    case 82:
      PCF_5.digitalWrite(1,HIGH);
      break;
    case 83:
      PCF_5.digitalWrite(0,HIGH);
      break;
    case 84:
      PCF_6.digitalWrite(7,HIGH);
      break;
    case 85:
      PCF_6.digitalWrite(6,HIGH);
      break;
    case 86:
      PCF_6.digitalWrite(5,HIGH);
      break;
    case 87:
      PCF_6.digitalWrite(4,HIGH);
      break;
    case 88:
      PCF_6.digitalWrite(3,HIGH);
      break;
    case 89:
      PCF_6.digitalWrite(2,HIGH);
      break;
    case 90:
      PCF_6.digitalWrite(1,HIGH);
      break;
    case 91:
      PCF_6.digitalWrite(0,HIGH);
      break;
    case 92:
      PCF_7.digitalWrite(7,HIGH);
      break;
    case 93:
      PCF_7.digitalWrite(6,HIGH);
      break;
    case 94:
      PCF_7.digitalWrite(5,HIGH);
      break;
    case 95:
      PCF_7.digitalWrite(4,HIGH);
      break;
    case 96:
      PCF_7.digitalWrite(3,HIGH);
      break;
    case 97:
      PCF_7.digitalWrite(2,HIGH);
      break;
    case 98:
      PCF_7.digitalWrite(1,HIGH);
      break;
    case 99:
      PCF_7.digitalWrite(0,HIGH);
      break;    
  }
}
