
// 定义pid参数的结构体
struct _pid
{
	float setSpeed;
	float actualSpeed;
	float err;
	float errLast;
	float kp,ki,kd;
	float voltage;
	float integral;
}pid;

// init pid param

void pid_init(pid *pPid)
{
	
}