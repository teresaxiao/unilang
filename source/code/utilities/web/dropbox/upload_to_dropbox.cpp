#include "code/utilities/web/dropbox/dropbox_uploader.hpp"
#include "code/utilities/secret/secret_getter.hpp"
#include <iostream>

int main(){
    
    auto secret = Secret_Getter::Unilang_Dropbox_Access_Key();
    std::cout << secret << std::endl;
    Dropbox_Uploader::Upload/*_With_Curl_Command*/("/home/laptop/Desktop/tenor.gif","yup.gif",secret);
}
