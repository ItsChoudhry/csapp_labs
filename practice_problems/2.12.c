#include <stdint.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    uint32_t x = 0x87654321;

    uint32_t just_least = x & 0xFF;
    uint32_t not_least = x ^ ~0xFF;
    uint32_t c_least = x | 0xFF;

    printf("%#010x\n", x);
    printf("%#010x\n", just_least);
    printf("%#010x\n", not_least);
    printf("%#010x\n", c_least);

    return 0;
}
