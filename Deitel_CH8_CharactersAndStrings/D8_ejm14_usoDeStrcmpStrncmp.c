#include <stdio.h>
#include <string.h>

int main()
{
  const char *s1 = "Feliz Anio Nuevo";
  const char *s2 = "Feliz Anio Nuevo";
  const char *s3 = "Felices Fiestas";
  
  printf("s1 = *%s\ns2 = *%s\ns3 = *%s\n", s1, s2, s3);
  
  printf("strcmp(s1, s2) = %2d\n", strcmp(s1, s2));
  
  printf("strcmp(s1, s3) = %2d\n", strcmp(s1, s3));
  
  printf("strcmp(s3, s1) = %2d\n", strcmp(s3, s1));
  
  printf("strncmp(s1, s3, 6) = %2d\n", strncmp(s1, s3, 6));
  
  printf("strncmp(s1, s3, 7) = %2d\n", strncmp(s1, s3, 7));
  
  printf("strncmp(s3, s1, 7) = %2d\n", strncmp(s3, s1, 7));
  
  
  
  return 0;
}