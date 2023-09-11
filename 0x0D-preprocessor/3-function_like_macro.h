#ifndef ABS_H
#define ABS_H
#define ABS(x) do {\
if (x < 0)\
{\
x = -x;\
}\
} while (0)
#endif
