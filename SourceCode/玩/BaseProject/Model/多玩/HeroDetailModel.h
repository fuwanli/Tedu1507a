//
//  HeroDetailModel.h
//  BaseProject
//
//  Created by jiyingxin on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "BaseModel.h"

@class HeroDetailBraumQModel,HeroDetailBraumRModel,HeroDetailBraumWModel,HeroDetailBraumBModel,HeroDetailBraumEModel,HeroDetailLikeModel,HeroDetailHateModel;
@interface HeroDetailModel : BaseModel

@property (nonatomic, copy) NSString *ratingAttack;

@property (nonatomic, strong) HeroDetailBraumWModel *Braum_W;

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *healthLevel;

@property (nonatomic, strong) HeroDetailBraumQModel *Braum_Q;

@property (nonatomic, copy) NSString *quoteAuthor;

@property (nonatomic, copy) NSString *criticalChanceLevel;

@property (nonatomic, copy) NSString *splashPath;

@property (nonatomic, copy) NSString *manaLevel;

@property (nonatomic, copy) NSString *desc;

@property (nonatomic, copy) NSString *manaRegenBase;

@property (nonatomic, copy) NSString *attackLevel;

@property (nonatomic, copy) NSString *ratingDifficulty;

@property (nonatomic, strong) NSArray<HeroDetailHateModel *> *hate;

@property (nonatomic, strong) HeroDetailBraumEModel *Braum_E;

@property (nonatomic, copy) NSString *healthRegenBase;

@property (nonatomic, copy) NSString *iconPath;

@property (nonatomic, copy) NSString *magicResistLevel;

@property (nonatomic, copy) NSString *healthBase;

@property (nonatomic, copy) NSString *selectSoundPath;

@property (nonatomic, strong) NSArray<HeroDetailLikeModel *> *like;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *armorLevel;

@property (nonatomic, copy) NSString *manaRegenLevel;

@property (nonatomic, copy) NSString *range;

@property (nonatomic, copy) NSString *price;

@property (nonatomic, copy) NSString *danceVideoPath;

@property (nonatomic, copy) NSString *tags;

@property (nonatomic, copy) NSString *attackBase;

@property (nonatomic, copy) NSString *portraitPath;

@property (nonatomic, copy) NSString *armorBase;

@property (nonatomic, copy) NSString *quote;

@property (nonatomic, copy) NSString *manaBase;

@property (nonatomic, copy) NSString *opponentTips;

@property (nonatomic, copy) NSString *criticalChanceBase;

@property (nonatomic, copy) NSString *ratingDefense;

@property (nonatomic, strong) HeroDetailBraumBModel *Braum_B;

@property (nonatomic, copy) NSString *tips;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *healthRegenLevel;

@property (nonatomic, copy) NSString *ratingMagic;

@property (nonatomic, strong) HeroDetailBraumRModel *Braum_R;

@property (nonatomic, copy) NSString *moveSpeed;

@property (nonatomic, copy) NSString *magicResistBase;

@property (nonatomic, copy) NSString *displayName;

@end


@interface HeroDetailBraumQModel : NSObject

@property (nonatomic, copy) NSString *effect;

@property (nonatomic, copy) NSString *cost;

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *cooldown;

@property (nonatomic, copy) NSString *range;

@property (nonatomic, copy) NSString *description;

@property (nonatomic, copy) NSString *name;

@end

@interface HeroDetailBraumRModel : NSObject

@property (nonatomic, copy) NSString *effect;

@property (nonatomic, copy) NSString *cost;

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *cooldown;

@property (nonatomic, copy) NSString *range;

@property (nonatomic, copy) NSString *description;

@property (nonatomic, copy) NSString *name;

@end

@interface HeroDetailBraumWModel : NSObject

@property (nonatomic, copy) NSString *effect;

@property (nonatomic, copy) NSString *cost;

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *cooldown;

@property (nonatomic, copy) NSString *range;

@property (nonatomic, copy) NSString *description;

@property (nonatomic, copy) NSString *name;

@end

@interface HeroDetailBraumBModel : NSObject

@property (nonatomic, copy) NSString *effect;

@property (nonatomic, copy) NSString *cost;

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *cooldown;

@property (nonatomic, copy) NSString *range;

@property (nonatomic, copy) NSString *description;

@property (nonatomic, copy) NSString *name;

@end

@interface HeroDetailBraumEModel : NSObject

@property (nonatomic, copy) NSString *effect;

@property (nonatomic, copy) NSString *cost;

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *cooldown;

@property (nonatomic, copy) NSString *range;

@property (nonatomic, copy) NSString *description;

@property (nonatomic, copy) NSString *name;

@end

@interface HeroDetailLikeModel : NSObject

@property (nonatomic, copy) NSString *partner;

@property (nonatomic, copy) NSString *des;

@end

@interface HeroDetailHateModel : NSObject

@property (nonatomic, copy) NSString *partner;

@property (nonatomic, copy) NSString *des;

@end

