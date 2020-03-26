//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSSpecifierGroup-Protocol.h>

@class CTCellularPlanManager, CTCellularPlanPendingTransfer, PSListController, PSSpecifier, PSUICellularPlanManagerCache;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferMenusGroup : NSObject <PSSpecifierGroup>
{
    PSSpecifier *_parentSpecifier;
    CTCellularPlanPendingTransfer *_planPendingTransfer;
    PSSpecifier *_groupSpecifier;
    PSListController *_listController;
    CTCellularPlanManager *_cellularPlanManager;
    PSUICellularPlanManagerCache *_planManagerCache;
}

@property(retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // @synthesize planManagerCache=_planManagerCache;
@property(retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // @synthesize cellularPlanManager=_cellularPlanManager;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // @synthesize planPendingTransfer=_planPendingTransfer;
@property(retain, nonatomic) PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
// - (void).cxx_destruct;
- (void)addSpecifierForHeaderString:(id)arg1;
- (id)cancelConsentRequestSpecifier;
- (id)activatePlanSpecifier;
- (id)planActivationInfo;
- (id)planPendingTransferNumber:(id)arg1;
- (id)planPendingTransferLabel:(id)arg1;
- (void)removePlanPendingTransfer:(id)arg1;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)specifiers;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2;

@end
