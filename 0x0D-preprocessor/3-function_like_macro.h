#ifndef _3_FUNCTION_LIKE_MACRO_H_
#define _3_FUNCTION_LIKE_MACRO_H_

#define ABS(x) \
	if (x < 0) \
		x = x * (-1); \
	return (x);

#endif /* _3_FUNCTION_LIKE_MACRO_H_ */
