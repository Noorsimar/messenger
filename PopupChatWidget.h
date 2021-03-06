#ifndef POPUP_CHATWIDGET_H_
#define POPUP_CHATWIDGET_H_

#include "SimpleChatWidget.h"

/**
 * \defgroup chatexample Chat example
 */
/*@{*/

/*! \brief A popup chat widget.
 */
class PopupChatWidget : public SimpleChatWidget
{
public:
  PopupChatWidget(SimpleChatServer& server, const std::string& id);

  void setName(const Wt::WString& name);

protected:
  virtual void createLayout(Wt::WWidget *messages, Wt::WWidget *userList,
			    Wt::WWidget *messageEdit,
			    Wt::WWidget *sendButton, Wt::WWidget *logoutButton);

  virtual void updateUsers();
  virtual void newMessage();

private:
  Wt::WString name_;
  Wt::WText *title_;
  Wt::WWidget *bar_;
  bool online_, minimized_;
  int missedMessages_;

  void toggleSize();
  void goOnline();
  bool minimized() const;

  Wt::WContainerWidget *createBar();
};

/*@}*/

#endif // POPUP_CHATWIDGET_H_
