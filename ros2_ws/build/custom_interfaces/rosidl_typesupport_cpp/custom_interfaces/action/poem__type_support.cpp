// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from custom_interfaces:action/Poem.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "custom_interfaces/action/detail/poem__functions.h"
#include "custom_interfaces/action/detail/poem__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Poem_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Poem_Goal_type_support_ids_t;

static const _Poem_Goal_type_support_ids_t _Poem_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Poem_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Poem_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Poem_Goal_type_support_symbol_names_t _Poem_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, Poem_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, Poem_Goal)),
  }
};

typedef struct _Poem_Goal_type_support_data_t
{
  void * data[2];
} _Poem_Goal_type_support_data_t;

static _Poem_Goal_type_support_data_t _Poem_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Poem_Goal_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_Poem_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Poem_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Poem_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Poem_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Poem_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &custom_interfaces__action__Poem_Goal__get_type_hash,
  &custom_interfaces__action__Poem_Goal__get_type_description,
  &custom_interfaces__action__Poem_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::Poem_Goal>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::Poem_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, Poem_Goal)() {
  return get_message_type_support_handle<custom_interfaces::action::Poem_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/poem__functions.h"
// already included above
// #include "custom_interfaces/action/detail/poem__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Poem_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Poem_Result_type_support_ids_t;

static const _Poem_Result_type_support_ids_t _Poem_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Poem_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Poem_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Poem_Result_type_support_symbol_names_t _Poem_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, Poem_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, Poem_Result)),
  }
};

typedef struct _Poem_Result_type_support_data_t
{
  void * data[2];
} _Poem_Result_type_support_data_t;

static _Poem_Result_type_support_data_t _Poem_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Poem_Result_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_Poem_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Poem_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Poem_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Poem_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Poem_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &custom_interfaces__action__Poem_Result__get_type_hash,
  &custom_interfaces__action__Poem_Result__get_type_description,
  &custom_interfaces__action__Poem_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::Poem_Result>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::Poem_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, Poem_Result)() {
  return get_message_type_support_handle<custom_interfaces::action::Poem_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/poem__functions.h"
// already included above
// #include "custom_interfaces/action/detail/poem__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Poem_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Poem_Feedback_type_support_ids_t;

static const _Poem_Feedback_type_support_ids_t _Poem_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Poem_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Poem_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Poem_Feedback_type_support_symbol_names_t _Poem_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, Poem_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, Poem_Feedback)),
  }
};

typedef struct _Poem_Feedback_type_support_data_t
{
  void * data[2];
} _Poem_Feedback_type_support_data_t;

static _Poem_Feedback_type_support_data_t _Poem_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Poem_Feedback_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_Poem_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Poem_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Poem_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Poem_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Poem_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &custom_interfaces__action__Poem_Feedback__get_type_hash,
  &custom_interfaces__action__Poem_Feedback__get_type_description,
  &custom_interfaces__action__Poem_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::Poem_Feedback>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::Poem_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, Poem_Feedback)() {
  return get_message_type_support_handle<custom_interfaces::action::Poem_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/poem__functions.h"
// already included above
// #include "custom_interfaces/action/detail/poem__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Poem_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Poem_SendGoal_Request_type_support_ids_t;

static const _Poem_SendGoal_Request_type_support_ids_t _Poem_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Poem_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Poem_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Poem_SendGoal_Request_type_support_symbol_names_t _Poem_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, Poem_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, Poem_SendGoal_Request)),
  }
};

typedef struct _Poem_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Poem_SendGoal_Request_type_support_data_t;

static _Poem_SendGoal_Request_type_support_data_t _Poem_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Poem_SendGoal_Request_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_Poem_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Poem_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Poem_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Poem_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Poem_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &custom_interfaces__action__Poem_SendGoal_Request__get_type_hash,
  &custom_interfaces__action__Poem_SendGoal_Request__get_type_description,
  &custom_interfaces__action__Poem_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::Poem_SendGoal_Request>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::Poem_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, Poem_SendGoal_Request)() {
  return get_message_type_support_handle<custom_interfaces::action::Poem_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/poem__functions.h"
// already included above
// #include "custom_interfaces/action/detail/poem__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Poem_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Poem_SendGoal_Response_type_support_ids_t;

static const _Poem_SendGoal_Response_type_support_ids_t _Poem_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Poem_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Poem_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Poem_SendGoal_Response_type_support_symbol_names_t _Poem_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, Poem_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, Poem_SendGoal_Response)),
  }
};

typedef struct _Poem_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Poem_SendGoal_Response_type_support_data_t;

static _Poem_SendGoal_Response_type_support_data_t _Poem_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Poem_SendGoal_Response_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_Poem_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Poem_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Poem_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Poem_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Poem_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &custom_interfaces__action__Poem_SendGoal_Response__get_type_hash,
  &custom_interfaces__action__Poem_SendGoal_Response__get_type_description,
  &custom_interfaces__action__Poem_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::Poem_SendGoal_Response>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::Poem_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, Poem_SendGoal_Response)() {
  return get_message_type_support_handle<custom_interfaces::action::Poem_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/poem__functions.h"
// already included above
// #include "custom_interfaces/action/detail/poem__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Poem_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Poem_SendGoal_Event_type_support_ids_t;

static const _Poem_SendGoal_Event_type_support_ids_t _Poem_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Poem_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Poem_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Poem_SendGoal_Event_type_support_symbol_names_t _Poem_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, Poem_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, Poem_SendGoal_Event)),
  }
};

typedef struct _Poem_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _Poem_SendGoal_Event_type_support_data_t;

static _Poem_SendGoal_Event_type_support_data_t _Poem_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Poem_SendGoal_Event_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_Poem_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Poem_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Poem_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Poem_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Poem_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &custom_interfaces__action__Poem_SendGoal_Event__get_type_hash,
  &custom_interfaces__action__Poem_SendGoal_Event__get_type_description,
  &custom_interfaces__action__Poem_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::Poem_SendGoal_Event>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::Poem_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, Poem_SendGoal_Event)() {
  return get_message_type_support_handle<custom_interfaces::action::Poem_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "custom_interfaces/action/detail/poem__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Poem_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Poem_SendGoal_type_support_ids_t;

static const _Poem_SendGoal_type_support_ids_t _Poem_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Poem_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Poem_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Poem_SendGoal_type_support_symbol_names_t _Poem_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, Poem_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, Poem_SendGoal)),
  }
};

typedef struct _Poem_SendGoal_type_support_data_t
{
  void * data[2];
} _Poem_SendGoal_type_support_data_t;

static _Poem_SendGoal_type_support_data_t _Poem_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Poem_SendGoal_service_typesupport_map = {
  2,
  "custom_interfaces",
  &_Poem_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Poem_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Poem_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Poem_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Poem_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<custom_interfaces::action::Poem_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<custom_interfaces::action::Poem_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<custom_interfaces::action::Poem_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<custom_interfaces::action::Poem_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<custom_interfaces::action::Poem_SendGoal>,
  &custom_interfaces__action__Poem_SendGoal__get_type_hash,
  &custom_interfaces__action__Poem_SendGoal__get_type_description,
  &custom_interfaces__action__Poem_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<custom_interfaces::action::Poem_SendGoal>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::Poem_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/poem__functions.h"
// already included above
// #include "custom_interfaces/action/detail/poem__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Poem_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Poem_GetResult_Request_type_support_ids_t;

static const _Poem_GetResult_Request_type_support_ids_t _Poem_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Poem_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Poem_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Poem_GetResult_Request_type_support_symbol_names_t _Poem_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, Poem_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, Poem_GetResult_Request)),
  }
};

typedef struct _Poem_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Poem_GetResult_Request_type_support_data_t;

static _Poem_GetResult_Request_type_support_data_t _Poem_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Poem_GetResult_Request_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_Poem_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Poem_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Poem_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Poem_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Poem_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &custom_interfaces__action__Poem_GetResult_Request__get_type_hash,
  &custom_interfaces__action__Poem_GetResult_Request__get_type_description,
  &custom_interfaces__action__Poem_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::Poem_GetResult_Request>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::Poem_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, Poem_GetResult_Request)() {
  return get_message_type_support_handle<custom_interfaces::action::Poem_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/poem__functions.h"
// already included above
// #include "custom_interfaces/action/detail/poem__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Poem_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Poem_GetResult_Response_type_support_ids_t;

static const _Poem_GetResult_Response_type_support_ids_t _Poem_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Poem_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Poem_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Poem_GetResult_Response_type_support_symbol_names_t _Poem_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, Poem_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, Poem_GetResult_Response)),
  }
};

typedef struct _Poem_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Poem_GetResult_Response_type_support_data_t;

static _Poem_GetResult_Response_type_support_data_t _Poem_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Poem_GetResult_Response_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_Poem_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Poem_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Poem_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Poem_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Poem_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &custom_interfaces__action__Poem_GetResult_Response__get_type_hash,
  &custom_interfaces__action__Poem_GetResult_Response__get_type_description,
  &custom_interfaces__action__Poem_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::Poem_GetResult_Response>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::Poem_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, Poem_GetResult_Response)() {
  return get_message_type_support_handle<custom_interfaces::action::Poem_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/poem__functions.h"
// already included above
// #include "custom_interfaces/action/detail/poem__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Poem_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Poem_GetResult_Event_type_support_ids_t;

static const _Poem_GetResult_Event_type_support_ids_t _Poem_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Poem_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Poem_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Poem_GetResult_Event_type_support_symbol_names_t _Poem_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, Poem_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, Poem_GetResult_Event)),
  }
};

typedef struct _Poem_GetResult_Event_type_support_data_t
{
  void * data[2];
} _Poem_GetResult_Event_type_support_data_t;

static _Poem_GetResult_Event_type_support_data_t _Poem_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Poem_GetResult_Event_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_Poem_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Poem_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Poem_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Poem_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Poem_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &custom_interfaces__action__Poem_GetResult_Event__get_type_hash,
  &custom_interfaces__action__Poem_GetResult_Event__get_type_description,
  &custom_interfaces__action__Poem_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::Poem_GetResult_Event>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::Poem_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, Poem_GetResult_Event)() {
  return get_message_type_support_handle<custom_interfaces::action::Poem_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "custom_interfaces/action/detail/poem__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Poem_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Poem_GetResult_type_support_ids_t;

static const _Poem_GetResult_type_support_ids_t _Poem_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Poem_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Poem_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Poem_GetResult_type_support_symbol_names_t _Poem_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, Poem_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, Poem_GetResult)),
  }
};

typedef struct _Poem_GetResult_type_support_data_t
{
  void * data[2];
} _Poem_GetResult_type_support_data_t;

static _Poem_GetResult_type_support_data_t _Poem_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Poem_GetResult_service_typesupport_map = {
  2,
  "custom_interfaces",
  &_Poem_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Poem_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Poem_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Poem_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Poem_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<custom_interfaces::action::Poem_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<custom_interfaces::action::Poem_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<custom_interfaces::action::Poem_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<custom_interfaces::action::Poem_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<custom_interfaces::action::Poem_GetResult>,
  &custom_interfaces__action__Poem_GetResult__get_type_hash,
  &custom_interfaces__action__Poem_GetResult__get_type_description,
  &custom_interfaces__action__Poem_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<custom_interfaces::action::Poem_GetResult>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::Poem_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "custom_interfaces/action/detail/poem__functions.h"
// already included above
// #include "custom_interfaces/action/detail/poem__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Poem_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Poem_FeedbackMessage_type_support_ids_t;

static const _Poem_FeedbackMessage_type_support_ids_t _Poem_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Poem_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Poem_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Poem_FeedbackMessage_type_support_symbol_names_t _Poem_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, action, Poem_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_interfaces, action, Poem_FeedbackMessage)),
  }
};

typedef struct _Poem_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Poem_FeedbackMessage_type_support_data_t;

static _Poem_FeedbackMessage_type_support_data_t _Poem_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Poem_FeedbackMessage_message_typesupport_map = {
  2,
  "custom_interfaces",
  &_Poem_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Poem_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Poem_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Poem_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Poem_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &custom_interfaces__action__Poem_FeedbackMessage__get_type_hash,
  &custom_interfaces__action__Poem_FeedbackMessage__get_type_description,
  &custom_interfaces__action__Poem_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::action::Poem_FeedbackMessage>()
{
  return &::custom_interfaces::action::rosidl_typesupport_cpp::Poem_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, custom_interfaces, action, Poem_FeedbackMessage)() {
  return get_message_type_support_handle<custom_interfaces::action::Poem_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "custom_interfaces/action/detail/poem__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace custom_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Poem_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &custom_interfaces__action__Poem__get_type_hash,
  &custom_interfaces__action__Poem__get_type_description,
  &custom_interfaces__action__Poem__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace custom_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<custom_interfaces::action::Poem>()
{
  using ::custom_interfaces::action::rosidl_typesupport_cpp::Poem_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Poem_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::custom_interfaces::action::Poem::Impl::SendGoalService>();
  Poem_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::custom_interfaces::action::Poem::Impl::GetResultService>();
  Poem_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::custom_interfaces::action::Poem::Impl::CancelGoalService>();
  Poem_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::custom_interfaces::action::Poem::Impl::FeedbackMessage>();
  Poem_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::custom_interfaces::action::Poem::Impl::GoalStatusMessage>();
  return &Poem_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
