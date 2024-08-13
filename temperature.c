#include <stdio.h>
float c_to_f(int temp)
{
  return (temp * (9/5.0))+32;
}
float c_to_k(int temp)
{
  return temp+273.15;
}
float f_to_c(int temp)
{
  return (temp-32)*(5/9.0);
}
float f_to_k(int temp)
{
  return f_to_c(temp)+273.15;
}
float k_to_c(int temp)
{
  return temp-273.15;
}
float k_to_f(int temp)
{
  return c_to_f(k_to_c(temp));
}

void main()
{
  int temp;
  char t;
  printf("Enter unit of temperature to be converted : ");
  scanf("%c",&t);
  printf("\nEnter value of temperature (C : Celcius; F : Farenheit; K : Kelvin ): ");
  scanf("%f",&temp);
  if(t=="c" ||t=="C")
    {
      printf("Farenheit : %f°F\nKelvin : %fK",c_to_f(temp),c_to_k(temp));
    }
  else if(t=="f" ||t=="F")
    {
      printf("Celcius : %f°C\nKelvin : %fK",f_to_c(temp),f_to_k(temp));
    }
  else if(t=="k" ||t=="K")
    {
      printf("Celcius : %f°C\nFarenheit : %f°F",k_to_c(temp),k_to_f(temp));
    }
}
