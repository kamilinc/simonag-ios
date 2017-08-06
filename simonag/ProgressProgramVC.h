//
//  ProgressProgramVC.h
//  simonag
//
//  Created by Randy Floranno Hasdi on 7/30/17.
//  Copyright © 2017 randyfloranno. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Dashboard;

@interface ProgressProgramVC : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    NSArray *programPerusahaanList;
}

@property (nonatomic,strong) Dashboard* _Nullable dashboard;

@end
