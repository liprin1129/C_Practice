#include <arrayfire.h>
#include <cstdio>
#include <cstdlib>

void memHostToDevice(){
    float hA[] = {0, 1, 2, 3, 4, 5};

    af::array A(2, 3, hA);
    af_print(A);
}

void contentsInfo(){
    af::array a = af::randu(2, 2);
    af::array b = af::constant(5, 2, 1);

    af_print(a);
    af_print(b);

    af_print(a.col(0) + b + .4);
}

void dimensionInfo(){
    af::array a = af::randu(4, 5, 2);
    af_print(a);

    printf("num of dimentions of a %d\n", a.numdims());

    printf("dims = [%lld %lld %lld]\n", a.dims(0), a.dims(1), a.dims(2));

    af::dim4 dims = a.dims();
    printf("dims = [%lld %lld %lld]\n", dims[0], dims[1], dims[2]);
}

int main(int argc, char **argv){
    try {
        //memHostToDevice();
        //contentsInfo();
        dimensionInfo();

    } catch (af::exception& e) {
        fprintf(stderr, "%s\n", e.what());
        throw;
    }

    return 0;
}