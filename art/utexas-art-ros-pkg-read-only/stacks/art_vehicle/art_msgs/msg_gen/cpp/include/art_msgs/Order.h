/* Auto-generated by genmsg_cpp for file /home/james/ros/art/utexas-art-ros-pkg-read-only/stacks/art_vehicle/art_msgs/msg/Order.msg */
#ifndef ART_MSGS_MESSAGE_ORDER_H
#define ART_MSGS_MESSAGE_ORDER_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "art_msgs/Behavior.h"
#include "art_msgs/WayPoint.h"
#include "art_msgs/WayPoint.h"

namespace art_msgs
{
template <class ContainerAllocator>
struct Order_ {
  typedef Order_<ContainerAllocator> Type;

  Order_()
  : behavior()
  , waypt()
  , chkpt()
  , min_speed(0.0)
  , max_speed(0.0)
  , replan_num(0)
  , next_uturn(0)
  {
  }

  Order_(const ContainerAllocator& _alloc)
  : behavior(_alloc)
  , waypt()
  , chkpt()
  , min_speed(0.0)
  , max_speed(0.0)
  , replan_num(0)
  , next_uturn(0)
  {
    waypt.assign( ::art_msgs::WayPoint_<ContainerAllocator> (_alloc));
    chkpt.assign( ::art_msgs::WayPoint_<ContainerAllocator> (_alloc));
  }

  typedef  ::art_msgs::Behavior_<ContainerAllocator>  _behavior_type;
   ::art_msgs::Behavior_<ContainerAllocator>  behavior;

  typedef boost::array< ::art_msgs::WayPoint_<ContainerAllocator> , 5>  _waypt_type;
  boost::array< ::art_msgs::WayPoint_<ContainerAllocator> , 5>  waypt;

  typedef boost::array< ::art_msgs::WayPoint_<ContainerAllocator> , 2>  _chkpt_type;
  boost::array< ::art_msgs::WayPoint_<ContainerAllocator> , 2>  chkpt;

  typedef float _min_speed_type;
  float min_speed;

  typedef float _max_speed_type;
  float max_speed;

  typedef int32_t _replan_num_type;
  int32_t replan_num;

  typedef int32_t _next_uturn_type;
  int32_t next_uturn;

  enum { N_WAYPTS = 5 };
  enum { N_CHKPTS = 2 };

  ROS_DEPRECATED uint32_t get_waypt_size() const { return (uint32_t)waypt.size(); }
  ROS_DEPRECATED uint32_t get_chkpt_size() const { return (uint32_t)chkpt.size(); }
private:
  static const char* __s_getDataType_() { return "art_msgs/Order"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "f43d538cba2d46c585cc23d97b9223b2"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# commander order for the navigator\n\
# $Id$\n\
\n\
uint32 N_WAYPTS = 5     		# number of way-points in order\n\
uint32 N_CHKPTS = 2             	# number of checkpoints in order\n\
\n\
Behavior behavior			# requested behavior\n\
art_msgs/WayPoint[5] waypt       	# way-point array\n\
art_msgs/WayPoint[2] chkpt       	# next two goal checkpoints\n\
float32 min_speed			# in meters/sec\n\
float32 max_speed\n\
int32 replan_num\n\
int32 next_uturn         		# Uturn between [1] and [2]\n\
\n\
================================================================================\n\
MSG: art_msgs/Behavior\n\
# ART Navigator behaviors (lower numbers have higher priority)\n\
# $Id$\n\
\n\
# enumerated behavior values\n\
int16 Abort       = 0\n\
int16 Quit        = 1\n\
int16 Pause       = 2\n\
int16 Run         = 3\n\
int16 Suspend     = 4\n\
int16 Initialize  = 5\n\
int16 Go          = 6\n\
int16 NONE        = 7\n\
int16 N_behaviors = 8\n\
\n\
int16 value\n\
\n\
================================================================================\n\
MSG: art_msgs/WayPoint\n\
# Way-point attributes\n\
# $Id$\n\
\n\
float64 latitude			# latitude in degrees\n\
float64 longitude			# longitude in degrees\n\
geometry_msgs/Point32 mapxy		# MapXY position\n\
MapID id				# way-point ID\n\
uint16 index    			# parser index of waypoint\n\
\n\
# way-point flags\n\
bool is_entry                           # lane or zone exit point\n\
bool is_exit				# lane or zone entry point\n\
bool is_goal				# this is a goal checkpoint\n\
bool is_lane_change			# change lanes after here\n\
bool is_spot				# parking spot\n\
bool is_stop				# stop line here\n\
bool is_perimeter			# zone perimeter point\n\
int32 checkpoint_id			# checkpoint ID or zero\n\
float32 lane_width\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
================================================================================\n\
MSG: art_msgs/MapID\n\
# Road map identifier for segments, lanes and way-points.\n\
# $Id$\n\
\n\
uint16 NULL_ID = 65535\n\
\n\
uint16 seg      # segment ID\n\
uint16 lane     # lane ID\n\
uint16 pt       # way-point ID\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, behavior);
    ros::serialization::serialize(stream, waypt);
    ros::serialization::serialize(stream, chkpt);
    ros::serialization::serialize(stream, min_speed);
    ros::serialization::serialize(stream, max_speed);
    ros::serialization::serialize(stream, replan_num);
    ros::serialization::serialize(stream, next_uturn);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, behavior);
    ros::serialization::deserialize(stream, waypt);
    ros::serialization::deserialize(stream, chkpt);
    ros::serialization::deserialize(stream, min_speed);
    ros::serialization::deserialize(stream, max_speed);
    ros::serialization::deserialize(stream, replan_num);
    ros::serialization::deserialize(stream, next_uturn);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(behavior);
    size += ros::serialization::serializationLength(waypt);
    size += ros::serialization::serializationLength(chkpt);
    size += ros::serialization::serializationLength(min_speed);
    size += ros::serialization::serializationLength(max_speed);
    size += ros::serialization::serializationLength(replan_num);
    size += ros::serialization::serializationLength(next_uturn);
    return size;
  }

  typedef boost::shared_ptr< ::art_msgs::Order_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::art_msgs::Order_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Order
typedef  ::art_msgs::Order_<std::allocator<void> > Order;

typedef boost::shared_ptr< ::art_msgs::Order> OrderPtr;
typedef boost::shared_ptr< ::art_msgs::Order const> OrderConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::art_msgs::Order_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::art_msgs::Order_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace art_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::art_msgs::Order_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::art_msgs::Order_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::art_msgs::Order_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f43d538cba2d46c585cc23d97b9223b2";
  }

  static const char* value(const  ::art_msgs::Order_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf43d538cba2d46c5ULL;
  static const uint64_t static_value2 = 0x85cc23d97b9223b2ULL;
};

template<class ContainerAllocator>
struct DataType< ::art_msgs::Order_<ContainerAllocator> > {
  static const char* value() 
  {
    return "art_msgs/Order";
  }

  static const char* value(const  ::art_msgs::Order_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::art_msgs::Order_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# commander order for the navigator\n\
# $Id$\n\
\n\
uint32 N_WAYPTS = 5     		# number of way-points in order\n\
uint32 N_CHKPTS = 2             	# number of checkpoints in order\n\
\n\
Behavior behavior			# requested behavior\n\
art_msgs/WayPoint[5] waypt       	# way-point array\n\
art_msgs/WayPoint[2] chkpt       	# next two goal checkpoints\n\
float32 min_speed			# in meters/sec\n\
float32 max_speed\n\
int32 replan_num\n\
int32 next_uturn         		# Uturn between [1] and [2]\n\
\n\
================================================================================\n\
MSG: art_msgs/Behavior\n\
# ART Navigator behaviors (lower numbers have higher priority)\n\
# $Id$\n\
\n\
# enumerated behavior values\n\
int16 Abort       = 0\n\
int16 Quit        = 1\n\
int16 Pause       = 2\n\
int16 Run         = 3\n\
int16 Suspend     = 4\n\
int16 Initialize  = 5\n\
int16 Go          = 6\n\
int16 NONE        = 7\n\
int16 N_behaviors = 8\n\
\n\
int16 value\n\
\n\
================================================================================\n\
MSG: art_msgs/WayPoint\n\
# Way-point attributes\n\
# $Id$\n\
\n\
float64 latitude			# latitude in degrees\n\
float64 longitude			# longitude in degrees\n\
geometry_msgs/Point32 mapxy		# MapXY position\n\
MapID id				# way-point ID\n\
uint16 index    			# parser index of waypoint\n\
\n\
# way-point flags\n\
bool is_entry                           # lane or zone exit point\n\
bool is_exit				# lane or zone entry point\n\
bool is_goal				# this is a goal checkpoint\n\
bool is_lane_change			# change lanes after here\n\
bool is_spot				# parking spot\n\
bool is_stop				# stop line here\n\
bool is_perimeter			# zone perimeter point\n\
int32 checkpoint_id			# checkpoint ID or zero\n\
float32 lane_width\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
================================================================================\n\
MSG: art_msgs/MapID\n\
# Road map identifier for segments, lanes and way-points.\n\
# $Id$\n\
\n\
uint16 NULL_ID = 65535\n\
\n\
uint16 seg      # segment ID\n\
uint16 lane     # lane ID\n\
uint16 pt       # way-point ID\n\
\n\
";
  }

  static const char* value(const  ::art_msgs::Order_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::art_msgs::Order_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::art_msgs::Order_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.behavior);
    stream.next(m.waypt);
    stream.next(m.chkpt);
    stream.next(m.min_speed);
    stream.next(m.max_speed);
    stream.next(m.replan_num);
    stream.next(m.next_uturn);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Order_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::art_msgs::Order_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::art_msgs::Order_<ContainerAllocator> & v) 
  {
    s << indent << "behavior: ";
s << std::endl;
    Printer< ::art_msgs::Behavior_<ContainerAllocator> >::stream(s, indent + "  ", v.behavior);
    s << indent << "waypt[]" << std::endl;
    for (size_t i = 0; i < v.waypt.size(); ++i)
    {
      s << indent << "  waypt[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::art_msgs::WayPoint_<ContainerAllocator> >::stream(s, indent + "    ", v.waypt[i]);
    }
    s << indent << "chkpt[]" << std::endl;
    for (size_t i = 0; i < v.chkpt.size(); ++i)
    {
      s << indent << "  chkpt[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::art_msgs::WayPoint_<ContainerAllocator> >::stream(s, indent + "    ", v.chkpt[i]);
    }
    s << indent << "min_speed: ";
    Printer<float>::stream(s, indent + "  ", v.min_speed);
    s << indent << "max_speed: ";
    Printer<float>::stream(s, indent + "  ", v.max_speed);
    s << indent << "replan_num: ";
    Printer<int32_t>::stream(s, indent + "  ", v.replan_num);
    s << indent << "next_uturn: ";
    Printer<int32_t>::stream(s, indent + "  ", v.next_uturn);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ART_MSGS_MESSAGE_ORDER_H
