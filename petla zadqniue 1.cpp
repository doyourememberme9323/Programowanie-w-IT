#include <iostream >
using namespace std;

int main()
	{
	for(int i=1; i <=10; i++){ // zmiania lokalna istnieje tylko petli
	 for(int j=1; j <=10; j++){// zmiana lokalna istnieje tylko w petli 
       cout << i << " * " << j << " = " << i*j << endl;
    }
    cout << endl;
    }
    
    
    
cout << endl;
system ("pause");	
}






