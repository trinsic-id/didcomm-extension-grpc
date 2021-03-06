// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: didcomm.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30004
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30004 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - DidcommRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
GPB_FINAL @interface DidcommRoot : GPBRootObject
@end

#pragma mark - CoreMessage

typedef GPB_ENUM(CoreMessage_FieldNumber) {
  CoreMessage_FieldNumber_Id_p = 1,
  CoreMessage_FieldNumber_Type = 2,
  CoreMessage_FieldNumber_Body = 3,
  CoreMessage_FieldNumber_ToArray = 4,
  CoreMessage_FieldNumber_From = 5,
  CoreMessage_FieldNumber_Created = 6,
  CoreMessage_FieldNumber_Expires = 7,
};

GPB_FINAL @interface CoreMessage : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *type;

@property(nonatomic, readwrite, copy, null_resettable) NSData *body;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *toArray;
/** The number of items in @c toArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger toArray_Count;

@property(nonatomic, readwrite, copy, null_resettable) NSString *from;

@property(nonatomic, readwrite) int64_t created;

@property(nonatomic, readwrite) int64_t expires;

@end

#pragma mark - NoOp

GPB_FINAL @interface NoOp : GPBMessage

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
