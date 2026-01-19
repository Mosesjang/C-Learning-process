#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
      int id;
      int age;
      char name[50];
}Sensor;

int main(){

      Sensor *s = malloc(sizeof(Sensor));

      s -> id =1;
      s ->age = 3;
      
      
      strcpy(s->name, "LightSensor");

      printf("ID: %d | Name: %s | Age: %d\n", s->id, s->name, s->age);
      printf("Struct address (heap); %p\n", (void*)s);
      printf("Struct address (stack); %p\n", (void*)&s);

      free(s);


      return 0;
}