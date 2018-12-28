#include <iostream>

struct Node {
    int x;
    int BC;
};

struct Element {
    int ID[2];
    double S, K, L;
    double HL[2][2];
    double* PL;
};

struct Grid {
    Node* nodes;
    Element* elements;
};

struct SOE {
    double* HG;
    double* PG;
    double* TG;
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}