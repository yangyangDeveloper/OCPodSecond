#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

// 这个头文件替代了bridging header的作用，文件中会自动导入OC类
#import "ZYYOCDog.h"

FOUNDATION_EXPORT double OCPodSecondVersionNumber;
FOUNDATION_EXPORT const unsigned char OCPodSecondVersionString[];

