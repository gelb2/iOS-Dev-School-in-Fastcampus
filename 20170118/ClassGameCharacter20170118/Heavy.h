//
//  Heavy.h
//  ClassGameCharacter20170117
//
//  Created by ji jun young on 2017. 1. 18..
//  Copyright © 2017년 Fastcampus. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Heavy : NSObject

@property NSString* name;

@property NSInteger health;

@property NSInteger meeleAttackPower;

@property NSInteger rangeAttackPower;

- (id) meeleAttack:(Sniper *)to;

- (id) rangeAttack:(Sniper *)to;


@end
