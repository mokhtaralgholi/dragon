//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKQuadTreeNode;

__attribute__((visibility("hidden")))
@interface CKQuadTree : NSObject
{
    CKQuadTreeNode *_rootNode;
}

@property(readonly, nonatomic) CKQuadTreeNode *rootNode; // @synthesize rootNode=_rootNode;
// - (void).cxx_destruct;
- (void)visit:(id /* CDUnknownBlockType */)arg1;
- (id)initWithPoints:(id)arg1;
- (id)init;

@end
