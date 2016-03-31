//
//  CustomKeyboard.h
//  JiaKe
//
//  Created by hgs泽泓 on 15/7/3.
//  Copyright (c) 2015年 HgsZehong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CancelKeyboardProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface DAKeyboard : UIView

@property (assign, nonatomic) id<CancelKeyboardProtocol> delegate;
@property (strong) id<UITextInput> textView;

/**
 *  自定义键盘
 *
 *  @param textFiled 选择键盘上的内容发送到指定的位置
 */
-(void)setCustomKeyboard:(id<UITextInput>)textFiled;

@end

NS_ASSUME_NONNULL_END

