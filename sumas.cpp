#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;


float* leer(string filename, int *len);
float suma(float* arr, int len);

int main () {
   string filename;
    
   float* x;
   float* y;
   float suma_x;
   float suma_y;
   int lenx = 0;
   int leny = 0;
    
   cout <<  lenx << endl;

   filename = "valores_x.txt";
   x = leer(filename, &lenx);
   filename = "valores_y.txt";
   y = leer(filename, &leny);

   cout << "Suma x: " << suma(x,lenx) << endl;
   cout << "Suma y: " << suma(y,leny) << endl;

   return 0;

}

float* leer(string filename, int *len) {

   ifstream infile;
   string line;

   int num_filas = 0;
   float* datos;

    
   infile.open(filename);
   getline(infile, line);
   while(infile) {
      num_filas ++;
      getline(infile,line);
   }
   infile.close();
   
    
   datos = new float[num_filas];
   int i = 0;
   
   infile.open(filename);
   getline(infile, line);
   while(infile) {
      datos[i] = atof(line.c_str());
      i++;
      getline(infile,line);
   }
   infile.close();
   
   *len = num_filas;
   return datos;

}

float suma(float* arr, int len) {
    
    int i;
    float suma = 0;
    for(i=0; i<len; i++) {
        suma += arr[i];
    }
    
    return suma;
}