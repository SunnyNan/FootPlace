//
//  PictureViewController.h
//  FootPlace
//
//  Created by mac on 15/10/26.
//  Copyright © 2015年 wangchengyuan.com. All rights reserved.
//

#import "BaseViewController.h"

@interface PictureViewController : BaseViewController<UITableViewDataSource,UITableViewDelegate>
{
    UITableView *_tableView;
}


@end
