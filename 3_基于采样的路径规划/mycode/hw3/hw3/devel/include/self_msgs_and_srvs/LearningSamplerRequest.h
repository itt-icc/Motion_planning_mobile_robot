// Generated by gencpp from file self_msgs_and_srvs/LearningSamplerRequest.msg
// DO NOT EDIT!


#ifndef SELF_MSGS_AND_SRVS_MESSAGE_LEARNINGSAMPLERREQUEST_H
#define SELF_MSGS_AND_SRVS_MESSAGE_LEARNINGSAMPLERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <self_msgs_and_srvs/input_point.h>

namespace self_msgs_and_srvs
{
template <class ContainerAllocator>
struct LearningSamplerRequest_
{
  typedef LearningSamplerRequest_<ContainerAllocator> Type;

  LearningSamplerRequest_()
    : input_traj()  {
    }
  LearningSamplerRequest_(const ContainerAllocator& _alloc)
    : input_traj(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::self_msgs_and_srvs::input_point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::self_msgs_and_srvs::input_point_<ContainerAllocator> >::other >  _input_traj_type;
  _input_traj_type input_traj;





  typedef boost::shared_ptr< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LearningSamplerRequest_

typedef ::self_msgs_and_srvs::LearningSamplerRequest_<std::allocator<void> > LearningSamplerRequest;

typedef boost::shared_ptr< ::self_msgs_and_srvs::LearningSamplerRequest > LearningSamplerRequestPtr;
typedef boost::shared_ptr< ::self_msgs_and_srvs::LearningSamplerRequest const> LearningSamplerRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator1> & lhs, const ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input_traj == rhs.input_traj;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator1> & lhs, const ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace self_msgs_and_srvs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a49c03162e276d7c7c5587d167db2b8e";
  }

  static const char* value(const ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa49c03162e276d7cULL;
  static const uint64_t static_value2 = 0x7c5587d167db2b8eULL;
};

template<class ContainerAllocator>
struct DataType< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "self_msgs_and_srvs/LearningSamplerRequest";
  }

  static const char* value(const ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "self_msgs_and_srvs/input_point[] input_traj\n"
"\n"
"================================================================================\n"
"MSG: self_msgs_and_srvs/input_point\n"
"geometry_msgs/Point cur_pos\n"
"geometry_msgs/Point pred_pos\n"
"geometry_msgs/Point succ_pos\n"
"\n"
"geometry_msgs/Point target_pos\n"
"geometry_msgs/Point target_vel\n"
"geometry_msgs/Point target_acc\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input_traj);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LearningSamplerRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::self_msgs_and_srvs::LearningSamplerRequest_<ContainerAllocator>& v)
  {
    s << indent << "input_traj[]" << std::endl;
    for (size_t i = 0; i < v.input_traj.size(); ++i)
    {
      s << indent << "  input_traj[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::self_msgs_and_srvs::input_point_<ContainerAllocator> >::stream(s, indent + "    ", v.input_traj[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SELF_MSGS_AND_SRVS_MESSAGE_LEARNINGSAMPLERREQUEST_H
