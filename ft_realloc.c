#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	new_ptr = (void *) malloc(size);
	if (new_ptr == NULL)
		return (NULL);
	new_ptr = ft_memcpy(new_ptr, ptr, size);
	free(ptr);
	return (new_ptr);
}
