
#Compiling  
sudo g++ -o messenger simpleChat.cpp PopupChatWidget.cpp SimpleChatWidget.cpp SimpleChatServer.cpp -lwthttp -lwt -lboost_system -lboost_signals -pthread

#Executing
sudo ./messenger --docroot . --http-address 0.0.0.0 --http-port 8080
