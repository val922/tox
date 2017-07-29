/* various globla variables */

char canonb(CANBSIZ); /* buffer for erase and kill */
int coremap(CMAPSIZ); /* space for core allocation */
int swapmap(SMAPSIZ); /* space for swap allocation */

int *rootdir;         /* pointer to inode of root directory */
int cputype;          /* type of CPU - 40, 45 OR 70 */
int execnt;           /* number of processes in exec */
int lbolt;	      /* time of day in 60th not in time */
int time(2); 	      /* time in sex from 1970 */
int tout(2);	      /* time of day of next sleep */

int mpid; 	      /* generic for unique process id's */

char runin; 	      /* scheduling flag */
char runout; 	      /* scheduling flag */
char runrun; 	      /* scheduling flag */

char curpri;          /* more scheduling */

int maxmem; 	      /* actual max memory per process */

int *lks	      /* actual max memory per process */

int rootdev;	      /* dev of root see conf.c*/
int swapdev;	      /* dev of swap see conf.c */

int swplo;	      /* block number of swap space */
int nswap; 	      /* size of swap space */

int updlock; 	      /* lock for sync */
int rablock;	      /* block to be read ahead */

char regloc();	      /* locs. of saved user registers
				(see trap.c)*/

/*	--------------------------	*/

/*
* The callout structure is for a routine
* arranging to be called by the clock interrupt
* (see clock.c), with a specified argument.
* It is used, for example, time tab delays
* on teletypes.
*/

struct callo
{
	int c_time;	/* incremental time */
	int c_arg; 	/* argument to routine */
	int (c_func)(); /* routine */
}	callout(CALL);

/* --------------------------------------------- */

/*
* Mount structure: used to locate
* the super block of a mounted file.
*/

struct mount
{
	int m_dev; 	/* device mounted */
	int *m_bufp;	/* pointer to superblock */
	int *m_inodp;  	/* pointer to mounted on inode */
}	mount(NMOUNT);
/* ---------------------------------------------- */
