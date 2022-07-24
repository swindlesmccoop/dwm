void
attachx(Client *c)
{
	Client *at;


	if (!(c->mon->sel == NULL || c->mon->sel == c->mon->clients || c->mon->sel->isfloating)) {
		for (at = c->mon->clients; at->next != c->mon->sel; at = at->next);
		c->next = at->next;
		at->next = c;
		return;
	}
	attach(c); // master (default)
}

