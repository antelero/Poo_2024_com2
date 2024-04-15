///1. Realice un método que retorne el acumulado de un vector de 10 enteros. Utilice recursividad. 	
#include <iostream>
using namespace std;

const int N = 5;
int arr[N]={2,3,4,5,6};
int sumarecu(int vec[], int cant);

int main(int argc, char *argv[]) {
	
    cout << sumarecu(arr, 5)<<endl;
	return 0;
}

int sumarecu(int vec[], int cant)
{		
    if (cant == 0)
        return 0;
    else
        return vec[cant - 1] + sumarecu(vec, cant-1);
}
