// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: options.proto

#include "proto/options.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace xviz {
}  // namespace xviz
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_options_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_options_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_options_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_options_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_options_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\roptions.proto\022\004xviz\032 google/protobuf/d"
  "escriptor.proto:;\n\020xviz_json_schema\022\037.go"
  "ogle.protobuf.MessageOptions\030\270\247\003 \001(\tB4\n\013"
  "com.xviz.v2B\014OptionsProtoP\001Z\004v2pb\242\002\004XVIZ"
  "\252\002\007xviz.V2b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_options_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_options_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_options_2eproto_once;
static bool descriptor_table_options_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_options_2eproto = {
  &descriptor_table_options_2eproto_initialized, descriptor_table_protodef_options_2eproto, "options.proto", 178,
  &descriptor_table_options_2eproto_once, descriptor_table_options_2eproto_sccs, descriptor_table_options_2eproto_deps, 0, 1,
  schemas, file_default_instances, TableStruct_options_2eproto::offsets,
  file_level_metadata_options_2eproto, 0, file_level_enum_descriptors_options_2eproto, file_level_service_descriptors_options_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_options_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_options_2eproto), true);
namespace xviz {
const std::string xviz_json_schema_default("");
::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  xviz_json_schema(kXvizJsonSchemaFieldNumber, xviz_json_schema_default);

// @@protoc_insertion_point(namespace_scope)
}  // namespace xviz
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>