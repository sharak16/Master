//
//  TheamManager.h
//  Master
//
//  Created by rakesh on 1/27/16.
//  Copyright (c) 2016 mialo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TheamManager : NSObject
@property(nonatomic,strong)NSDictionary *dictColor;

+(TheamManager *)sharedManager ;



@end
