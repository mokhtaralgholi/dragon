//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoAdViewControllerProviding-Protocol.h>

@class UIViewController;
@protocol SXVideoAdViewControllerProviding;

@interface SXVideoAdViewControllerProvider : NSObject <SXVideoAdViewControllerProviding>
{
    id <SXVideoAdViewControllerProviding> _viewControllerProvider;
}

@property(readonly, nonatomic) __weak id <SXVideoAdViewControllerProviding> viewControllerProvider; // @synthesize viewControllerProvider=_viewControllerProvider;
// - (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *viewControllerForModalPresentation;
- (id)initWithViewControllerProvider:(id)arg1;

@end
