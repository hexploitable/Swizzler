//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSRecursiveLock;

@interface GDUIViewControllerProxyLayer : NSObject
{
    BOOL _isBlocking;
    NSMutableArray *_pendingAwaken;
    NSRecursiveLock *_lock;
}

+ (id)sharedInstance;
+ (void)setupProxyForClass:(Class)arg1;
+ (void)setupProxy;
@property(retain, nonatomic) NSMutableArray *pendingAwaken; // @synthesize pendingAwaken=_pendingAwaken;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property BOOL isBlocking; // @synthesize isBlocking=_isBlocking;
- (void)awakenAllHeldNibs;
- (void)stopAllAwaken;
- (void)stashViewController:(id)arg1;

@end
