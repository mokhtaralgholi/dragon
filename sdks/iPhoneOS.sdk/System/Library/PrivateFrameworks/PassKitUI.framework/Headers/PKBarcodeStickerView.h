//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableArray, PKBarcode, UIImage, UIImageView, UILabel, UIView;

@interface PKBarcodeStickerView : UIButton
{
    PKBarcode *_barcode;
    UIImage *_barcodeImage;
    UIImageView *_matteView;
    UIImageView *_barcodeView;
    NSMutableArray *_stickerConstraints;
    NSMutableArray *_matteConstraints;
    UILabel *_altTextLabel;
    BOOL _drawBarcode;
    long long _validity;
}

+ (CGSize)_sizeForBarcode:(id)arg1;
+ (struct PKBarcodeQuietZone)_quiteZoneForBarcode:(id)arg1;
+ (long long)validityStateForPass:(id)arg1;
@property(readonly, nonatomic) UIView *matteView; // @synthesize matteView=_matteView;
@property(nonatomic) long long validity; // @synthesize validity=_validity;
// - (void).cxx_destruct;
- (id)barcodeImage;
- (void)_updateDrawBarcode;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)_generateMatteRect:(CGRect )arg1 barcodeRect:(CGRect )arg2 altTextRect:(CGRect )arg3 boundingSize:(CGSize)arg4;
- (id)_resizedBarcode:(id)arg1 desiredSize:(CGSize)arg2;
- (void)_updateValidity;
- (id)initWithBarcode:(id)arg1 validityState:(long long)arg2;
- (CGSize)_varianceForBarcode:(id)arg1;

@end
