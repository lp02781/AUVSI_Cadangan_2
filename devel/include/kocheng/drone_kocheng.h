// Generated by gencpp from file kocheng/drone_kocheng.msg
// DO NOT EDIT!


#ifndef KOCHENG_MESSAGE_DRONE_KOCHENG_H
#define KOCHENG_MESSAGE_DRONE_KOCHENG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kocheng
{
template <class ContainerAllocator>
struct drone_kocheng_
{
  typedef drone_kocheng_<ContainerAllocator> Type;

  drone_kocheng_()
    : drone_status()  {
    }
  drone_kocheng_(const ContainerAllocator& _alloc)
    : drone_status(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _drone_status_type;
  _drone_status_type drone_status;





  typedef boost::shared_ptr< ::kocheng::drone_kocheng_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kocheng::drone_kocheng_<ContainerAllocator> const> ConstPtr;

}; // struct drone_kocheng_

typedef ::kocheng::drone_kocheng_<std::allocator<void> > drone_kocheng;

typedef boost::shared_ptr< ::kocheng::drone_kocheng > drone_kochengPtr;
typedef boost::shared_ptr< ::kocheng::drone_kocheng const> drone_kochengConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kocheng::drone_kocheng_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kocheng::drone_kocheng_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kocheng

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'mavros_msgs': ['/opt/ros/kinetic/share/mavros_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'kocheng': ['/home/mfikih15/Documents/AUVSI/src/kocheng/msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kocheng::drone_kocheng_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kocheng::drone_kocheng_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kocheng::drone_kocheng_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kocheng::drone_kocheng_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kocheng::drone_kocheng_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kocheng::drone_kocheng_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kocheng::drone_kocheng_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2c7c5edf7dfbe4935f6f975fe743924d";
  }

  static const char* value(const ::kocheng::drone_kocheng_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2c7c5edf7dfbe493ULL;
  static const uint64_t static_value2 = 0x5f6f975fe743924dULL;
};

template<class ContainerAllocator>
struct DataType< ::kocheng::drone_kocheng_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kocheng/drone_kocheng";
  }

  static const char* value(const ::kocheng::drone_kocheng_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kocheng::drone_kocheng_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string drone_status\n\
";
  }

  static const char* value(const ::kocheng::drone_kocheng_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kocheng::drone_kocheng_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.drone_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct drone_kocheng_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kocheng::drone_kocheng_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kocheng::drone_kocheng_<ContainerAllocator>& v)
  {
    s << indent << "drone_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.drone_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KOCHENG_MESSAGE_DRONE_KOCHENG_H