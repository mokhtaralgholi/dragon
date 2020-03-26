//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class NSDateFormatter, NSDictionary, UILocalizedIndexedCollation, UITableView;
@protocol WFRemoteFileListViewDelegate;

__attribute__((visibility("hidden")))
@interface WFRemoteFileListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    id <WFRemoteFileListViewDelegate> _delegate;
    UITableView *_tableView;
    NSDateFormatter *_dateFormatter;
    UILocalizedIndexedCollation *_collation;
    NSDictionary *_filesBySection;
}

@property(copy, nonatomic) NSDictionary *filesBySection; // @synthesize filesBySection=_filesBySection;
@property(readonly, nonatomic) UILocalizedIndexedCollation *collation; // @synthesize collation=_collation;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WFRemoteFileListViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)fileAtPoint:(CGPoint)arg1;
- (id)cellAtPoint:(CGPoint)arg1;
- (CGRect)frameOfCellAtPoint:(CGPoint)arg1;
- (void)updateCheckmarkForFile:(id)arg1;
- (void)setFiles:(id)arg1;
@property(nonatomic) UIEdgeInsets verticalScrollIndicatorInsets;
@property(nonatomic) UIEdgeInsets contentInset;
- (id)initWithFrame:(CGRect)arg1 collation:(id)arg2;

@end
