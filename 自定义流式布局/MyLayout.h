//
//  MyLayout.h
//  自定义流式布局
//
//  Created by to-explore-future on 17/12/8.
//  Copyright © 2017年 to-explore-future. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyLayout : UIView

/**
 *  设置数据源
 */
-(void)setData:(NSArray<NSString *> *)datas;

/**
 *  设置字体大小
 */
-(void)setTextFont:(UIFont *)font;


@end
