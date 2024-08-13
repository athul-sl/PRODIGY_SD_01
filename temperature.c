#include <stdio.h>
float c_to_f(float temp)
{
  return (temp * (9/5.0))+32;
}
float c_to_k(float temp)
{
  return temp+273.15;
}
float f_to_c(float temp)
{
  return (temp-32)*(5/9.0);
}
float f_to_k(float temp)
{
  return f_to_c(temp)+273.15;
}
float k_to_c(float temp)
{
  return temp-273.15;
}
float k_to_f(float temp)
{
  return c_to_f(k_to_c(temp));
}

void main()
{
  float temp;
  char t;
  printf("Enter unit of temperature to be converted (C : Celcius; F : Farenheit; K : Kelvin ) : ");
  scanf("%c",&t);
  printf("\nEnter value of temperature : ");
  scanf("%f",&temp);
  if(t=='c' ||t=='C')
    {
      printf("Celcius : %.3f°C\nFarenheit : %.3f°F\nKelvin : %.3fK",temp,c_to_f(temp),c_to_k(temp));
    }
  else if(t=='f' ||t=='F')
    {
      printf("Farenheit : %.3f°F\nCelcius : %.3f°C\nKelvin : %.3fK",temp,f_to_c(temp),f_to_k(temp));
    }
  else if(t=='k' ||t=='K')
    {
      printf("Kelvin : %.3fK\nCelcius : %.3f°C\nFarenheit : %.3f°F",temp,k_to_c(temp),k_to_f(temp));
    }
}
