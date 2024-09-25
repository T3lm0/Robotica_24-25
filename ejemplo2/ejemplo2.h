#ifndef ejemplo2_H
#define ejemplo2_H

#include <iostream>
#include <random>
#include <vector>
#include<algorithm>
#include <stdio.h>
using namespace std;
#define TAM 2684354560


class ejemplo2
{
    public:
        ejemplo2();
        void createVector(vector<int> *vector);
    void sortVector(vector<int> *vector);
    int findSmallest(vector<int> *vector);
    private:
};

#endif // ejemplo1_H
