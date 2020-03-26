//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

@class HUAppleMusicAccountModule, HUButtonCell, NAFuture, NSMapTable;
@protocol HUAppleMusicAccountModuleControllerDelegate;

@interface HUAppleMusicAccountModuleController : HUItemTableModuleController
{
    id <HUAppleMusicAccountModuleControllerDelegate> _delegate;
    HUButtonCell *_logoutButton;
    NAFuture *_logoutFuture;
    HUButtonCell *_loginButton;
    NAFuture *_loginFuture;
    HUButtonCell *_activeAuthCell;
    NSMapTable *_itemToCellMap;
}

@property(retain, nonatomic) NSMapTable *itemToCellMap; // @synthesize itemToCellMap=_itemToCellMap;
@property(nonatomic) __weak HUButtonCell *activeAuthCell; // @synthesize activeAuthCell=_activeAuthCell;
@property(retain, nonatomic) NAFuture *loginFuture; // @synthesize loginFuture=_loginFuture;
@property(nonatomic) __weak HUButtonCell *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) NAFuture *logoutFuture; // @synthesize logoutFuture=_logoutFuture;
@property(nonatomic) __weak HUButtonCell *logoutButton; // @synthesize logoutButton=_logoutButton;
@property(nonatomic) __weak id <HUAppleMusicAccountModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_authenticationContextForAccessory:(id)arg1 account:(id)arg2;
- (void)_reloadForAuthEvent;
- (void)_updateModuleState:(NSUInteger)arg1 notifyDelegate:(BOOL)arg2;
- (id)_authCells;
- (void)_enableCells;
- (void)_disableCells;
- (BOOL)_canExecuteAccountAction;
- (void)_logout;
- (id)_companionLoginWithAccount:(id)arg1 cell:(id)arg2;
- (id)_proxyLoginWithAccount:(id)arg1 cell:(id)arg2;
- (void)_setupCompanionAuthenticationForAccount:(id)arg1 cell:(id)arg2;
- (void)_setupProxyAuthenticationForAccount:(id)arg1 cell:(id)arg2;
- (id)kickOffManualLogin;
- (void)clearLogoutFuture;
- (NSUInteger)didSelectItem:(id)arg1;
- (BOOL)canSelectItem:(id)arg1;
- (void)_setupButtonCell:(id)arg1 enabled:(BOOL)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) HUAppleMusicAccountModule *module; // @dynamic module;
- (id)initWithModule:(id)arg1;

@end
