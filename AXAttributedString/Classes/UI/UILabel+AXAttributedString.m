//
//  UILabel+AXAttributedString.m
//  AXAttributedString
//
//  Created by arnoldxiao on 2019/12/15.
//  Email: arnoldxiao@163.com
//  Copyright © 2019 xiaochenghua. All rights reserved.
//

#import "UILabel+AXAttributedString.h"
#import "AXAttributedString.h"

@implementation UILabel (AXAttributedString)

- (void)setAttributedStringUsingBlock:(void (NS_NOESCAPE ^)(AXAttributedStringMaker * _Nonnull))block {
    self.attributedText = [AXAttributedString makeAttributedString:block];
}

@end
