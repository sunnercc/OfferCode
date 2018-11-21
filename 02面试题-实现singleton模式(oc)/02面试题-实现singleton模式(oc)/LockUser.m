//
//  LockUser.m
//  02面试题-实现singleton模式(oc)
//
//  Created by ifuwo on 2018/11/21.
//  Copyright © 2018 ifuwo. All rights reserved.
//

#import "LockUser.h"

@implementation LockUser

// 线程安全的单利模式
+ (instancetype)shareInstance
{
    static id instance = nil;
    if (instance == nil) {  // 双重验证，降低多线程访问时候的阻塞等待
        @synchronized (self) { // ？这里会阻塞
            if (!instance) {
                instance = [[super allocWithZone:NULL] init];
            }
        }
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
