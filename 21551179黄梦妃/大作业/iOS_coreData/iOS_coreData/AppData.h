//
//  AppData.h
//  iOS_coreData
//
//  Created by 黄梦妃 on 15/12/29.
//  Copyright (c) 2015年 黄梦妃. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppData : NSObject


+(void)setAuthentication:(BOOL) isValid;

+(BOOL)getAuthentication;
@end
