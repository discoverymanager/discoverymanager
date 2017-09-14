/*
  discoverymanager Project 
  Easy source code and snippet documentation tool
  Copyright (C) 2017 Mustafa Ozcelikors, github.com/mozcelikors, 
  mozcelikors@gmail.com

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h>
#include "error.hpp"
#include <cerrno>
#include <cstring>

/* Proper System Call Error Handling */
/* Save the errno to a variable and then pass it to this function */
/* Normally each system call returns 0 in success, when return val is non zero */
/* one can invoke this function. */
/* Prints to specified stream */
/* perror would just show error message, we need handlers */
/* TODO: Add handlers for specified errors below */
/* TODO: Also make use of assert statements for returned system call */
void processSystemCallError(int error_code, FILE* stream)
{
  /* TODO: Implement error handlers below */
  switch (error_code)
    {
    case EPERM: /* Permission denied */
      break;

    case ENOENT: /* No such file or directory */
      break;

    case ESRCH: /* No such process */
      break;

    case EINTR: /* Interrupted system call */
      break;

    case EIO: /* I/O Error */
      break;

    case ENXIO: /* No such device or address */
      break;

    case E2BIG: /* Argument list too long */
      break;

    case ENOEXEC: /* Exec format error */
      break;

    case EBADF: /* Bad file number */
      break;
	  
	case ECHILD: /* No child processes */
      break;
      
	case EAGAIN: /* Try again */
      break;
	  
	case ENOMEM: /* Out of memory */
      break;
	  
	case EACCES: /* Permission denied */
      break;
	  
	case EFAULT: /* Bad address */
      break;
	  
	case ENOTBLK: /* Block device required */
      break;
	  
	case EBUSY: /* Device or resource busy */
      break;
	  
	case EEXIST: /* File exists */
      break;
	  
	case EXDEV: /* Cross-device link */
      break;
	  
	case ENODEV: /* No such device */
      break;
	  
	case ENOTDIR: /* Not a directory */
      break;
	  
	case EISDIR: /* Is a directory */
      break;
	  
	case EINVAL: /* Invalid argument */
      break;
	  
	case ENFILE: /* File table overflow */
      break;
	  
	case EMFILE: /* Too many open files */
      break;
	  
	case ENOTTY: /* Not a typewriter */
      break;
	  
	case ETXTBSY: /* Text file busy */
      break;
	  
	case EFBIG: /* File too large */
      break;
	  
	case ENOSPC: /* No space left on device */
      break;
	  
	case ESPIPE: /* Illegal seek */
      break;
	  
	case EMLINK: /* Too many links */
      break;
	  
	case EPIPE: /* Broken pipe */
      break;
	  
	case ENOTEMPTY: /* Directory not empty */
      break;
	  
    case EROFS: /* Read-only file system*/
      break;
    
    case ENAMETOOLONG: /* Name is too long */
      break;

    default: /* Some other error, otherwise probably a bug. */
	  fprintf(stream, "Unknown Error: ");
      //abort();
      break;
    }
	
	/* Print error message */
	/* Be aware that strerror is NOT thread-safe*/
	fprintf (stream, "Error Occurred: %s\n", std::strerror(error_code)); 
}
