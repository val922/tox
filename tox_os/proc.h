/*
* One structure allocated per active
* process. It contains all data needed
* about the process while the process may 
* be swapped out.
* Othe per process data (user.h)
* is swapped with the process.
*/

struct proc 
{
char p_stat;
char p_flag;
char p_pri; 	/* priority, negative is high*/
char p_sig; 	/* signal number sent to this process */
char p_uid; 	/* user id, used to direct tty signals */
char p_time; 	/* resident time for scheduling */
char p_cpu;	/* cpu usage for scheduling */
char p_nice; 	/*nice for scheduling */
char p_ttyp; 	/*controlling tty */
char p_pid; 	/* unique process id*/


}
