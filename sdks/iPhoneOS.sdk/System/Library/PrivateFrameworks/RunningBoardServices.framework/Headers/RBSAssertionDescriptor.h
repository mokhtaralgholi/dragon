//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/BSDescriptionProviding-Protocol.h>
#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>

@class NSArray, NSString, RBSAssertionIdentifier, RBSTarget;

@interface RBSAssertionDescriptor : NSObject <BSXPCSecureCoding, NSCopying, BSDescriptionProviding>
{
    RBSAssertionIdentifier *_identifier;
    RBSTarget *_target;
    NSString *_explanation;
    NSArray *_attributes;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)descriptorWithIdentifier:(id)arg1 target:(id)arg2 explanation:(id)arg3 attributes:(id)arg4;
@property(readonly, copy, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(readonly, copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(copy, nonatomic) RBSTarget *target; // @synthesize target=_target;
@property(readonly, copy, nonatomic) RBSAssertionIdentifier *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 target:(id)arg2 explanation:(id)arg3 attributes:(id)arg4;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)copyWithIdentifier:(id)arg1;
- (id)init;

@end
