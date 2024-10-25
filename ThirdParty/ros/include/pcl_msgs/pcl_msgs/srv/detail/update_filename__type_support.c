// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pcl_msgs:srv/UpdateFilename.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pcl_msgs/srv/detail/update_filename__rosidl_typesupport_introspection_c.h"
#include "pcl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pcl_msgs/srv/detail/update_filename__functions.h"
#include "pcl_msgs/srv/detail/update_filename__struct.h"


// Include directives for member types
// Member `filename`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pcl_msgs__srv__UpdateFilename_Request__rosidl_typesupport_introspection_c__UpdateFilename_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pcl_msgs__srv__UpdateFilename_Request__init(message_memory);
}

void pcl_msgs__srv__UpdateFilename_Request__rosidl_typesupport_introspection_c__UpdateFilename_Request_fini_function(void * message_memory)
{
  pcl_msgs__srv__UpdateFilename_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pcl_msgs__srv__UpdateFilename_Request__rosidl_typesupport_introspection_c__UpdateFilename_Request_message_member_array[1] = {
  {
    "filename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs__srv__UpdateFilename_Request, filename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pcl_msgs__srv__UpdateFilename_Request__rosidl_typesupport_introspection_c__UpdateFilename_Request_message_members = {
  "pcl_msgs__srv",  // message namespace
  "UpdateFilename_Request",  // message name
  1,  // number of fields
  sizeof(pcl_msgs__srv__UpdateFilename_Request),
  false,  // has_any_key_member_
  pcl_msgs__srv__UpdateFilename_Request__rosidl_typesupport_introspection_c__UpdateFilename_Request_message_member_array,  // message members
  pcl_msgs__srv__UpdateFilename_Request__rosidl_typesupport_introspection_c__UpdateFilename_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pcl_msgs__srv__UpdateFilename_Request__rosidl_typesupport_introspection_c__UpdateFilename_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pcl_msgs__srv__UpdateFilename_Request__rosidl_typesupport_introspection_c__UpdateFilename_Request_message_type_support_handle = {
  0,
  &pcl_msgs__srv__UpdateFilename_Request__rosidl_typesupport_introspection_c__UpdateFilename_Request_message_members,
  get_message_typesupport_handle_function,
  &pcl_msgs__srv__UpdateFilename_Request__get_type_hash,
  &pcl_msgs__srv__UpdateFilename_Request__get_type_description,
  &pcl_msgs__srv__UpdateFilename_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pcl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, srv, UpdateFilename_Request)() {
  if (!pcl_msgs__srv__UpdateFilename_Request__rosidl_typesupport_introspection_c__UpdateFilename_Request_message_type_support_handle.typesupport_identifier) {
    pcl_msgs__srv__UpdateFilename_Request__rosidl_typesupport_introspection_c__UpdateFilename_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pcl_msgs__srv__UpdateFilename_Request__rosidl_typesupport_introspection_c__UpdateFilename_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pcl_msgs/srv/detail/update_filename__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pcl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pcl_msgs/srv/detail/update_filename__functions.h"
// already included above
// #include "pcl_msgs/srv/detail/update_filename__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pcl_msgs__srv__UpdateFilename_Response__rosidl_typesupport_introspection_c__UpdateFilename_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pcl_msgs__srv__UpdateFilename_Response__init(message_memory);
}

void pcl_msgs__srv__UpdateFilename_Response__rosidl_typesupport_introspection_c__UpdateFilename_Response_fini_function(void * message_memory)
{
  pcl_msgs__srv__UpdateFilename_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pcl_msgs__srv__UpdateFilename_Response__rosidl_typesupport_introspection_c__UpdateFilename_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs__srv__UpdateFilename_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pcl_msgs__srv__UpdateFilename_Response__rosidl_typesupport_introspection_c__UpdateFilename_Response_message_members = {
  "pcl_msgs__srv",  // message namespace
  "UpdateFilename_Response",  // message name
  1,  // number of fields
  sizeof(pcl_msgs__srv__UpdateFilename_Response),
  false,  // has_any_key_member_
  pcl_msgs__srv__UpdateFilename_Response__rosidl_typesupport_introspection_c__UpdateFilename_Response_message_member_array,  // message members
  pcl_msgs__srv__UpdateFilename_Response__rosidl_typesupport_introspection_c__UpdateFilename_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pcl_msgs__srv__UpdateFilename_Response__rosidl_typesupport_introspection_c__UpdateFilename_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pcl_msgs__srv__UpdateFilename_Response__rosidl_typesupport_introspection_c__UpdateFilename_Response_message_type_support_handle = {
  0,
  &pcl_msgs__srv__UpdateFilename_Response__rosidl_typesupport_introspection_c__UpdateFilename_Response_message_members,
  get_message_typesupport_handle_function,
  &pcl_msgs__srv__UpdateFilename_Response__get_type_hash,
  &pcl_msgs__srv__UpdateFilename_Response__get_type_description,
  &pcl_msgs__srv__UpdateFilename_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pcl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, srv, UpdateFilename_Response)() {
  if (!pcl_msgs__srv__UpdateFilename_Response__rosidl_typesupport_introspection_c__UpdateFilename_Response_message_type_support_handle.typesupport_identifier) {
    pcl_msgs__srv__UpdateFilename_Response__rosidl_typesupport_introspection_c__UpdateFilename_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pcl_msgs__srv__UpdateFilename_Response__rosidl_typesupport_introspection_c__UpdateFilename_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pcl_msgs/srv/detail/update_filename__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pcl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pcl_msgs/srv/detail/update_filename__functions.h"
// already included above
// #include "pcl_msgs/srv/detail/update_filename__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "pcl_msgs/srv/update_filename.h"
// Member `request`
// Member `response`
// already included above
// #include "pcl_msgs/srv/detail/update_filename__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pcl_msgs__srv__UpdateFilename_Event__init(message_memory);
}

void pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_fini_function(void * message_memory)
{
  pcl_msgs__srv__UpdateFilename_Event__fini(message_memory);
}

size_t pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__size_function__UpdateFilename_Event__request(
  const void * untyped_member)
{
  const pcl_msgs__srv__UpdateFilename_Request__Sequence * member =
    (const pcl_msgs__srv__UpdateFilename_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateFilename_Event__request(
  const void * untyped_member, size_t index)
{
  const pcl_msgs__srv__UpdateFilename_Request__Sequence * member =
    (const pcl_msgs__srv__UpdateFilename_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__get_function__UpdateFilename_Event__request(
  void * untyped_member, size_t index)
{
  pcl_msgs__srv__UpdateFilename_Request__Sequence * member =
    (pcl_msgs__srv__UpdateFilename_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__fetch_function__UpdateFilename_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pcl_msgs__srv__UpdateFilename_Request * item =
    ((const pcl_msgs__srv__UpdateFilename_Request *)
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateFilename_Event__request(untyped_member, index));
  pcl_msgs__srv__UpdateFilename_Request * value =
    (pcl_msgs__srv__UpdateFilename_Request *)(untyped_value);
  *value = *item;
}

void pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__assign_function__UpdateFilename_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pcl_msgs__srv__UpdateFilename_Request * item =
    ((pcl_msgs__srv__UpdateFilename_Request *)
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__get_function__UpdateFilename_Event__request(untyped_member, index));
  const pcl_msgs__srv__UpdateFilename_Request * value =
    (const pcl_msgs__srv__UpdateFilename_Request *)(untyped_value);
  *item = *value;
}

bool pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__resize_function__UpdateFilename_Event__request(
  void * untyped_member, size_t size)
{
  pcl_msgs__srv__UpdateFilename_Request__Sequence * member =
    (pcl_msgs__srv__UpdateFilename_Request__Sequence *)(untyped_member);
  pcl_msgs__srv__UpdateFilename_Request__Sequence__fini(member);
  return pcl_msgs__srv__UpdateFilename_Request__Sequence__init(member, size);
}

size_t pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__size_function__UpdateFilename_Event__response(
  const void * untyped_member)
{
  const pcl_msgs__srv__UpdateFilename_Response__Sequence * member =
    (const pcl_msgs__srv__UpdateFilename_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateFilename_Event__response(
  const void * untyped_member, size_t index)
{
  const pcl_msgs__srv__UpdateFilename_Response__Sequence * member =
    (const pcl_msgs__srv__UpdateFilename_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__get_function__UpdateFilename_Event__response(
  void * untyped_member, size_t index)
{
  pcl_msgs__srv__UpdateFilename_Response__Sequence * member =
    (pcl_msgs__srv__UpdateFilename_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__fetch_function__UpdateFilename_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pcl_msgs__srv__UpdateFilename_Response * item =
    ((const pcl_msgs__srv__UpdateFilename_Response *)
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateFilename_Event__response(untyped_member, index));
  pcl_msgs__srv__UpdateFilename_Response * value =
    (pcl_msgs__srv__UpdateFilename_Response *)(untyped_value);
  *value = *item;
}

void pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__assign_function__UpdateFilename_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pcl_msgs__srv__UpdateFilename_Response * item =
    ((pcl_msgs__srv__UpdateFilename_Response *)
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__get_function__UpdateFilename_Event__response(untyped_member, index));
  const pcl_msgs__srv__UpdateFilename_Response * value =
    (const pcl_msgs__srv__UpdateFilename_Response *)(untyped_value);
  *item = *value;
}

bool pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__resize_function__UpdateFilename_Event__response(
  void * untyped_member, size_t size)
{
  pcl_msgs__srv__UpdateFilename_Response__Sequence * member =
    (pcl_msgs__srv__UpdateFilename_Response__Sequence *)(untyped_member);
  pcl_msgs__srv__UpdateFilename_Response__Sequence__fini(member);
  return pcl_msgs__srv__UpdateFilename_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pcl_msgs__srv__UpdateFilename_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(pcl_msgs__srv__UpdateFilename_Event, request),  // bytes offset in struct
    NULL,  // default value
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__size_function__UpdateFilename_Event__request,  // size() function pointer
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateFilename_Event__request,  // get_const(index) function pointer
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__get_function__UpdateFilename_Event__request,  // get(index) function pointer
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__fetch_function__UpdateFilename_Event__request,  // fetch(index, &value) function pointer
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__assign_function__UpdateFilename_Event__request,  // assign(index, value) function pointer
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__resize_function__UpdateFilename_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(pcl_msgs__srv__UpdateFilename_Event, response),  // bytes offset in struct
    NULL,  // default value
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__size_function__UpdateFilename_Event__response,  // size() function pointer
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__get_const_function__UpdateFilename_Event__response,  // get_const(index) function pointer
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__get_function__UpdateFilename_Event__response,  // get(index) function pointer
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__fetch_function__UpdateFilename_Event__response,  // fetch(index, &value) function pointer
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__assign_function__UpdateFilename_Event__response,  // assign(index, value) function pointer
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__resize_function__UpdateFilename_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_message_members = {
  "pcl_msgs__srv",  // message namespace
  "UpdateFilename_Event",  // message name
  3,  // number of fields
  sizeof(pcl_msgs__srv__UpdateFilename_Event),
  false,  // has_any_key_member_
  pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_message_member_array,  // message members
  pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_message_type_support_handle = {
  0,
  &pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_message_members,
  get_message_typesupport_handle_function,
  &pcl_msgs__srv__UpdateFilename_Event__get_type_hash,
  &pcl_msgs__srv__UpdateFilename_Event__get_type_description,
  &pcl_msgs__srv__UpdateFilename_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pcl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, srv, UpdateFilename_Event)() {
  pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, srv, UpdateFilename_Request)();
  pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, srv, UpdateFilename_Response)();
  if (!pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_message_type_support_handle.typesupport_identifier) {
    pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pcl_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pcl_msgs/srv/detail/update_filename__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pcl_msgs__srv__detail__update_filename__rosidl_typesupport_introspection_c__UpdateFilename_service_members = {
  "pcl_msgs__srv",  // service namespace
  "UpdateFilename",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // pcl_msgs__srv__detail__update_filename__rosidl_typesupport_introspection_c__UpdateFilename_Request_message_type_support_handle,
  NULL,  // response message
  // pcl_msgs__srv__detail__update_filename__rosidl_typesupport_introspection_c__UpdateFilename_Response_message_type_support_handle
  NULL  // event_message
  // pcl_msgs__srv__detail__update_filename__rosidl_typesupport_introspection_c__UpdateFilename_Response_message_type_support_handle
};


static rosidl_service_type_support_t pcl_msgs__srv__detail__update_filename__rosidl_typesupport_introspection_c__UpdateFilename_service_type_support_handle = {
  0,
  &pcl_msgs__srv__detail__update_filename__rosidl_typesupport_introspection_c__UpdateFilename_service_members,
  get_service_typesupport_handle_function,
  &pcl_msgs__srv__UpdateFilename_Request__rosidl_typesupport_introspection_c__UpdateFilename_Request_message_type_support_handle,
  &pcl_msgs__srv__UpdateFilename_Response__rosidl_typesupport_introspection_c__UpdateFilename_Response_message_type_support_handle,
  &pcl_msgs__srv__UpdateFilename_Event__rosidl_typesupport_introspection_c__UpdateFilename_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pcl_msgs,
    srv,
    UpdateFilename
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    pcl_msgs,
    srv,
    UpdateFilename
  ),
  &pcl_msgs__srv__UpdateFilename__get_type_hash,
  &pcl_msgs__srv__UpdateFilename__get_type_description,
  &pcl_msgs__srv__UpdateFilename__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, srv, UpdateFilename_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, srv, UpdateFilename_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, srv, UpdateFilename_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pcl_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, srv, UpdateFilename)(void) {
  if (!pcl_msgs__srv__detail__update_filename__rosidl_typesupport_introspection_c__UpdateFilename_service_type_support_handle.typesupport_identifier) {
    pcl_msgs__srv__detail__update_filename__rosidl_typesupport_introspection_c__UpdateFilename_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pcl_msgs__srv__detail__update_filename__rosidl_typesupport_introspection_c__UpdateFilename_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, srv, UpdateFilename_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, srv, UpdateFilename_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, srv, UpdateFilename_Event)()->data;
  }

  return &pcl_msgs__srv__detail__update_filename__rosidl_typesupport_introspection_c__UpdateFilename_service_type_support_handle;
}
