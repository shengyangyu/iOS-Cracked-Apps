//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMapTable;

@interface MTLJSONAdapter : NSObject
{
    Class _modelClass;
    NSDictionary *_JSONKeyPathsByPropertyKey;
    NSDictionary *_valueTransformersByPropertyKey;
    NSMapTable *_JSONAdaptersByModelClass;
}

+ (id)transformerForModelPropertiesOfObjCType:(const char *)arg1;
+ (id)transformerForModelPropertiesOfClass:(Class)arg1;
+ (id)valueTransformersForModelClass:(Class)arg1;
+ (id)JSONArrayFromModels:(id)arg1 error:(id *)arg2;
+ (id)JSONDictionaryFromModel:(id)arg1 error:(id *)arg2;
+ (id)modelsOfClass:(Class)arg1 fromJSONArray:(id)arg2 error:(id *)arg3;
+ (id)modelOfClass:(Class)arg1 fromJSONDictionary:(id)arg2 error:(id *)arg3;
+ (id)NSUUIDJSONTransformer;
+ (id)NSURLJSONTransformer;
+ (id)arrayTransformerWithModelClass:(Class)arg1;
+ (id)dictionaryTransformerWithModelClass:(Class)arg1;
+ (id)JSONDictionaryFromModel:(id)arg1;
+ (id)JSONArrayFromModels:(id)arg1;
@property(readonly, nonatomic) NSMapTable *JSONAdaptersByModelClass; // @synthesize JSONAdaptersByModelClass=_JSONAdaptersByModelClass;
@property(readonly, copy, nonatomic) NSDictionary *valueTransformersByPropertyKey; // @synthesize valueTransformersByPropertyKey=_valueTransformersByPropertyKey;
@property(readonly, copy, nonatomic) NSDictionary *JSONKeyPathsByPropertyKey; // @synthesize JSONKeyPathsByPropertyKey=_JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
- (void).cxx_destruct;
- (id)serializablePropertyKeys:(id)arg1 forModel:(id)arg2;
- (id)JSONAdapterForModelClass:(Class)arg1 error:(id *)arg2;
- (id)modelFromJSONDictionary:(id)arg1 error:(id *)arg2;
- (id)JSONDictionaryFromModel:(id)arg1 error:(id *)arg2;
- (id)initWithModelClass:(Class)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) id <MTLJSONSerializing> model;

@end

