//
// Created by mwo on 6/11/15.
//

#ifndef XMREG01_CMDLINEOPTIONS_H
#define XMREG01_CMDLINEOPTIONS_H

#include <iostream>
#include <string>

#include <boost/program_options.hpp>
#include <boost/optional.hpp>

namespace xmreg
{

    using namespace std;
    using namespace boost::program_options;

    /**
     * Manages program options of this example program.
     *
     * Basically a wrapper for boost::program_options
     */
    class CmdLineOptions {
        variables_map vm;

    public:
        CmdLineOptions(int acc, const char *avv[]);


        void
        conflicting_options(const char* opt1, const char* opt2);


        template<typename T>
        boost::optional<T> get_option(const string & opt_name) const;

        bool
        help_requested() const;
    };
}


#endif //XMREG01_CMDLINEOPTIONS_H
