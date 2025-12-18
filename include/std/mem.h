#ifndef MEM_H_
#define MEM_H_
#ifdef __cplusplus
extern "C" {
#endif

void* str_memcpy(void* dst, const void* src, unsigned long n);
void* str_memset(void* ptr, unsigned char v, unsigned long n);
int str_memcmp(const void* dst, const void* src, unsigned long n);
unsigned long long str_dob2bits(double d);
double str_bits2dob(unsigned long long b);

#ifdef __cplusplus
}
#endif
#endif