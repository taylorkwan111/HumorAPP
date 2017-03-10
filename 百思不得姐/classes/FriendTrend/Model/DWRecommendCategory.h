//
//  DWRecommendCategory.h
//  百思不得姐
//
//  Created by dw on 2017/3/9.
//  Copyright © 2017年 dw. All rights reserved.
//推荐关注 左边的数据模型

#import <Foundation/Foundation.h>

@interface DWRecommendCategory : NSObject
/**id**/
@property(nonatomic,assign)NSInteger id;
/**总数**/
@property(nonatomic,assign)NSInteger count;
/**名字**/
@property(nonatomic,copy)NSString *name;


/**这个类别对应的用户数据**/
@property(nonatomic,strong)NSMutableArray *users;
/**总数**/
@property(nonatomic,assign)NSInteger total;
/**当前页码**/
@property(nonatomic,assign)NSInteger currentPage;

@end
