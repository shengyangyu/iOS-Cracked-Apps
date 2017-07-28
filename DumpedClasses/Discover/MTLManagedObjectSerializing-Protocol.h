//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

@class NSDictionary, NSManagedObject, NSSet, NSString, NSValueTransformer;

@protocol MTLManagedObjectSerializing <MTLModel>
+ (NSDictionary *)managedObjectKeysByPropertyKey;
+ (NSString *)managedObjectEntityName;

@optional
+ (Class)classForDeserializingManagedObject:(NSManagedObject *)arg1;
+ (NSDictionary *)relationshipModelClassesByPropertyKey;
+ (NSValueTransformer *)entityAttributeTransformerForKey:(NSString *)arg1;
+ (NSSet *)propertyKeysForManagedObjectUniquing;
- (void)mergeValuesForKeysFromManagedObject:(NSManagedObject *)arg1;
- (void)mergeValueForKey:(NSString *)arg1 fromManagedObject:(NSManagedObject *)arg2;
@end

