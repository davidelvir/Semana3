#include <iostream>
using namespace std;

int main(){

  int arregloEstatico[5];

  cout<<arregloEstatico<<endl;
 
  int* apuntador = arregloEstatico;//apuntador de enteros
  //tambien puede ser int *apuntador
  //int** apuntador <- apuntador de un apuntador
  
  cout<<"Dir ptr: "<<apuntador<<endl;
  for(int i = 0;i<5;i++){
    arregloEstatico[i] = i+1;
  }
  cout<<"Contenido de ptr: "<<endl;
  for(int i = 0;i<5;i++){
    cout<<apuntador[i]<<endl;
  }
  cout<<*apuntador; //imprime lo que hay en esa direccion
  //reservar un arreglo tamaño 10
  apuntador = new int[10];  
  //liberar memoria
  delete [] apuntador;
  apuntador = NULL;

  //Matrices
  int** matriz;
  
  matriz = new int*[5];

  for(int i = 0; i<5; i++){
    matriz[i] = new int [5];
  }

  //poblar matriz
  for(int i = 0; i<5; i++){
    for(int j = 0;j<5;j++){
      matriz[i][j]=i*j;
    }
  }
  //usar la matriz
  
  //liberar la memoria
  for(int i=0; i<5; i++){
    delete[]matriz[i];
  }
  delete[] matriz;

}
