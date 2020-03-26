//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKApplicationDelegate.h>

@class NSArray, NSString;
@protocol TSADownloadDelegate;

@interface TSABaseApplicationDelegate : TSKApplicationDelegate
{
    id <TSADownloadDelegate> _downloadDelegate;
}

+ (void)presentAlertController:(id)arg1 animated:(BOOL)arg2;
+ (void)resetSharedConfigurations;
+ (id)sharedDelegate;
@property(retain, nonatomic) id <TSADownloadDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
- (id)existingNestedDocumentPathForPath:(id)arg1;
- (BOOL)URLIsValidForImportedHyperlink:(id)arg1;
- (BOOL)openURL:(id)arg1 sourceDocumentRoot:(id)arg2;
- (id)validURLSchemes;
- (id)invalidURLSchemes;
- (double)maximumAspectRatioForPreviewImage;
- (double)mimimumAspectRatioForPreviewImage;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale )arg1;
@property(readonly, nonatomic) NSArray *applicationTemplateVariants;
- (void)registerDefaults;
- (BOOL)isReadableDocumentType:(id)arg1;
@property(readonly, nonatomic) NSArray *importableDocumentTypes;
@property(readonly, nonatomic) NSArray *readableDocumentTypes;
@property(readonly, nonatomic) NSString *nativeSFFDocumentType;
@property(readonly, nonatomic) NSString *tangierEditingFormatDocumentType;
@property(readonly, nonatomic) NSString *templateDocumentExtension;
@property(readonly, nonatomic) NSString *templateSFFDocumentType;
@property(readonly, nonatomic) NSString *templateDocumentType;
@property(readonly, nonatomic) NSString *nativeDocumentExtension;
@property(readonly, nonatomic) NSString *nativeDocumentType;
- (void)persistenceError:(id)arg1;
- (Class)documentRootClass;
- (void)dealloc;
- (id)init;

@end
