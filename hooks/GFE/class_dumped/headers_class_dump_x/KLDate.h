/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface KLDate : _ABAddressBookAddRecord <NSCopying, NSCoding>
{
    int _year;
    int _month;
    int _day;
}

+ (id)today;
- (id)date;
- (BOOL)isTheDayBefore:(id)fp8;
- (BOOL)isTheFirstDayOfTheYear;
- (BOOL)isTheLastDayOfTheYear;
- (int)dayOfMonth;
- (int)monthOfYear;
- (int)yearOfCommonEra;
- (id)previousDay;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)fp8;
- (BOOL)isToday;
- (BOOL)isLaterThan:(id)fp8;
- (BOOL)isEarlierThan:(id)fp8;
- (int)compare:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)initWithYear:(int)fp8 month:(unsigned int)fp12 day:(unsigned int)fp16;

@end
