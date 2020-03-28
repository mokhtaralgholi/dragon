//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXGDiagnosticsSpriteProbe : NSObject
{
    BOOL _active;
    id /* CDUnknownBlockType */ _predicate;
    id /* CDUnknownBlockType */ _tagDescriptor;
    id /* CDUnknownBlockType */ _eventHandler;
}

+ (void)_recordEventIfNeededWithType:(long long)arg1 layout:(id)arg2 oldState:(const CDStruct_c691429e )arg3 newState:(const CDStruct_c691429e )arg4 userInfo:(id)arg5;
+ (void)shouldUseDoubleSidedAnimationForSprites:(CDStruct_92550dd7)arg1 indexes:(id)arg2 animation:(id)arg3;
+ (void)didAdjustSprites:(CDStruct_92550dd7)arg1 forAnimation:(id)arg2 appearing:(BOOL)arg3;
+ (void)willAdjustSprites:(CDStruct_92550dd7)arg1 forAnimation:(id)arg2 appearing:(BOOL)arg3;
+ (void)willRequestTextureForSpriteWithGeometry:(const CDStruct_3ab912e1 )arg1 style:(const CDStruct_506f5052 )arg2 info:(const CDStruct_9d1ebe49 )arg3 inLayout:(id)arg4 textureInfo:(id)arg5;
+ (void)layout:(id)arg1 didChangeSprites:(CDStruct_92550dd7)arg2;
+ (void)layout:(id)arg1 willChangeSprites:(CDStruct_92550dd7)arg2;
+ (void)layout:(id)arg1 didInsertSprites:(CDStruct_92550dd7)arg2;
+ (void)layout:(id)arg1 willRemoveSprites:(CDStruct_92550dd7)arg2;
+ (id)spriteDataStore;
+ (id)activeSpriteProbes;
@property(copy, nonatomic) id /* CDUnknownBlockType */ eventHandler; // @synthesize eventHandler=_eventHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ tagDescriptor; // @synthesize tagDescriptor=_tagDescriptor;
@property(copy, nonatomic) id /* CDUnknownBlockType */ predicate; // @synthesize predicate=_predicate;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
// - (void).cxx_destruct;
- (void)_recordEventIfNeededWithType:(long long)arg1 layout:(id)arg2 oldState:(const CDStruct_c691429e )arg3 newState:(const CDStruct_c691429e )arg4 userInfo:(id)arg5;
- (id)descriptionForSpriteState:(const CDStruct_c691429e )arg1;
- (void)_recordEventWithType:(long long)arg1 oldState:(const CDStruct_c691429e )arg2 newState:(const CDStruct_c691429e )arg3 userInfo:(id)arg4;
- (id)init;

@end
