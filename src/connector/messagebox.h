#ifndef MESSAGEBOX_H
#define MESSAGEBOX_H 1

typedef void messagebox_unshare_cb(void *);

typedef MessageBox;

void show_unshare_messagebox(const char *message,
			     messagebox_unshare_cb *callback,
			     void *user_data);

/**
 * Simple interface to messagebox_show.
 *
 * \param message  The message to display.
 */
void show_messagebox(const char* message);

/**
 * Creates a MessageBox object, in case you want
 * to keep a handle on a messagebox.
 */
MessageBox *messagebox_new(void);

/**
 * Displays a message box.
 *
 * \param box  The MessageBox object to keep
 *             track of this box; may be NULL.
 * \param message  The message to display.
 * \param please_wait  If nonzero, there will
 *                     be a "please wait" bar
 *                     in the dialogue.
 */
void messagebox_show (MessageBox *box,
		      const char *message,
		      int please_wait);

/**
 * Removes a reference to a MessageBox.  This
 * may not free it, because the box may still
 * be open.
 */
void messagebox_unref (MessageBox *box);

#endif /* !MESSAGEBOX_H */