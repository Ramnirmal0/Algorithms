Algorithm Intensity_Calculator()

#define const_Rvalue;  // maximum R value
#define const_Gvalue;  // maximum G value
#define const_Bvalue;  // maximum B value
void main()
{
	Read(R,G,B);
	if(R<=Rvalue && G<=Gvalue && B<=Bvalue)
		{
				get_intensity(R,G,B); 
		}
	led_intensity(value);  
	lcd.print (value);
}
end;

void get_intensity(X,Y,Z)
{
	get_value(X,Y,Z)
}

Void get_value(A,B,C)
{
   /* Select a value from predefined value set according to R=x G=y B=z values */
   return value;
}

int Read(R,G,B)
{
  frequency = pulseIn(sensorOut, LOW);
  return R;
  frequency = pulseIn(sensorOut, LOW);
  return G;
  frequency = pulseIn(sensorOut, LOW);
  return B;
}
