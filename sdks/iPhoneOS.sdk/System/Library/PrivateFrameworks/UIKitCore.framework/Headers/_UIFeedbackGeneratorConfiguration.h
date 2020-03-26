//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSSet, NSString;

@interface _UIFeedbackGeneratorConfiguration : NSObject <NSCopying>
{
    BOOL _settingsEnabled;
    BOOL _setup;
    BOOL _enabled;
    NSSet *_usedFeedbacks;
    id /* CDUnknownBlockType */ _preparationBlock;
    Class _clientClass;
    NSString *_usage;
    long long _requiredSupportLevel;
    long long _activationStyle;
    long long _outputMode;
    NSString *__stats_key;
}

+ (id)_configurationWithKey:(id)arg1 preparationBlock:(id /* CDUnknownBlockType */)arg2;
+ (id)_configurationWithKey:(id)arg1 requiredSupportLevel:(long long)arg2 preparationBlock:(id /* CDUnknownBlockType */)arg3;
+ (id)_disabledConfiguration;
+ (id)defaultConfiguration;
@property(copy, nonatomic) NSString *_stats_key; // @synthesize _stats_key=__stats_key;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isSetup) BOOL setup; // @synthesize setup=_setup;
@property(nonatomic) BOOL settingsEnabled; // @synthesize settingsEnabled=_settingsEnabled;
@property(nonatomic) long long outputMode; // @synthesize outputMode=_outputMode;
@property(nonatomic) long long activationStyle; // @synthesize activationStyle=_activationStyle;
@property(nonatomic) long long requiredSupportLevel; // @synthesize requiredSupportLevel=_requiredSupportLevel;
@property(copy, nonatomic) NSString *usage; // @synthesize usage=_usage;
@property(copy, nonatomic) Class clientClass; // @synthesize clientClass=_clientClass;
@property(copy, nonatomic) id /* CDUnknownBlockType */ preparationBlock; // @synthesize preparationBlock=_preparationBlock;
// - (void).cxx_destruct;
- (void)_preferencesUpdated:(id)arg1;
- (void)_updateEnabled;
- (BOOL)_setupIfNecessary;
- (BOOL)_shouldEnable;
@property(readonly, nonatomic) BOOL defaultEnabled;
@property(readonly, nonatomic) NSSet *usedFeedbacks; // @synthesize usedFeedbacks=_usedFeedbacks;
- (id)_updateFeedbacksForOutputMode:(id)arg1;
- (id)_updateFeedbackForOutputMode:(id)arg1;
@property(readonly, nonatomic) NSArray *feedbackKeyPaths;
- (id)tweakedConfigurationForClass:(Class)arg1 usage:(id)arg2;
- (id)tweakedConfigurationForCaller:(id)arg1 usage:(id)arg2;
@property(readonly, nonatomic) NSString *descriptionKey;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end
