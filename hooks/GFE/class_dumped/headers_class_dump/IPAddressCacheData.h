//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface IPAddressCacheData : NSObject
{
    NSString *m_hostName;
    NSArray *m_hostIPAddressList;
    NSDate *m_dateCreated;
    NSDate *m_dateLastUsed;
}

@property(retain, nonatomic) NSDate *m_dateLastUsed; // @synthesize m_dateLastUsed;
@property(retain, nonatomic) NSDate *m_dateCreated; // @synthesize m_dateCreated;
@property(retain, nonatomic) NSArray *m_hostIPAddressList; // @synthesize m_hostIPAddressList;
@property(retain, nonatomic) NSString *m_hostName; // @synthesize m_hostName;
- (id)init:(id)arg1 IPAddressList:(id)arg2;

@end
