//
//  AXAttributedString.m
//  AXAttributedString
//
//  Created by xiaochenghua on 2018/6/5.
//  Email: arnoldxiao@163.com
//  Copyright © 2018 xiaochenghua. All rights reserved.
//

#import "AXAttributedString.h"

@implementation AXAttributedString

+ (NSAttributedString *)makeAttributedString:(void(NS_NOESCAPE ^)(AXAttributedStringMaker * _Nonnull))block {
    AXAttributedStringMaker *make = [[AXAttributedStringMaker alloc] init];
    block(make);
    return [make install];
}

@end
