//
//  RootViewController.h
//  FONT
//
//  Created by ygl10 on 13-7-9.
//  Copyright (c) 2013年 ygl10. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *mtableView;
    
    NSMutableArray *mainArray;
    
    NSMutableArray *dataArray;

}
@end
