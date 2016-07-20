/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class CALayer;

@interface SBBookmarkCell : _ABAddressBookAddRecord
{
    int _type;
    CALayer *backgroundLayer;
}

+ (id)iconImageForType:(int)fp8;
- (void)setBackgroundLayer:(id)fp8;
- (id)backgroundLayer;
- (void)setType:(int)fp8;
- (int)type;
- (void)layoutSubviews;
- (id)initWithType:(int)fp8 reuseIdentifier:(id)fp12;
- (void)refreshUI;
- (void)refreshLabels;

@end
