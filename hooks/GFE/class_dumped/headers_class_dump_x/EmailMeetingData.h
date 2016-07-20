/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class AppointmentWrapper, NSMutableArray, NSString;

@interface EmailMeetingData : _ABAddressBookAddRecord
{
    AppointmentWrapper *_meeting;
    int _conflicts;
    BOOL _isShowInCalendarButtonVisible;
    BOOL _areResponseButtonsVisible;
    BOOL _isResponseMessageVisible;
    NSString *_responseMessageText;
    NSMutableArray *_meetingRequestList;
    BOOL _processMeetingRequestList;
    int _meetingResponse;
    BOOL _meetingResponseWithEmail;
}

- (void)setMeetingResponseWithEmail:(BOOL)fp8;
- (BOOL)meetingResponseWithEmail;
- (void)setMeetingResponse:(int)fp8;
- (int)meetingResponse;
- (void)setProcessMeetingRequestList:(BOOL)fp8;
- (BOOL)processMeetingRequestList;
- (void)setMeetingRequestList:(id)fp8;
- (id)meetingRequestList;
- (void)setResponseMessageText:(id)fp8;
- (id)responseMessageText;
- (void)setIsResponseMessageVisible:(BOOL)fp8;
- (BOOL)isResponseMessageVisible;
- (void)setAreResponseButtonsVisible:(BOOL)fp8;
- (BOOL)areResponseButtonsVisible;
- (void)setIsShowInCalendarButtonVisible:(BOOL)fp8;
- (BOOL)isShowInCalendarButtonVisible;
- (void)setConflicts:(int)fp8;
- (int)conflicts;
- (void)setMeeting:(id)fp8;
- (id)meeting;
- (void)dealloc;
- (id)initWithEmail:(id)fp8;

@end
