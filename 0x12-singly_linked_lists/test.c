#include "lists.h"

void _free_list(list_t *head)
{
	if (head)
	{
		_free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	char *strings[131] = {
		"Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it,", "Lock it, fill it, call it, find it,", "View it, code it, jam - unlock it,", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it,", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it,", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it,", "Lock it, fill it, call it, find it,", "View it, code it, jam - unlock it,", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it,", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it,", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Technologic", "Technologic", "Technologic", "Technologic", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it,", "Lock it, fill it, call it, find it,", "View it, code it, jam - unlock it,", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it,", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it", "Lock it, fill it, call it, find it,", "View it, code it, jam - unlock it,", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it,", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it,", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it", "Buy it, use it, break it, fix it,", "Trash it, change it, mail - upgrade it,", "Charge it, point it, zoom it, press it,", "Snap it, work it, quick - erase it,", "Write it, cut it, paste it, save it,", "Load it, check it, quick - rewrite it,", "Plug it, play it, burn it, rip it,", "Drag and drop it, zip - unzip it", "Lock it, fill it, call it, find it,", "View it, code it, jam - unlock it,", "Surf it, scroll it, pause it, click it,", "Cross it, crack it, switch - update it,", "Name it, rate it, tune it, print it,", "Scan it, send it, fax - rename it,", "Touch it, bring it, pay it, watch it,", "Turn it, leave it, start - format it.", "Technologic", "Technologic", "Technologic", "Technologic", "Technologic", "Technologic", "Technologic", "Technologic", "Technologic", "Technologic",
		NULL
	};
	list_t *ptr;
	int i;
	size_t n;

	head = NULL;
	for (i = 0; strings[i]; ++i)
	{
		ptr = add_node_end(&head, strings[i]);
		if (!ptr || !ptr->str)
		{
			printf("Failed\n");
			_free_list(head);
			return (1);
		}
		if (ptr->str == strings[i])
		{
			printf("A copy of the string should be stored\n");
			return (1);
		}
	}
	n = print_list(head);
	printf("-> %lu elements\n", n);
	_free_list(head);
	return (0);
}
