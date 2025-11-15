typedef struct
{
	float x;//点云的横向距离，单位m，左侧为负右侧为正
	float y;//点云的纵向距离，单位m
	float z;//点云的高度，单位m，向上为正
	float RANGE;//点云的径向距离
	float azi;//点云的水平角度，单位弧度制
	float ele;//点云的俯仰角度，单位弧度制
	float vec;//点云的多普勒速度，单位m/s
	float power;//点云的强度
	unsigned int POWER_VALUE;//初值为0
	float TIMESTAMP_MS;//初值为0
	int Ghost_Type;//初值为0
	int Ghost_Rate;//初值为0
	int CellInex;//初值为0
	// float x_compensated;
	// float y_compensated;
	// float z_compensated;
	// float doppler_compensated;
}Dot;
