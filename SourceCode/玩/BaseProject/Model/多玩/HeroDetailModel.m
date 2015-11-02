//
//  HeroDetailModel.m
//  BaseProject
//
//  Created by jiyingxin on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "HeroDetailModel.h"

@implementation HeroDetailModel


+ (NSDictionary *)objectClassInArray{
    return @{@"like" : [HeroDetailLikeModel class], @"hate" : [HeroDetailHateModel class]};
}

+ (NSDictionary *)replacedKeyFromPropertyName{
    return @{@"ID": @"id", @"desc": @"description"};
}

@end
@implementation HeroDetailBraumQModel

@end


@implementation HeroDetailBraumRModel

@end


@implementation HeroDetailBraumWModel

@end


@implementation HeroDetailBraumBModel

@end


@implementation HeroDetailBraumEModel

@end


@implementation HeroDetailLikeModel

@end


@implementation HeroDetailHateModel

@end


