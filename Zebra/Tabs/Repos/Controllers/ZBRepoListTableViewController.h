//
//  ZBRepoListTableViewController.h
//  Zebra
//
//  Created by Wilson Styres on 12/3/18.
//  Copyright © 2018 Wilson Styres. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Database/ZBDatabaseDelegate.h>
#import <ZBRefreshableTableViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZBRepoListTableViewController : ZBRefreshableTableViewController
@property (readwrite, copy, nonatomic) NSArray *tableData;
- (void)setSpinnerVisible:(BOOL)visible forRepo:(NSString *)bfn;
- (void)handleURL:(NSURL *)url;
- (void)addSource:(id)sender;
- (void)clearAllSpinners;
- (void)handleImportOf:(NSURL *)url;
@end

NS_ASSUME_NONNULL_END
