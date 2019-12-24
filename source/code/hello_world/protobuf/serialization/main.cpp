#include <iostream>
#include <fstream>
#include "code/hello_world/protobuf/serialization/message.pb.h"


template <typename T>
void Serialize(T const& t, std::string const& path){
    std::ofstream ofs(path, std::ios_base::out | std::ios_base::binary);
    bool was_successful = t.SerializeToOstream(&ofs);
    if (!was_successful){
        std::cerr << "failed to serialize" << std::endl;
    }
}

template <typename T>
T Deserialize(std::string const& path){
    T t;
    std::ifstream ifs(path, std::ios_base::binary);
    bool was_successful = t.ParseFromIstream(&ifs);
    if (!was_successful){
        std::cerr << "failed to deserialize" << std::endl;
    }
    return t;
    
}

int main(){

    //construct
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    demo::Message message;
    message.set_foo("hello world");
    
    //serialize
     Serialize(message,"/home/laptop/Desktop/message.serialized");
     auto t = Deserialize<demo::Message>("/home/laptop/Desktop/message.serialized");
     std::cout << t.foo() << std::endl;
    
    //deserialze
    
    
    return 0;
}