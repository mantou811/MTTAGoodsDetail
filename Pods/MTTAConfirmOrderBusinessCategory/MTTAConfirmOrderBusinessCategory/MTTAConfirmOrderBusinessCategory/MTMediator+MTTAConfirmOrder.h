//
//  CTMediator+TAConfirmOrder.h
//  TAConfirmOrderBusinessCategory
//
//  Created by Charon on 16/12/25.
//  Copyright © 2016年 Charon. All rights reserved.
//

#import <MTMediator/MTMediator.h>
#import <UIKit/UIKit.h>

@interface MTMediator (MTTAConfirmOrder)

- (UIViewController *)confirmOrderViewControllerWithGoodsId:(NSString *)goodsId goodsName:(NSString *)goodsName ConfirmComplete:(dispatch_block_t)confirmComplete;

@end
