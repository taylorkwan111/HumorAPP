//
//  UIView+DWExtension.h
//  百思不得姐
//
//  Created by dw on 2017/3/6.
//  Copyright © 2017年 dw. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (DWExtension)
@property(nonatomic,assign)CGFloat width;
@property(nonatomic,assign)CGFloat height;
@property(nonatomic,assign)CGFloat x;
@property(nonatomic,assign)CGFloat y;

//-(CGFloat)x;
//-(void)setX:(CGFloat)x;
//在分类中声明@property，只会生成方法的声明，不会生成方法的实现和带有_下划线的成员变量
@end
