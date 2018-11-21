//
//  LockUser.h
//  02面试题-实现singleton模式(oc)
//
//  Created by ifuwo on 2018/11/21.
//  Copyright © 2018 ifuwo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LockUser : NSObject <NSCopying, NSMutableCopying>

+ (instancetype)shareInstance;

@end

NS_ASSUME_NONNULL_END
