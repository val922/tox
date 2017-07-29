/* fundamental the constants don't change */

#define USIZE 16    /* size of user block */
#define NULL 0
#define NODEV (-1)
#define ROOTINO 1   /* i number of all roots */
#define DIRSIZE 14  /* max characters per directory */

/* signals don't change */

#define NSIG 20
#define SIGHUP 1   /* hangup */
#define SIGINT 2   /* interrupt (rubout) */
#define SIGQIT 3   /* quit (FS) */
#define SIGINS 4   /* illegal instrustions */
#define SIGTRC 5   /* trace or breakpoint */
#define SIGIOT 6   /* IOT */
#define SIGEMT 7   /* emt*/
#define SIGFPT 8   /* floating point exception */
#define SIGKIL 9   /* kill */
#define SIGBUS 10  /* bus error */
#define SIGSEG 11  /* segmentation error */
#define SIGSYS 12  /* sys*/
#define SIGPIPE 13 /* end of pipe */

/* tunable variables */

#define NBUF 15    /* size of buffer cache*/
#define NIMODE 100 /* number of in code inodes */
#define NFILE 100  /* number of in core file structures */
#define NMOUNT 5   /* number of in core mountable file systems */
#define NEXEC 3    /* number of simultaneous exec's */
#define MAXMEM (64*32) /*max core per process;
				first number is kw */
#define SSIZE 20   /* initial stack size (*64 bytes) */
#define SINCR 20   /* increment of stack (*64 bytes) */
#define NOFILE 15  /* max open files per process */
#define CANBSIZE 256 /* max size of typewriter line */
#define CMAPSIZE 100 /* size of core allocation area */
#define SSMAPSIZ 100 /*size of swap allocation */
#define NCALL 20 /*max simultaneous time callouts */
#define NPROC 50 /*max number of processes */
#define NTEXT 40 /*max number of pure texts */
#define NCLIST 100 /* max total clist size */
#define HZ 60 /* Ticks/second of the clock */

/* priorities: do not alter much */

#define PSWP -100
#define PINOD -90
#define PRIBIO -50
#define PPIPE 1
#define PWAIT 40
#define PSLEP 90
#define PUSER 100

/* certain processor registers */

#define PS 0177776
#define KL 0177560
#define SW 0177570

/* ------------------------------- */

/* Structure to access integers: */

	/* single integer */

struct {	int	integ;	};

	/*in bytes */

struct {	char lobyte;	char hibyte;	};

	/* as a sequence */

struct {	int	r[];	};

/* ------------------------------- */
