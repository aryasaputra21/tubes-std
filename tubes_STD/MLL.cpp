#include <iostream>
#include "MLL.h"

using namespace std;

void createListOjek(ListOjek &LO){
    LO.first = nullptr;
    LO.last = nullptr;
};
void createListPenumpang(ListPenumpang &LP){
    LP.first = nullptr;
    LP.last = nullptr;
};
void createListRelasi(ListRelasi &LR) {
     LR.first = nullptr;
     LR.last = nullptr;
};

bool isEmptyOjek(ListOjek LO){
    return LO.first == nullptr;
};
bool isEmptyPenumpang(ListPenumpang LP) {
    return LP.first == nullptr;
};
bool isEmptyRelasi(ListRelasi LR){
     return LR.first == nullptr;
};
