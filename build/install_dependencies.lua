
function Install_dependencies()
    os.execute("mkdir -p dependencies")

    local libs = {
        { url = "https://github.com/OUIsolutions/DoTheWorld/releases/download/10.0.1/doTheWorldOne.c", path = "dependencies/doTheWorldOne.c" },
        { url = "https://github.com/OUIsolutions/C-argv-parser/releases/download/0.0.1/CArgvParseOne.c", path = "dependencies/CArgvParseOne.c" },
        {url = "https://github.com/OUIsolutions/CWebStudio/releases/download/4.1.0/CWebStudioOne.c" , path = "dependencies/CWebStudioOne.c"},
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