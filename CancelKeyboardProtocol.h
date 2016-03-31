//
//  CancelKeyboardProtocol.h
//  ScanningLicensePlate
//
//  Created by Jiayu_Zachary on 15/11/21.
//  Copyright © 2015年 Zachary. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CancelKeyboardProtocol <NSObject>

@required
/**
 *  收回键盘
 *
 *  @param textField 参数
 */
- (void)cancelCustomKeyboard:(nonnull UITextField *)textField;

@end