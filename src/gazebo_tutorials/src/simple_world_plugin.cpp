#include <gazebo/common/Plugin.hh>
#include <ros/ros.h>

namespace gazebo
{
    class WorldPluginTutorial : public WorldPlugin
    {
    public:
        WorldPluginTutorial() : WorldPlugin()
            {
                printf("Hello World!\n");
            }
        
        void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
                if (!ros::isInitialized())
                {
                    ROS_FATAL_STREAM("A ROS node for Gazebo has not been initialized, unable to load plugin."
                    << "Load the Gazebo system plugin 'libgazebo_ros_api_plugin.so' in the gazebo_ros package");
                    return;
                }
            ROS_INFO("Hello world!");
            }
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginTutorial)
}