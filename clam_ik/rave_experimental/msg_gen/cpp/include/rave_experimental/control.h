/* Auto-generated by genmsg_cpp for file /home/shenas/rave_experimental/msg/control.msg */
#ifndef RAVE_EXPERIMENTAL_MESSAGE_CONTROL_H
#define RAVE_EXPERIMENTAL_MESSAGE_CONTROL_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"


namespace rave_experimental
{
template <class ContainerAllocator>
struct control_ : public ros::Message
{
  typedef control_<ContainerAllocator> Type;

  control_()
  : joint0(0.0)
  , joint1(0.0)
  , joint2(0.0)
  , joint3(0.0)
  , joint4(0.0)
  , joint5(0.0)
  , joint6(0.0)
  {
  }

  control_(const ContainerAllocator& _alloc)
  : joint0(0.0)
  , joint1(0.0)
  , joint2(0.0)
  , joint3(0.0)
  , joint4(0.0)
  , joint5(0.0)
  , joint6(0.0)
  {
  }

  typedef float _joint0_type;
  float joint0;

  typedef float _joint1_type;
  float joint1;

  typedef float _joint2_type;
  float joint2;

  typedef float _joint3_type;
  float joint3;

  typedef float _joint4_type;
  float joint4;

  typedef float _joint5_type;
  float joint5;

  typedef float _joint6_type;
  float joint6;


private:
  static const char* __s_getDataType_() { return "rave_experimental/control"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "0149b3b7705b959288f41d7b73f9387a"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "float32 joint0\n\
float32 joint1\n\
float32 joint2\n\
float32 joint3\n\
float32 joint4\n\
float32 joint5\n\
float32 joint6\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, joint0);
    ros::serialization::serialize(stream, joint1);
    ros::serialization::serialize(stream, joint2);
    ros::serialization::serialize(stream, joint3);
    ros::serialization::serialize(stream, joint4);
    ros::serialization::serialize(stream, joint5);
    ros::serialization::serialize(stream, joint6);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, joint0);
    ros::serialization::deserialize(stream, joint1);
    ros::serialization::deserialize(stream, joint2);
    ros::serialization::deserialize(stream, joint3);
    ros::serialization::deserialize(stream, joint4);
    ros::serialization::deserialize(stream, joint5);
    ros::serialization::deserialize(stream, joint6);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(joint0);
    size += ros::serialization::serializationLength(joint1);
    size += ros::serialization::serializationLength(joint2);
    size += ros::serialization::serializationLength(joint3);
    size += ros::serialization::serializationLength(joint4);
    size += ros::serialization::serializationLength(joint5);
    size += ros::serialization::serializationLength(joint6);
    return size;
  }

  typedef boost::shared_ptr< ::rave_experimental::control_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rave_experimental::control_<ContainerAllocator>  const> ConstPtr;
}; // struct control
typedef  ::rave_experimental::control_<std::allocator<void> > control;

typedef boost::shared_ptr< ::rave_experimental::control> controlPtr;
typedef boost::shared_ptr< ::rave_experimental::control const> controlConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::rave_experimental::control_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::rave_experimental::control_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace rave_experimental

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::rave_experimental::control_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0149b3b7705b959288f41d7b73f9387a";
  }

  static const char* value(const  ::rave_experimental::control_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0149b3b7705b9592ULL;
  static const uint64_t static_value2 = 0x88f41d7b73f9387aULL;
};

template<class ContainerAllocator>
struct DataType< ::rave_experimental::control_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rave_experimental/control";
  }

  static const char* value(const  ::rave_experimental::control_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rave_experimental::control_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 joint0\n\
float32 joint1\n\
float32 joint2\n\
float32 joint3\n\
float32 joint4\n\
float32 joint5\n\
float32 joint6\n\
\n\
";
  }

  static const char* value(const  ::rave_experimental::control_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rave_experimental::control_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rave_experimental::control_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.joint0);
    stream.next(m.joint1);
    stream.next(m.joint2);
    stream.next(m.joint3);
    stream.next(m.joint4);
    stream.next(m.joint5);
    stream.next(m.joint6);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct control_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rave_experimental::control_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::rave_experimental::control_<ContainerAllocator> & v) 
  {
    s << indent << "joint0: ";
    Printer<float>::stream(s, indent + "  ", v.joint0);
    s << indent << "joint1: ";
    Printer<float>::stream(s, indent + "  ", v.joint1);
    s << indent << "joint2: ";
    Printer<float>::stream(s, indent + "  ", v.joint2);
    s << indent << "joint3: ";
    Printer<float>::stream(s, indent + "  ", v.joint3);
    s << indent << "joint4: ";
    Printer<float>::stream(s, indent + "  ", v.joint4);
    s << indent << "joint5: ";
    Printer<float>::stream(s, indent + "  ", v.joint5);
    s << indent << "joint6: ";
    Printer<float>::stream(s, indent + "  ", v.joint6);
  }
};


} // namespace message_operations
} // namespace ros

#endif // RAVE_EXPERIMENTAL_MESSAGE_CONTROL_H
