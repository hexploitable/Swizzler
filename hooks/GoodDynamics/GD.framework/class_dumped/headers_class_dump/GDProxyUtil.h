//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GDProxyUtil : NSObject
{
}

+ (void)setUseDefaultObjectForThread:(BOOL)arg1 with:(id *)arg2;
+ (BOOL)usingDefaultObjectForThreadWith:(id *)arg1;
+ (void)exitObjectIfRoot:(BOOL)arg1 with:(id *)arg2;
+ (BOOL)enterObjectIfRootWith:(id *)arg1;
+ (void)setUseDefaultNSBundleForThread:(BOOL)arg1;
+ (BOOL)usingDefaultNSBundleForThread;
+ (void)exitNSBundleIfRoot:(BOOL)arg1;
+ (BOOL)enterNSBundleIfRoot;
+ (void)setUseDefaultNSURLForThread:(BOOL)arg1;
+ (BOOL)usingDefaultNSURLForThread;
+ (void)exitNSURLIfRoot:(BOOL)arg1;
+ (BOOL)enterNSURLIfRoot;
+ (void)setUseDefaultFileManagerForThread:(BOOL)arg1;
+ (BOOL)usingDefaultFileManagerForThread;
+ (void)exitNSFileManagerIfRoot:(BOOL)arg1;
+ (BOOL)enterNSFileManagerIfRoot;
+ (id)currentDirectoryPath;
+ (id)absolutePathForPath:(id)arg1;
+ (BOOL)isAbsolutePath:(id)arg1;
+ (BOOL)shouldPassThrough:(id)arg1;
+ (void)analyzeClass:(Class)arg1 recursively:(BOOL)arg2;
+ (void)analyzeClass:(Class)arg1;
+ (void)analyzeClassProperties:(Class)arg1;
+ (void)analyzeClassFunctions:(Class)arg1;
+ (void)analyzeClassIvars:(Class)arg1;
+ (void)analyzeClassProtocols:(Class)arg1;
+ (void)analyzeProtocol:(id)arg1;
+ (void)analyzeIvar:(struct objc_ivar *)arg1;
+ (void)analyzeProperty:(struct objc_property *)arg1;
+ (void)analyzeMethodFromClass:(Class)arg1 BySelector:(SEL)arg2;
+ (void)analyzeMethod:(struct objc_method *)arg1;

@end
