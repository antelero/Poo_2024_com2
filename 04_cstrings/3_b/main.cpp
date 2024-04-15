/*
3. Realice una función que dado un vector de ctring y un carácter agregue dicho carácter al
final vector cstring.
*/

#include <iostream>

using namespace std;

char *agrega(char * str, char caracter);
int cantidad(char * str);

int main()
{
    char * palabra = "HOla munDO";
    cout << agrega(palabra, '!')<<endl;
    return 0;
}

char *agrega(char * str, char caracter){
    int cant = cantidad(str);    
    char *auxi = new char[cant+1];

    for(int i = 0; i < cant-1; i++){
        auxi[i] = str[i];
    }
    auxi[cant-1] = caracter;
    auxi[cant] = '\0';

    return auxi;
}


int cantidad(char * str){
    int i=0;
    while (str[i]!='\0')
    {
       i++;
    }
    i++;
    return i;
}
