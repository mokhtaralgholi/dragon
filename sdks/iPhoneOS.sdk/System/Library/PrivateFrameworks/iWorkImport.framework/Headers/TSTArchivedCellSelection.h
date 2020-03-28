//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSKSelection, TSTCellRegion, TSTCellSelection;

__attribute__((visibility("hidden")))
@interface TSTArchivedCellSelection : TSPObject <TSKArchivedSelection>
{
    TSTCellSelection *_cellSelection;
    BOOL _isLegacyBasedIDSelection;
    struct TSUCellCoord _legacyAnchorCellID;
    struct TSUCellCoord _legacyCursorCellID;
    TSTCellRegion *_legacyCellRegion;
    TSTCellRegion *_legacyBaseCellRegion;
    long long _selectionType;
}

// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(retain, nonatomic) TSKSelection *selection;
- (id)selectionWithParent:(id)arg1;

@end
