//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface HDMaintenanceOperation : NSOperation
{
    double _startedTime;
}

+ (id)maintenanceOperationWithName:(id)arg1 asynchronousBlock:(id /* CDUnknownBlockType */)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

@end
