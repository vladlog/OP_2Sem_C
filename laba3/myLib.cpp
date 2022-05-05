#include "myLib.h"

NumArr::NumArr() {
    size = 0;
    array = NULL;
}

NumArr::~NumArr() {
    delete []array;
}

