/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DAKeychain : NSObject
{
}

+ (id)sharedKeychain;
- (void)migratePasswordForAccount:(id)arg1 persistentUUID:(id)arg2 passwordExpected:(BOOL)arg3;
- (BOOL)removePasswordForAccount:(id)arg1 withPersistentUUID:(id)arg2;
- (BOOL)setPassword:(id)arg1 forAccount:(id)arg2 withPersistentUUID:(id)arg3 withAccessibility:(int)arg4;
- (void)_removePersistentCredentialsForAccount:(id)arg1;
- (id)passwordForAccountWithPersistentUUID:(id)arg1 expectedAccessibility:(int)arg2 shouldSetAccessibility:(BOOL)arg3 passwordExpected:(BOOL)arg4;
- (struct __CFDictionary *)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)arg1 accessibility:(int)arg2;
- (struct __CFDictionary *)_DACopyMutableQueryForAccountWithPersistentUUID:(id)arg1;
- (int)_daKeychainAccessibilityForSecAccessibility:(void *)arg1;
- (void *)_secAccessibilityForDAKeychainAccessibility:(int)arg1;
- (id)guessPasswordForURL:(id)arg1;
- (void)removeKeychainInformationsForURL:(id)arg1;
- (id)loadKeychainInformationsForURL:(id)arg1;
- (BOOL)saveKeychainInformationsForURL:(id)arg1 andPassword:(id)arg2 withAccessibility:(int)arg3;

@end
