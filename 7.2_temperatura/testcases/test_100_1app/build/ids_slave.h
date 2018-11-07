#define MAX_PROCESSORS		35	/* Number of slave processors available in the platform */
#define MAXLOCALTASKS		2	/* Number of task which can be allocated simultaneously in one processor */
#define MAX_GLOBAL_TASKS	MAXLOCALTASKS * MAX_PROCESSORS	/* Number of task which can be allocated simultaneously in the platform */
#define KERNELPAGECOUNT	2
#define PAGESIZE			65536
#define APP_NUMBER		5
#define TASK_NUMBER		35
#define MAX_APP_SIZE		12
int task_location[APP_NUMBER][MAX_APP_SIZE] = { {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, }, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, }, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, }, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, }, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, }, };
unsigned char task_status[APP_NUMBER][MAX_APP_SIZE] = { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, }, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, }, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, }, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, }, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, }, };
int request_task[APP_NUMBER][MAX_APP_SIZE] = {{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, }, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, }, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, }, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, }, {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, }, };
