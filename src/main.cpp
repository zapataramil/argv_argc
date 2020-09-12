#include <iostream>
using namespace std;

int main (int argc, char **argv){
	cout<< "El programa es: "<<argv[0]<<endl;
	if (argc == 1)
		cout<< "Sin argumentos.."<<endl;
	if (argc>1)
		cout<< "Se ingresaron "<< argc-1 << " argumentos en su ejecucion."<<endl;
	for(int i=1 ; i<argc ; i++)
		cout << "Argumento "<< i<< " :"<<argv[i]<<endl;
	return 0;
}
