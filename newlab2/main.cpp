#include "q.h"

int main() {
    deg zxc(1, 2, -8);
    deg copy(zxc);
    zxc.calculation(2);
    zxc.solution();
    zxc.radical();
    zxc.extremum();
    zxc.print();
    return 0;
}
