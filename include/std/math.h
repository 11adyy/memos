#ifndef MATH_H_
#define MATH_H_
#ifdef __cplusplus
extern "C" {
#endif

#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))

#ifdef __cplusplus
}
#endif
#endif