/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class AppointmentWrapper, KLDayViewAllDayEventCellView;

@interface KLDayViewAllDayEventCell : _ABAddressBookAddRecord
{
    KLDayViewAllDayEventCellView *customView;
    AppointmentWrapper *appointment;
    BOOL topRow;
    int appDayCount;
}

- (void)setAppDayCount:(int)fp8;
- (int)appDayCount;
- (void)setTopRow:(BOOL)fp8;
- (BOOL)topRow;
- (void)setAppointment:(id)fp8;
- (id)appointment;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end
