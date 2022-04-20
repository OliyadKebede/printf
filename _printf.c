#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * format, ...)
{   
    const char *traverse;
    int length = 0;
	va_list args;
	va_start(args, format);
	
	if ( format == NULL )
		return (-1);

    for(traverse = format; *traverse != '\0'; traverse++) 
	{ 
        while( *traverse != '%' )
		{   
		    _putchar(*traverse);
            traverse++; 
            length++;     	
		}
    
        traverse++;
		length++; 

       
        switch(*traverse) 
        { 
            case 'c' : printf_char;        
                        break; 
                        
            case 'i' : printf_int;        
                        break; 
						          
            case 'u' : printf_unsigned;        
                        break; 

            case 'd' : printf_dec;        
                        break; 

            case 'o' : printf_oct;
                        break; 

            case 's':  printf_string;                              
                        break; 

            case 'p': printf_pointer;
                        break;
                        
			case '%': printf_37;
			            break;
                        
			case 'x': printf_hex;                         
                        break;
             
			case 'X': printf_HEX;    
                        break;            
                        
          	case 'b': printf_bin;    
                        break; 
                        
            case 'S': printf_exclusive_string;
                        break; 
                        
            case 'r': printf_srev;
                        break; 
                        
            case 'R': printf_rot13;
                        break; 
                        
                        
        }   
    
	}
      	
	va_end(args);
	return (length);
}
