// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from std_msgs:msg/Char.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "std_msgs/msg/detail/char__functions.h"
#include "std_msgs/msg/detail/char__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace std_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Char_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) std_msgs::msg::Char(_init);
}

void Char_fini_function(void * message_memory)
{
  auto typed_message = static_cast<std_msgs::msg::Char *>(message_memory);
  typed_message->~Char();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Char_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs::msg::Char, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Char_message_members = {
  "std_msgs::msg",  // message namespace
  "Char",  // message name
  1,  // number of fields
  sizeof(std_msgs::msg::Char),
  false,  // has_any_key_member_
  Char_message_member_array,  // message members
  Char_init_function,  // function to initialize message memory (memory has to be allocated)
  Char_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Char_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Char_message_members,
  get_message_typesupport_handle_function,
  &std_msgs__msg__Char__get_type_hash,
  &std_msgs__msg__Char__get_type_description,
  &std_msgs__msg__Char__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace std_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<std_msgs::msg::Char>()
{
  return &::std_msgs::msg::rosidl_typesupport_introspection_cpp::Char_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, std_msgs, msg, Char)() {
  return &::std_msgs::msg::rosidl_typesupport_introspection_cpp::Char_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
