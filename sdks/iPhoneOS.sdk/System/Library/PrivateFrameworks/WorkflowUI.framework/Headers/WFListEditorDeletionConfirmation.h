//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFListEditorDeletionConfirmation : NSObject
{
    NSUInteger _itemIndex;
    id /* CDUnknownBlockType */ _confirmationHandler;
}

+ (id)confirmationForDeletingItemAtIndex:(NSUInteger)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) id /* CDUnknownBlockType */ confirmationHandler; // @synthesize confirmationHandler=_confirmationHandler;
@property(readonly, nonatomic) NSUInteger itemIndex; // @synthesize itemIndex=_itemIndex;
// - (void).cxx_destruct;
- (id)initWithItemIndex:(NSUInteger)arg1 confirmationHandler:(id /* CDUnknownBlockType */)arg2;

@end
