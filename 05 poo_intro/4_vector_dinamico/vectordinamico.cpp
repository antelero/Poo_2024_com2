#include "vectordinamico.h"
#include <iostream>
using namespace std;

int VectorDinamico::getSize() const{
    return size;
}

VectorDinamico::VectorDinamico(int *vec, int size) : vec(vec), size(size){
    this->size = size;
}

int VectorDinamico::find(int element){
    bool flag = true;
    int place = -1;
    int index = 0;
    while(index < size){
        if(this->vec[index] == element){
            place = index;
            flag = false;
        }
        index += 1;
    }
    return place;
}

void VectorDinamico::add(int element){
    if(this->size == 0)
        this->vec[0] = element;
    else{
        int *aux = new int[this->size+1];
        for(int i = 0; i < this->size; i++){
            aux[i] = this->vec[i];
        }
        aux[this->size] = element;
        this->vec = aux;
        //delete [] aux;
    }
    this->size += 1;
}

void VectorDinamico::remove(int element){
    int pos = find(element);
    if(pos < size){
        int *aux = new int[size-1];
        for(int i = 0; i < pos; i++){
            aux[i] = vec[i];
        }
        for(int i = pos+1; i < size; i++){
            aux[i-1] = vec[i];
        }
        this->vec = &*aux;
        this->size -=1;
        //delete [] aux;
    }
}

float VectorDinamico::avg(){
    float aux = 0;
    for(int i = 0; i < this->size; i++){
        aux += this->vec[i];
    }
    return float(aux/size);
}

int VectorDinamico::max(){
    int max = vec[0];
    for(int i = 0; i < this->size; i++){
        if(this->vec[i] > max)
            max = this->vec[i];
    }
    return max;
}

int VectorDinamico::min(){
    int min = vec[0];
    for(int i = 0; i < this->size; i++){
        if(this->vec[i] < min)
            min = this->vec[i];
    }
    return min;
}

const string VectorDinamico::toString(){
    string s = "";
    for(int i = 0; i < this->size; i++){
        s.append(to_string(this->vec[i]));
        s.append(" ");
    }
    return s;
}
