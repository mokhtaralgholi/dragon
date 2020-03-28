//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUIResourceLoaderDelegate-Protocol.h>

@class NSMutableArray, SKUIChartColumnsView, SKUIChartsTemplateViewElement, SKUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SKUIChartsDocumentViewController : SKUIViewController <SKUIResourceLoaderDelegate, SKUIDocumentViewController>
{
    SKUIChartColumnsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SKUIChartsTemplateViewElement *_templateElement;
    SKUIResourceLoader *_resourceLoader;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
// - (void).cxx_destruct;
- (id)_resourceLoader;
- (long long)_visibleColumnCountForWidth:(double)arg1;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;
- (id)_columnViewControllers;
- (UIEdgeInsets)_chartInsets;
- (void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2;
- (void)resourceLoaderDidBeginLoading:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;
- (void)loadView;
- (id)contentScrollView;
- (void)skui_viewWillAppear:(BOOL)arg1;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;

@end
