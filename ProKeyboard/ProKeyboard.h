//
//  ProKeyboardView.h
//  ScanningLicensePlate
//
//  Created by Jiayu_Zachary on 15/11/21.
//  Copyright © 2015年 Zachary. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CancelKeyboardProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface ProKeyboard : UIView

@property (nonatomic, weak) id<CancelKeyboardProtocol>delegate;

/**
 *  自定义键盘
 *
 *  @param textField 选择键盘上的内容发送到指定的位置
 */
-(void)setCustomKeyboard:(id<UITextInput>)textField;

@end
NS_ASSUME_NONNULL_END
