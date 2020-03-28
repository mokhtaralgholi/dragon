//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKAnnotation.h>

#import <AnnotationKit/AKChildAnnotationProtocol-Protocol.h>
#import <AnnotationKit/AKRectangularAnnotationProtocol-Protocol.h>

@class NSString;

@interface AKPopupAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKChildAnnotationProtocol>
{
    NSUInteger _visualStyle;
    AKAnnotation *_parentAnnotation;
    NSString *_contents;
    CGRect _rectangle;
    CGRect _openRectangle;
}

+ (BOOL)supportsSecureCoding;
+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingHitTestBounds;
@property(copy) NSString *contents; // @synthesize contents=_contents;
@property __weak AKAnnotation *parentAnnotation; // @synthesize parentAnnotation=_parentAnnotation;
@property CGRect openRectangle; // @synthesize openRectangle=_openRectangle;
@property CGRect rectangle; // @synthesize rectangle=_rectangle;
@property NSUInteger visualStyle; // @synthesize visualStyle=_visualStyle;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)translateBy:(CGPoint)arg1;
- (void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2;
- (CGRect)hitTestBounds;
- (id)displayName;
- (id)keysForValuesToObserveForUndo;
- (id)keysForValuesToObserveForAdornments;

@end
