//
//  OrderButton.h
//  ifengNewsOrderDemo
//
//  Created by zer0 on 14-2-27.
//  Copyright (c) 2014年 zer0. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OrderButton : UIButton

@property (nonatomic,retain) UIViewController * vc;

+ (id)orderButtonWithViewController:(UIViewController *)vc;
@end
