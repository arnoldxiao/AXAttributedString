//
//  AXAttributedStringChain.h
//  AXAttributedString
//
//  Created by xiaochenghua on 2018/6/6.
//  Email: arnoldxiao@163.com
//  Copyright © 2018 xiaochenghua. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Macro UIColor with a hex-number. For example: UIColorFromRGB(0xFFFFFF) means white color.
 */
#define AXColorFromRGB(rgbValue) AXColorFromRGBA(rgbValue, 1.0f)

#define AXColorFromRGBA(rgbValue, alphaValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0f \
                green:((float)((rgbValue & 0x00FF00) >>  8))/255.0f \
                 blue:((float)((rgbValue & 0x0000FF) >>  0))/255.0f \
                alpha:alphaValue]

typedef NS_ENUM(NSUInteger, AXAttributedStringTextType) {
    AXAttributedStringTextTypeNormal,       //  常规文本
    AXAttributedStringTextTypeHTML          //  HTML字符串
};

@interface AXAttributedStringChain : NSObject

/**
 List of Sub-AttributedString
 */
@property (nonatomic, strong, readonly) NSArray<NSAttributedString *> *attributedStrings;

/**
 NSForegroundColorAttributeName, default blackColor
 */
- (AXAttributedStringChain *(^)(UIColor *color))foregroundColor;

/**
 NSBackgroundColorAttributeName, default nil: no background
 */
- (AXAttributedStringChain *(^)(UIColor *color))backgroundColor;

/**
 NSFontAttributeName, value is a UIFont object, default Helvetica(Neue) 12
 */
- (AXAttributedStringChain *(^)(UIFont *font))font;

/**
 NSFontAttributeName, value is float digit.
 */
- (AXAttributedStringChain *(^)(CGFloat floating))systemFontSize;

/**
 NSUnderlineStyleAttributeName, default 0: no underline, NSUnderlineStyleNone
 */
- (AXAttributedStringChain *(^)(NSUnderlineStyle style))underlineStyle;

/**
 NSUnderlineColorAttributeName, default nil: same as foreground color
 */
- (AXAttributedStringChain *(^)(UIColor *color))underlineColor;

/**
 NSBaselineOffsetAttributeName, default 0
 */
- (AXAttributedStringChain *(^)(CGFloat offset))baselineOffset;

/**
 NSStrikethroughStyleAttributeName, default 0: no strikethrough, NSUnderlineStyleNone
 */
- (AXAttributedStringChain *(^)(NSUnderlineStyle style))strikethroughStyle;

/**
 NSStrikethroughColorAttributeName, default nil: same as foreground color
 */
- (AXAttributedStringChain *(^)(UIColor *color))strikethroughColor;

/**
 NSParagraphStyleAttributeName, default defaultParagraphStyle
 */
- (AXAttributedStringChain *(^)(NSParagraphStyle *style))paragraphStyle;

/**
 NSStrokeColorAttributeName, default nil: same as foreground color
 */
- (AXAttributedStringChain *(^)(UIColor *color))strokeColor;

/**
 NSStrokeWidthAttributeName, default 0: no stroke
 */
- (AXAttributedStringChain *(^)(CGFloat width))strokeWidth;

/**
 NSAttachmentAttributeName, default nil
 */
- (AXAttributedStringChain *(^)(NSTextAttachment *textAttachment))attachment;

/**
 NSLinkAttributeName, url must be kind of [NSURL] or [NSString]
 */
- (AXAttributedStringChain *(^)(NSURL *url))linkUrl;

/**
 NSLinkAttributeName
 */
- (AXAttributedStringChain *(^)(NSString *string))linkString;

/**
 NSLigatureAttributeName, default ONE: default ligatures, ZERO: no ligatures
 */
- (AXAttributedStringChain *(^)(NSInteger integer))ligature;

/**
 NSKernAttributeName, default 0, kerning is disabled.
 */
- (AXAttributedStringChain *(^)(CGFloat floating))kern;

/**
 NSShadowAttributeName, default nil: no shadow
 */
- (AXAttributedStringChain *(^)(NSShadow *sd))shadow;

/**
 NSTextEffectAttributeName, default nil: no text effect
 */
- (AXAttributedStringChain *(^)(NSString *text))textEffect;

/**
 NSObliquenessAttributeName, default 0: no skew
 */
- (AXAttributedStringChain *(^)(CGFloat floating))obliqueness;

/**
 NSExpansionAttributeName, default 0: no expansion
 */
- (AXAttributedStringChain *(^)(CGFloat floating))expansion;

/**
 NSWritingDirectionAttributeName
 */
- (AXAttributedStringChain *(^)(NSArray<NSNumber *> *options))writingDirection;

/**
 * NSVerticalGlyphFormAttributeName, 0 means horizontal text. 1 indicates vertical text.
 * Currently on iOS, it's always horizontal.  The behavior for any other value is undefined.
 */
- (AXAttributedStringChain *(^)(NSInteger integer))verticalGlyphForm;

/**
Set-Up segment attribute string, pass a text and text type, return self.
*/
- (AXAttributedStringChain *)setUpSegmentAttributedStringWithText:(NSString *)text type:(AXAttributedStringTextType)type;

@end

NS_ASSUME_NONNULL_END
