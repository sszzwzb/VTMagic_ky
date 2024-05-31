//
//  VTMagic.h
//  VTMagic
//
//  Created by tianzhuo on 15/10/17.
//  Copyright © 2015年 tianzhuo. All rights reserved.
//

#ifndef VTMagic_h
#define VTMagic_h

/**
 kaiyi 修改三方，2024.05.31
 修改版本 '~> 1.2.4'  #  VC 之间切换三方  3ef6d829e7aad12304df537f707e489066f1012c  这是修改的小版本
 
 新增功能   VC 滑动监听代理
 
 
 
  *  kaiyi add
  *  VC 滑动监听代理
  *
 *  SlideToTheNextScale  滑动到下一个比例  （0 ~ 1）
 *  isSwipeToLeft   左滑  右滑
 *  nextPageIndex   下一个要展示的
 *  currentPage     当前要展示的
 
- (void)magicView:(VTMagicView *)magicView scrollX:(CGFloat)scrollX slideToTheNextScale:(CGFloat)slideToTheNextScale isSwipeToLeft:(BOOL)isSwipeToLeft nextPageIndex:(NSInteger)nextPageIndex currentPage:(NSInteger)currentPage;
 */


#import "VTMagicController.h"

#endif /* VTMagic_h */
