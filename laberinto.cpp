// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//funcion crea una matriz de chars de n x n
char** createMatrix(int);
//funcion liberar memoria asignada a una matriz
void freeMatrix(int,char**);
//imprime una matriz en consola
void printMatrix(int, char**);

int main (int argc, char* argv[]) {
  char letra;
  int size=0;
  char** matrix;
  ifstream myfile (argv[1]);
  if (myfile.is_open())
  {
    int cont=0;


    //TODO: Leer el tamaño de la matriz e iniciarlizarla
    
    myfile >> size;

    matrix = createMatrix(size);

    //leer la matriz que contiene el laberinto
    
    for(int i =0; i < size; i++){
      for(int j = 0; j<size;j++){
        myfile >> matrix[i][j];
      }
    }
   /* while ( !myfile.eof() )
    {
      myfile >> letra;
      cout<<" "<<letra;
      if(cont == 9){
         cout<<endl;
         cont=0;
      }else
          cont++;

	//TODO:Llenar la matriz
      
    }*/

    myfile.close();
  }

  else cout << "El archivo no existe"; 
  //imprimir laberinto
  printMatrix(size,matrix);


  //TODO: llamar función SalirLaberinto
  //TODO: Liberar Memoria
  freeMatrix(size,matrix);
  return 0;
}
//imprimir una matriz
void printMatrix(int size, char** matrix){
  for(int i = 0;i < size; i++){
    for(int j = 0;j < size; j++){
      cout<<" "<<matrix[i][j];
    }
    cout<<endl;
  }
}
//crear matriz
char** createMatrix(int n){
  char** retVal = new char*[n];

  for(int i = 0;i < n;i++){
    retVal[i] = new char[n];
  
  }
  return retVal;

}
//liberar memoria
void freeMatrix(int n, char** matrix){
  for(int i = 0;i<n;i++){
    delete[]matrix[i];
  }
  delete [] matrix;
}


