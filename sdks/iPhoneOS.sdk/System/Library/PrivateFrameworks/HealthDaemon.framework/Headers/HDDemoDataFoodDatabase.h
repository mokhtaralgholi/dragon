//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface HDDemoDataFoodDatabase : NSObject
{
    NSDictionary *_dietaryNutrientDailyValues;
    NSDictionary *_canonicalDietaryUnits;
    NSArray *_beverages;
    NSArray *_breakfastFoods;
    NSArray *_lunchFoods;
    NSArray *_snackFoods;
    NSArray *_dinnerFoods;
}

@property(copy, nonatomic) NSArray *dinnerFoods; // @synthesize dinnerFoods=_dinnerFoods;
@property(copy, nonatomic) NSArray *snackFoods; // @synthesize snackFoods=_snackFoods;
@property(copy, nonatomic) NSArray *lunchFoods; // @synthesize lunchFoods=_lunchFoods;
@property(copy, nonatomic) NSArray *breakfastFoods; // @synthesize breakfastFoods=_breakfastFoods;
@property(copy, nonatomic) NSArray *beverages; // @synthesize beverages=_beverages;
@property(copy, nonatomic) NSDictionary *canonicalDietaryUnits; // @synthesize canonicalDietaryUnits=_canonicalDietaryUnits;
@property(copy, nonatomic) NSDictionary *dietaryNutrientDailyValues; // @synthesize dietaryNutrientDailyValues=_dietaryNutrientDailyValues;
// - (void).cxx_destruct;
- (id)randomFoodObjectFromArray:(id)arg1;
- (id)oliveGardenChickenAndShrimpCarbonara;
- (id)oliveGardenChickenScampi;
- (id)oliveGardenHerbGrilledSalmon;
- (id)oliveGardenRosemaryChicken;
- (id)oliveGardenCitrusChickenSorrento;
- (id)oliveGardenBakedTilapiaWithShrimp;
- (id)oliveGardenGarlicRosemaryChicken;
- (id)livemainLobsterWithCornAndPotatoes;
- (id)redLobsterTilapiaWithRoastedVegetables;
- (id)oikosYogurt;
- (id)keeblerAnimalCrackers;
- (id)crackersTriscuits;
- (id)crackersGlutenFreeMultigrain;
- (id)apple;
- (id)clifBarChocoFudgeAndAlmond;
- (id)hersheyBarWithAlmonds;
- (id)bumbleBarWithAlmond;
- (id)subwayVeggieDelightSalad;
- (id)subwayFootLongVeggieDelightSandwich;
- (id)subwayFootLongBlackForestHamSandwich;
- (id)traderJoesChickenAndGreenChileTomales;
- (id)traderJoesButterChickenWithBasmataRice;
- (id)mcDonaldsGreekSaladWithCrispyChicken;
- (id)mcDonaldsCaesarSaladWithGrilledChicken;
- (id)mcDonaldsMcChickenSandwich;
- (id)mcDonaldsMcDouble;
- (id)mcDonaldsBigMac;
- (id)traderJoesBreakfastBurrito;
- (id)jimmyDeanBreakfastCroissant;
- (id)totalCerealWithMilk;
- (id)lifeCerealWithMilk;
- (id)quakerInstantOatmealMapleWithMilk;
- (id)quakerInstantOatmealAppleCinnamonWithMilk;
- (id)quakerInstantOatmealRegularWithMilk;
- (id)coffee;
- (id)milk;
- (id)odwallaCMonster;
- (id)tropicanaOrangeJuice;
- (id)oceanSprayCranberryJuice;
- (id)canonicalDietaryUnitForQuantityTypeIdentifier:(id)arg1;
- (double)dailyValueForDietaryNutrientIdentifier:(id)arg1;
- (id)randomFoodForType:(long long)arg1;
- (id)init;

@end
