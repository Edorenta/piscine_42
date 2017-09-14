#ifndef		FT_BOOLEAN_H
# define	FT_BOOLEAN_H

# include <unistd.h>

typedef	int	t_bool;

# define	TRUE		1
# define	FALSE		0
# define	EVEN(x)		((x % 2) ? FALSE : TRUE)
# define	SUCCESS		0
# define	EVEN_MSG	"I have a pair number of arguments.\n"
# define	ODD_MSG		"I have an impair number of arguments.\n"

#endif
