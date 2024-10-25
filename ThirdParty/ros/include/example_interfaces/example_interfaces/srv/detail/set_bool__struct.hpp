// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from example_interfaces:srv/SetBool.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "example_interfaces/srv/set_bool.hpp"


#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__STRUCT_HPP_
#define EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__example_interfaces__srv__SetBool_Request __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__srv__SetBool_Request __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBool_Request_
{
  using Type = SetBool_Request_<ContainerAllocator>;

  explicit SetBool_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  explicit SetBool_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  // field types and members
  using _data_type =
    bool;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::srv::SetBool_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::srv::SetBool_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SetBool_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SetBool_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__srv__SetBool_Request
    std::shared_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__srv__SetBool_Request
    std::shared_ptr<example_interfaces::srv::SetBool_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBool_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBool_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBool_Request_

// alias to use template instance with default allocator
using SetBool_Request =
  example_interfaces::srv::SetBool_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace example_interfaces


#ifndef _WIN32
# define DEPRECATED__example_interfaces__srv__SetBool_Response __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__srv__SetBool_Response __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBool_Response_
{
  using Type = SetBool_Response_<ContainerAllocator>;

  explicit SetBool_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetBool_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::srv::SetBool_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::srv::SetBool_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SetBool_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SetBool_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__srv__SetBool_Response
    std::shared_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__srv__SetBool_Response
    std::shared_ptr<example_interfaces::srv::SetBool_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBool_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBool_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBool_Response_

// alias to use template instance with default allocator
using SetBool_Response =
  example_interfaces::srv::SetBool_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace example_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__example_interfaces__srv__SetBool_Event __attribute__((deprecated))
#else
# define DEPRECATED__example_interfaces__srv__SetBool_Event __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetBool_Event_
{
  using Type = SetBool_Event_<ContainerAllocator>;

  explicit SetBool_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetBool_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<example_interfaces::srv::SetBool_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<example_interfaces::srv::SetBool_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<example_interfaces::srv::SetBool_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<example_interfaces::srv::SetBool_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<example_interfaces::srv::SetBool_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<example_interfaces::srv::SetBool_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<example_interfaces::srv::SetBool_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<example_interfaces::srv::SetBool_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    example_interfaces::srv::SetBool_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::srv::SetBool_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::srv::SetBool_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::srv::SetBool_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SetBool_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SetBool_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      example_interfaces::srv::SetBool_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::srv::SetBool_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::srv::SetBool_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::srv::SetBool_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__example_interfaces__srv__SetBool_Event
    std::shared_ptr<example_interfaces::srv::SetBool_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__example_interfaces__srv__SetBool_Event
    std::shared_ptr<example_interfaces::srv::SetBool_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetBool_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetBool_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetBool_Event_

// alias to use template instance with default allocator
using SetBool_Event =
  example_interfaces::srv::SetBool_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace example_interfaces

namespace example_interfaces
{

namespace srv
{

struct SetBool
{
  using Request = example_interfaces::srv::SetBool_Request;
  using Response = example_interfaces::srv::SetBool_Response;
  using Event = example_interfaces::srv::SetBool_Event;
};

}  // namespace srv

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__SET_BOOL__STRUCT_HPP_
