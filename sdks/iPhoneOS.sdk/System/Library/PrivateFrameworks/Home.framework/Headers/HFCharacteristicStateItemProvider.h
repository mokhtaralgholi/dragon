//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMAccessory, HMService, NSSet;
@protocol HFCharacteristicValueSource;

@interface HFCharacteristicStateItemProvider : HFItemProvider
{
    HMAccessory *_accessory;
    HMService *_service;
    id <HFCharacteristicValueSource> _valueSource;
    NSSet *_characteristicStateItems;
    NSSet *_batteryItems;
}

+ (id)_createBatteryItemWithSourceItem:(id)arg1 characteristicType:(id)arg2 valueFormatBlock:(id /* CDUnknownBlockType */)arg3;
+ (id)_setupCharacteristicStateItemForCharacteristic:(id)arg1 valueSource:(id)arg2 serviceType:(id)arg3;
+ (id)standardCharacteristicTypes;
@property(retain, nonatomic) NSSet *batteryItems; // @synthesize batteryItems=_batteryItems;
@property(retain, nonatomic) NSSet *characteristicStateItems; // @synthesize characteristicStateItems=_characteristicStateItems;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMService *service; // @synthesize service=_service;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
// - (void).cxx_destruct;
- (id /* CDUnknownBlockType */)characteristicStateItemComparator;
- (id)_reloadCharacteristicStateItems;
- (id)_reloadBatteryItems;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
- (id)initWithValueSource:(id)arg1 accessory:(id)arg2 service:(id)arg3;
- (id)initWithValueSource:(id)arg1 service:(id)arg2;
- (id)initWithValueSource:(id)arg1 accessory:(id)arg2;

@end
