float input_voltage_one = 0.0;
float input_voltage_two = 0.0;
float output_voltage = 0.0;

void setup()

{
	Serial.begin(9600);     //  opens serial port, sets data rate to 9600 bps
}

void loop()

{

	//Conversion formula for voltage
	int analog_value_one = analogRead(A0);
	input_voltage_one = (analog_value_one * 5.0) / 1024.0;

	int analog_value_two = analogRead(A1);
	input_voltage_two = (analog_value_two * 5.0) / 1024.0;

	int analog_value_out = analogRead(A2);
	output_voltage = (analog_value_out * 5.0) / 1024.0;


	Serial.print(" Input A= ");
	Serial.print(input_voltage_one);

	Serial.print(" Input B= ");
	Serial.print(input_voltage_two);

	Serial.print(" Output = ");
	Serial.println(output_voltage);

	delay(1000);

}
