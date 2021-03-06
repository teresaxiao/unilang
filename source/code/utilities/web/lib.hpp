#pragma once
#include <curl/curl.h>
#include <string>
#include <vector>

std::string Get_HTML_Of_Site(std::string const& website);
std::string Get_HTML_Of_Site_With_Curl_Lib(std::string const& website);
std::vector<std::string> Get_HTML_Of_Site_With_Each_Line_In_Vector(std::string const& website);
void Send_Email(std::string const& message, std::string const& email);

int Website_Response_Code(std::string const& url);
bool Is_Url_Reponse_200(std::string const& url);