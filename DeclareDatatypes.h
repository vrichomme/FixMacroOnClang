#ifndef DEF_ID_BEGIN

#define DEF_ID_BEGIN(type) PP_DECLARE_ENUM_BEGIN(type)
#define DEF_ID(value) PP_DECLARE_ENUM_VALUE(value)
#define DEF_ID_END(type) PP_DECLARE_ENUM_END(type)

#define DEF_BASIC(type, dataTypeId)
#define TO_FIELD(type, name) type name;
#define DEF_STRUCT(type, dataTypeId, ...) struct type{ PP_FOREACH_GROUP(TO_FIELD,__VA_ARGS__) }; 

#else

#include "./macro/UndefDataTypesDef.h"
#undef TO_FIELD

#endif
