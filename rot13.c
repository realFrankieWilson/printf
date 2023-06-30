/**
 * _rot13 -> prints rot13 strings.
 * @args: argument lists.
 * @array: arrays to handle
 * @f: Calculates the active flags.
 * @w: get the format width.
 * @p: precision specification.
 * @s: size specifier.
 *
 * Return: Printed characters.
 */

int _rot13(va_list args, char array[], int f, int w, int p, int s)
{
	char *ptr, ch, rot_in[], rot_out[];
	int count = 0;
	unsigned int i, j;

	rot_in[] = CAP_LOW_ROT;
	rot_out[] = ROT_REV;

	ptr = va_arg(args, char *);
	UNUSED(array);
	UNUSED(f);
	UNUSED(w);
	UNUSED(p);
	UNUSED(s);

	if (ptr == NULL)
		ptr = "(AHYY)";
	for (i = 0; ptr[i]; i++)
	{
		for (j = 0; rot_in[j]; j++)
		{
			if (rot_in[j] == ptr[i])
			{
				ch = rot_out[j];
				write(1, &ch, 1);
				count++;
				break;
			}
		}
		if (!rot_in[i])
		{
			ch = ptr[i];
			write(1, &ch, 1);
			count++;
		}
	}
	return (count);
}
