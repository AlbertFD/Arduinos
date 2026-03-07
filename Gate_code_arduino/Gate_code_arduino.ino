// Defining Pins Structure

const int Gate1_pin = 2;
const int Gate2_pin = 3;
const int Gate3_pin = 4;
const int Gate4_pin = 5;

//Defining States
int Gate1_state = 0;
int Gate2_state = 0;
int Gate3_state = 0;
int Gate4_state = 0;

String command = "";

// Help Message for command
void printHelp(){
  Serial.println("=== Command List ===");
  Serial.println("allon - Opens All Gates");
  Serial.println("alloff - Closes All Gates");
  Serial.println("open? - Checks which ones are open");
  Serial.println("1on - Gate 1, Pin 2 On Channel 1");
  Serial.println("1off - Gate 1, Pin 2 Off Channel 1");
  Serial.println("2on - Gate 2, Pin 3 On Channel 2");
  Serial.println("2off - Gate 2, Pin 3 Off Channel 2");
  Serial.println("3on - Gate 3, Pin 4 On Channel 3");
  Serial.println("3off - Gate 3, Pin 4 Off Channel 3");
  Serial.println("4on - Gate 4, Pin 5 On Channel 4");
  Serial.println("4off - Gate 4, Pin 5 Off Channel 4");
  Serial.println("help - Shows this message, Contact Hori or Albert for more help");
  Serial.println("=========");

}
void setup() {
  // Set up Baud rate and pin starting at low voltage
  Serial.begin(9600);

  pinMode(Gate1_pin, OUTPUT);
  pinMode(Gate2_pin, OUTPUT);
  pinMode(Gate3_pin, OUTPUT);
  pinMode(Gate4_pin, OUTPUT);

  Serial.println(" ");
  Serial.println(" Arduino Ready!!!");
  Serial.println("All Gates at startup are Closed");
  pinMode(13, HIGH);

}

void loop() {
  // Read Serial for commands and turn pins on and off
  if (Serial.available()){
    command = Serial.readStringUntil('\n');
    command.trim();

    if (command == "help"){
      printHelp();
    }

    else if (command == "1on"){
      digitalWrite(Gate1_pin, HIGH);
      Serial.println("Gate 1 Open");
      Gate1_state = 1;
    }

    else if (command == "1off"){
      digitalWrite(Gate1_pin, LOW);
      Serial.println("Gate 1 Closed");
      Gate1_state = 0;
    }

    else if (command == "2on"){
      digitalWrite(Gate2_pin, HIGH);
      Serial.println("Gate 2 Open");
      Gate2_state = 1;
    }

    else if (command == "2off"){
      digitalWrite(Gate2_pin, LOW);
      Serial.println("Gate 2 Closed");
      Gate2_state = 0;
    }

    else if (command == "3on"){
      digitalWrite(Gate3_pin, HIGH);
      Serial.println("Gate 3 Open");
      Gate3_state = 1;
    }

    else if (command == "3off"){
      digitalWrite(Gate3_pin, LOW);
      Serial.println("Gate 3 Closed");
      Gate3_state = 0;
    }

    else if (command == "4on"){
      digitalWrite(Gate4_pin, HIGH);
      Serial.println("Gate 4 Open");
      Gate4_state = 1;
    }

    else if (command == "4off"){
      digitalWrite(Gate4_pin, LOW);
      Serial.println("Gate 4 Closed");
      Gate4_state = 0;
    }

    else if (command == "allon"){
      digitalWrite(Gate1_pin, HIGH);
      digitalWrite(Gate2_pin, HIGH);
      digitalWrite(Gate3_pin, HIGH);
      digitalWrite(Gate4_pin, HIGH);
      Serial.println("All Gates Open");
      Gate1_state = 1;
      Gate2_state = 1;
      Gate3_state = 1;
      Gate4_state = 1;
    }

    else if (command == "alloff"){
      digitalWrite(Gate1_pin, LOW);
      digitalWrite(Gate2_pin, LOW);
      digitalWrite(Gate3_pin, LOW);
      digitalWrite(Gate4_pin, LOW);
      Serial.println("All Gates Closed");
      Gate1_state = 0;
      Gate2_state = 0;
      Gate3_state = 0;
      Gate4_state = 0;
    }

    else if (command == "open?"){

      Serial.println("============");

      if (Gate1_state == 1){
        Serial.println("Gate 1 Open");
      }
      else if (Gate1_state == 0){
        Serial.println(" Gate 1 Closed");
      }

      if (Gate2_state == 1){
        Serial.println("Gate 2 Open");
      }
      else if (Gate2_state == 0){
        Serial.println(" Gate 2 Closed");
      }

      if (Gate3_state == 1){
        Serial.println("Gate 3 Open");
      }
      else if (Gate3_state == 0){
        Serial.println(" Gate 3 Closed");
      }

      if (Gate4_state == 1){
        Serial.println("Gate 4 Open");
      }
      else if (Gate4_state == 0){
        Serial.println(" Gate 4 Closed");
      }

      Serial.println("====END=====");
    }

    else {
      Serial.println("Unknown Command. Type help for list of commands");
    }
  }
}
