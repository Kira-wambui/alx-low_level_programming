struct dlistint_s	
int n
struct dlistint_s *prev
struct dlistint_s *new
typedef dlistint_t	struct dlistint_s
0-print_dlistint.c	size_t print_dlistint(const dlistint_t *h);
1-dlistint_len.c	size_t dlistint_len(const dlistint_t *h);
2-add_dnodeint.c	dlistint_t *add_dnodeint(dlistint_t **head, const int n);
3-add_dnodeint_end.c	dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
4-free_dlistint.c	void free_dlistint(dlistint_t *head);
5-get_dnodeint.c	dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
6-sum_dlistint.c	int sum_dlistint(dlistint_t *head);
7-insert_dnodeint.c	dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
8-delete_dnodeint.c	int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
