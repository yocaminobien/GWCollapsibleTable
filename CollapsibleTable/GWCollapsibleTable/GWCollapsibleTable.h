//
//  GWCollapsibleTable.h
//  CollapsibleTable
//
//  Created by Greg Wang on 13-1-3.
//  Copyright (c) 2013年 Greg Wang. All rights reserved.
//

@protocol GWCollapsibleTableDataSource <NSObject>

- (BOOL)tableView:(UITableView *)tableView canCollapseSection:(NSInteger)section;
- (UITableViewCell *)tableView:(UITableView *)tableView headerCellForCollapsibleSection:(NSInteger)section;
- (UITableViewCell *)tableView:(UITableView *)tableView bodyCellForRowAtIndexPath:(NSIndexPath *)indexPath;
- (NSInteger)tableView:(UITableView *)tableView numberOfBodyRowsInSection:(NSInteger)section;

// TODO: Support Editing & Reordering Methods

@end

@protocol GWCollapsibleTableDelegate <NSObject>

- (void)tableView:(UITableView *)tableView didSelectBodyRowAtIndexPath:(NSIndexPath *)indexPath;
// TODO: Support Extra Selection Management Methods

// TODO: Support Editing & Reordering Methods

@end
