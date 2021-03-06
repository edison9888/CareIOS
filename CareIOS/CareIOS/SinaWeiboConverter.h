//
//  SinaWeiboConverter.h
//  CareIOS
//
//  Created by 谢 创 on 12-12-3.
//  Copyright (c) 2012年 ThankCreate. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FriendViewModel;
@class ItemViewModel;
@class CommentViewModel;
@interface SinaWeiboConverter : NSObject
+(FriendViewModel*) convertFrendToCommon:(id)afriend;
+(ItemViewModel*) convertStatusToCommon:(id)status;
+(CommentViewModel*) convertCommentToCommon:(id)comment;
@end
