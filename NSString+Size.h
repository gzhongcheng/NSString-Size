//
//  NSString+Size.h
//  GZCFramework
//
//  Created by GuoZhongCheng on 15/12/23.
//  Copyright © 2015年 GuoZhongCheng. All rights reserved.
//  获取文本size

#import <UIKit/UIKit.h>

@interface NSString (Size)

- (CGFloat)heightWithFont:(UIFont *)font
        constrainedToSize:(CGSize)size;

- (CGSize)sizeWithFont:(UIFont *)font
     constrainedToSize:(CGSize)size;

- (CGSize)sizeWithFont:(UIFont *)font
     constrainedToSize:(CGSize)size
           lineSpacing:(CGFloat)linespace
         lineBreakMode:(NSLineBreakMode)lineBreakMode;

+ (CGSize)getStringSize:(NSString*)string
                   font:(UIFont*)font
      constrainedToSize:(CGSize)size;

/**
 这里计算的只是文本的高度，如果在textview等控件中，默认左右都有5的padding，上下都有7的padding，需要自行加上
 或者用以下代码去除padding
 textView.textContainer.lineFragmentPadding = 0;  
 textView.textContainerInset = UIEdgeInsetsZero;  
 **/
+ (CGSize)getStringSize:(NSString*)string
                   font:(UIFont*)font
      constrainedToSize:(CGSize)size
            lineSpacing:(CGFloat)linespace
          lineBreakMode:(NSLineBreakMode)lineBreakMode;

@end
