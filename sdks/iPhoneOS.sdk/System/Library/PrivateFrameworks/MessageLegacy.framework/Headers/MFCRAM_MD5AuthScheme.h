//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageLegacy/MFAuthScheme.h>

@interface MFCRAM_MD5AuthScheme : MFAuthScheme
{
}

- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (BOOL)hasEncryption;
- (BOOL)sendsPlainTextPasswords;
- (id)humanReadableName;
- (id)name;
- (Class)authenticatorClass;

@end
