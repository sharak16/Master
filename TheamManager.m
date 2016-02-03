//
//  TheamManager.m
//  Master
//
//  Created by rakesh on 1/27/16.
//  Copyright (c) 2016 mialo. All rights reserved.
//

#import "TheamManager.h"
#import "macro.h"

@interface TheamManager ()


-(NSDictionary *)fetchValuesFromPlist ;

@end




@implementation TheamManager
@synthesize dictColor ;


-(id)init{
    if (self=[super init] ) {
        dictColor=[[NSDictionary alloc]init];
        dictColor=[self fetchValuesFromPlist];
        
        
       
        
    }
    
    
    return self;
    
}

-(NSDictionary *)fetchValuesFromPlist
{
    NSDictionary *ColorDict;
    NSString *path=[[NSBundle mainBundle]pathForResource:@"colors" ofType:@"plist"];
    
    ColorDict=[NSDictionary dictionaryWithContentsOfFile:path];
    DLog(@"ColoDict..");
    
    assert(ColorDict);
    return ColorDict ;
    
}

+(TheamManager *)sharedManager

{
    static TheamManager *sharedManager=nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedManager = [[self alloc] init];
    });
    return sharedManager;
}



@end
