#include "ejemplo2.h"

#include <chrono>

ejemplo2::ejemplo2()
{

}

void ejemplo2::createVector(vector<int> *vector) {
    while(vector->size() < TAM) {
        vector->emplace_back(rand()%100);
    }
    cout << "He terminado" << endl;
    cout << vector->size() << endl;
}

void ejemplo2::sortVector(vector<int> *vector) {
    cout << "Me dispongo a ordenar" << endl;
    sort(vector->begin(), vector->end());
}

int ejemplo2::findSmallest(vector<int> *vector) {
    int smallest = vector->front();
    return smallest;
}
