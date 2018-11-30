#include "../../include/kocheng/hehe.hpp"
#include "ros/ros.h"
#include "mavros_msgs/OverrideRCIn.h"
#include "mavros_msgs/RCIn.h"
#include "kocheng/rc_number.h"
#include "std_msgs/Bool.h"
#include <string>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>

int rc_in_data_channel[8];
int number_flight = 0;
int record_number = 0;

void rcinReceiver(const mavros_msgs::RCIn& rc_in_data);


kocheng::rc_number rc_action; 

using namespace std;

int main(int argc, char **argv){

	ros::init(argc, argv, "remote_monitor");
	ros::NodeHandle ovrd_mon;
	ros::Publisher pub_rc_flag 				= ovrd_mon.advertise<kocheng::rc_number>("/auvsi/rc/number", 8);
	ros::Subscriber rc_in_sub 	= ovrd_mon.subscribe("/mavros/rc/in", 8, rcinReceiver);
	
	ROS_WARN("NC : remote_monitor.cpp active");
	
	while(ros::ok()){
		ros::spinOnce();
		//ROS_ERROR("%d", rc_in_data_channel[SIMPLE_PIN]);
		if(rc_in_data_channel[SIMPLE_PIN] < PWM_LOW ){
			//ROS_INFO("1");
			number_flight = first_simple;
		}
		else if(rc_in_data_channel[SIMPLE_PIN] > PWM_UP){
			//ROS_INFO("2");
			number_flight = second_simple;
		}
		else{
			//ROS_INFO("0");
			number_flight = zero_flag;
		}
		
		sleep(0.5);
		rc_action.rc_number = number_flight;
		pub_rc_flag.publish(rc_action);
		//ROS_ERROR ("%d", number_flight);
	}
}

void rcinReceiver(const mavros_msgs::RCIn& rc_in_data){
	int x;
	for (x=0; x<8;x++){
		rc_in_data_channel[x] = rc_in_data.channels[x];
	}
}
