//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@interface NSManagedObject (MagicalAggregation)
+ (id)MR_aggregateOperation:(id)arg1 onAttribute:(id)arg2 withPredicate:(id)arg3 groupBy:(id)arg4;
+ (id)MR_aggregateOperation:(id)arg1 onAttribute:(id)arg2 withPredicate:(id)arg3 groupBy:(id)arg4 inContext:(id)arg5;
+ (id)MR_aggregateOperation:(id)arg1 onAttribute:(id)arg2 withPredicate:(id)arg3;
+ (id)MR_aggregateOperation:(id)arg1 onAttribute:(id)arg2 withPredicate:(id)arg3 inContext:(id)arg4;
+ (_Bool)MR_hasAtLeastOneEntityInContext:(id)arg1;
+ (_Bool)MR_hasAtLeastOneEntity;
+ (unsigned long long)MR_countOfEntitiesWithPredicate:(id)arg1 inContext:(id)arg2;
+ (unsigned long long)MR_countOfEntitiesWithPredicate:(id)arg1;
+ (unsigned long long)MR_countOfEntitiesWithContext:(id)arg1;
+ (unsigned long long)MR_countOfEntities;
+ (id)MR_numberOfEntitiesWithPredicate:(id)arg1;
+ (id)MR_numberOfEntitiesWithPredicate:(id)arg1 inContext:(id)arg2;
+ (id)MR_numberOfEntities;
+ (id)MR_numberOfEntitiesWithContext:(id)arg1;
- (id)MR_objectWithMinValueFor:(id)arg1;
- (id)MR_objectWithMinValueFor:(id)arg1 inContext:(id)arg2;
- (id)MR_maxValueFor:(id)arg1;
- (id)MR_minValueFor:(id)arg1;
@end

