//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DFramebufferCopyPipeline.h>

__attribute__((visibility("hidden")))
@interface TSCH3DFramebufferGaussianBlurPipeline : TSCH3DFramebufferCopyPipeline
{
    tvec2_84d5962d mTapUnit;
}

+ (id)effectsArray;
@property(nonatomic) tvec2_84d5962d tapUnit; // @synthesize tapUnit=mTapUnit;
- (id).cxx_construct;
- (void)updateShaderEffectsStates;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;

@end
