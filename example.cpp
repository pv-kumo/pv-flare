#include <flare.h>             // > > > > > > > > > > > CLICK PLAY UPPER RIGHT
const int N = (1 << 10);
fly::array A; void fn() { auto B = fly::fft2(A); fly::eval(B); }

int main(int argc, char** argv) {
    fly::info();                                          // Show compute device info
    A = fly::randu(N, N);                                 // Generates uniform random matrix
    fly::array B = fly::fft2(A);                           // Compute 2D FFT
    fly::array C = B(fly::seq(0, 5), fly::seq(0, 5));       // Grab 5x5 top left corner
    fly::array D = fly::pinverse(C);                       // Pseudoinverse is easy
    fly_print(fly::real(D));                               // Nicely see the results
    printf("2D FFT %dx%d: %4.0f ms\n", N, N,             // Do a benchmark
                            (fly::timeit(fn) * 1e3));
}
