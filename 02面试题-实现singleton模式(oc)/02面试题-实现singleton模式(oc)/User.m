//
//  User.m
//  02面试题-实现singleton模式(oc)
//
//  Created by ifuwo on 2018/11/21.
//  Copyright © 2018 ifuwo. All rights reserved.
//

#import "User.h"

@implementation User

// 线程不安全的单利模式
+ (instancetype)shareInstance
{
    static id instance = nil;
    if (!instance) {
        instance = [[super allocWithZone:NULL] init];
    }
    return instance;
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone
{
    return [self shareInstance];
}

- (id)copyWithZone:(NSZone *)zone
{
    return [[self class] shareInstance];
}

- (id)mutableCopyWithZone:(NSZone *)zone
{
    return [[self class] shareInstance];
}

@end
