/**
 * @file   QQUtil.h
 * @author Xiang Wang <xiang_wang@trendmicro.com.cn>
 * @date   Mon Jun 11 14:51:25 2012
 *
 * @brief
 *
 *
 */
#ifndef __QQ_UTIL_H__
#define __QQ_UTIL_H__

#include <string>
#include <vector>

namespace QQUtil{

    void Tokenize(const std::string& str,
                  std::vector<std::string>& tokens,
                  const std::string& delimiters );

    std::string urlencode( const std::string &c );

    std::string urldecode(const std::string& s);

    int StrToInt(const std::string &str);

    std::string IntToStr(int );
};

#endif
