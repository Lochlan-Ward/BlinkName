// We define MY_LED to be the LED that we want to blink.
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon
// and Electron, and next to the USB connector on the Argon and Boron).
const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. It
// allows your code to run before the cloud is connected. In this case,
// it will begin blinking almost immediately instead of waiting until
// breathing cyan,
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup()
{
	// In order to set a pin, you must tell Device OS that the pin is
	// an OUTPUT pin. This is often done from setup() since you only need
	// to do it once.
	pinMode(MY_LED, OUTPUT);
}

void dash()
{
    // Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for one second
	delay(750ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait 500ms
	delay(250ms);

	// And repeat!
}

void dot()
{
    // Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for 250ms
	delay(250ms);

	// Turn it off
	digitalWrite(MY_LED, LOW);

	// Wait 500ms
	delay(250ms);

	// And repeat!
}


// Functions for letters, idea being that you could have the alphabet set out here and simply call each letter in the loop to make any name or word.  
// This saves clutter in the loop()

void letterA()
{
    dot();dash();
    delay(500ms);
}

void letterC()
{
    dash();dot();dash();dot();
    delay(500ms);
}

void letterH()
{
    dot();dot();dot();dot();
    delay(500ms);
}

void letterL()
{
    dot();dash();dot();dot();
    delay(500ms);
}

void letterN()
{
    dash();dot();
    delay(500ms);
}

void letterO()
{
    dash();dash();dash();
    delay(500ms);
}


// The loop() method is called frequently.
void loop()
{
    letterL();
    letterO();
    letterC();
    letterH();
    letterL();
    letterA();
    letterN();
    delay(1750ms);
}