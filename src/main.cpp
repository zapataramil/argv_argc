#include <iostream>
using namespace std;

int main (int argc, char **argv){

	cout<< "Se ingresaron "<< argc << " palabras en su ejecucion."<<endl;
	for(int i=0 ; i<argc ; i++)
		cout << "Palabra "<< i<< " :"<<argv[i]<<endl;


	return 0;

}
