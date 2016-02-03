//
//  UIColor+HexString.h
//  Master
//
//  Created by rakesh on 1/28/16.
//  Copyright (c) 2016 mialo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (HexString)
+ (CGFloat) colorComponentFrom: (NSString *) string start: (NSUInteger) start length: (NSUInteger) length;
+(UIColor *) colorWithHexString: (NSString *) hexString ;
@end
