//
//  SYEditRootViewController.h
//  SMYAYA
//
//  Created by myeyesareblind on 9/2/13.
//  Copyright (c) 2013 John. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SYEditRootViewController : UITableViewController
@property (readwrite, copy) void(^dismissBlock)();
@end
