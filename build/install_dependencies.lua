
function Install_dependencies()
    os.execute("mkdir -p dependencies")

    local libs = {
        { url = "https://github.com/OUIsolutions/DoTheWorld/releases/download/10.0.1/doTheWorld.h", path = "dependencies/doTheWorld.h" },
        { url = "https://github.com/OUIsolutions/DoTheWorld/releases/download/10.0.1/doTheWorld.c", path = "dependencies/doTheWorld.c" },
        { url = "https://github.com/OUIsolutions/C-argv-parser/releases/download/0.0.1/CArgvParse.h", path = "dependencies/CArgvParse.h" },
        { url = "https://github.com/OUIsolutions/C-argv-parser/releases/download/0.0.1/CArgvParse.c", path = "dependencies/CArgvParse.c" },
        {url = "https://github.com/OUIsolutions/CWebStudio/releases/download/4.0.0/CWebStudio.c" , path = "dependencies/CWebStudio.c"},
        {url = "https://github.com/OUIsolutions/CWebStudio/releases/download/4.0.0/CWebStudio.h" , path = "dependencies/CWebStudio.h"},
    }
    for _, lib in ipairs(libs) do
        local executor = function()
            os.execute("curl -L " .. lib.url .. " -o " .. lib.path)
        end
        local side_effect_verifier = function()
            return darwin.dtw.generate_sha_from_file(lib.path)
        end
        cache_execution({ "download", lib.url, lib.path }, executor, side_effect_verifier)

    end
end