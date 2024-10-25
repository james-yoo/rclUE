// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ue_msgs:srv/SetInt32.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ue_msgs/srv/set_int32.h"


#ifndef UE_MSGS__SRV__DETAIL__SET_INT32__STRUCT_H_
#define UE_MSGS__SRV__DETAIL__SET_INT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetInt32 in the package ue_msgs.
typedef struct ue_msgs__srv__SetInt32_Request
{
  int32_t data;
} ue_msgs__srv__SetInt32_Request;

// Struct for a sequence of ue_msgs__srv__SetInt32_Request.
typedef struct ue_msgs__srv__SetInt32_Request__Sequence
{
  ue_msgs__srv__SetInt32_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__SetInt32_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'remarks'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetInt32 in the package ue_msgs.
typedef struct ue_msgs__srv__SetInt32_Response
{
  bool success;
  rosidl_runtime_c__String remarks;
} ue_msgs__srv__SetInt32_Response;

// Struct for a sequence of ue_msgs__srv__SetInt32_Response.
typedef struct ue_msgs__srv__SetInt32_Response__Sequence
{
  ue_msgs__srv__SetInt32_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__SetInt32_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ue_msgs__srv__SetInt32_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ue_msgs__srv__SetInt32_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetInt32 in the package ue_msgs.
typedef struct ue_msgs__srv__SetInt32_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ue_msgs__srv__SetInt32_Request__Sequence request;
  ue_msgs__srv__SetInt32_Response__Sequence response;
} ue_msgs__srv__SetInt32_Event;

// Struct for a sequence of ue_msgs__srv__SetInt32_Event.
typedef struct ue_msgs__srv__SetInt32_Event__Sequence
{
  ue_msgs__srv__SetInt32_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ue_msgs__srv__SetInt32_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UE_MSGS__SRV__DETAIL__SET_INT32__STRUCT_H_
