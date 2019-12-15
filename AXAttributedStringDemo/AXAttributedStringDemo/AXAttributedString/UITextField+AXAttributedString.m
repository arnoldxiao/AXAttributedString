//
//  UITextField+AXAttributedString.m
//  AXAttributedStringDemo
//
//  Created by arnoldxiao on 2019/12/15.
//  Copyright © 2019 xiaochenghua. All rights reserved.
//

#import "UITextField+AXAttributedString.h"
#import "AXAttributedString.h"


@implementation UITextField (AXAttributedString)

- (void)setAttributedStringUsingBlock:(void (NS_NOESCAPE ^)(AXAttributedStringMaker * _Nonnull))block {
    self.attributedText = [AXAttributedString makeAttributedString:block];
}

@end
