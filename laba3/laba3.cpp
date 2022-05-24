#include "func.h"
#include "Arr.h"
using namespace std;
int main() {
    int up,down,amount,min;
    amount = enter_amount();
    up_down(down,up);
    vector<Arr> base = set_vector(amount,down,up);
    output_vector(base);
    vector<int> max_vector = min_max(base,min);
    show_res(max_vector,base,min);
    dell(base);
    return 0;
}
