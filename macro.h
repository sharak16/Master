//
//  macro.h
//  Master
//
//  Created by rakesh on 1/27/16.
//  Copyright (c) 2016 mialo. All rights reserved.
//

//#ifndef Master_macro_h
//#define Master_macro_h

#ifdef DEBUG
#   define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#   define DLog(...)
#endif

// ALog always displays output regardless of the DEBUG setting
#define ALog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

//#endif
