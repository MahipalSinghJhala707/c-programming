#include <stdio.h> 
int main(int argc, char** argv) {
#if _STDC_VERSION_ >=  201710L
  printf("We are using C18!\n");
#elif _STDC_VERSION_ >= 201112L
  printf("We are using C11!\n");
#elif _STDC_VERSION_ >= 199901L
  printf("We are using C99!\n");
#else
  printf("We are using C89/C90!\n");
#endif
    return 0;
}