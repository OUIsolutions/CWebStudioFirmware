function Install_dependencies()
    local hasher = darwin.dtw.newHasher()
    hasher.digest_folder_by_content("dependencies")
    local TARGET_HASH = "ca5db032f2ecc685137f57c38447aa8cfd832ff6b14b1d4ec3b99a9d0d120365"
    if hasher.get_value() == TARGET_HASH then
        return
    end
    local comands = {
        "mkdir -p dependencies",
        "curl -L https://github.com/OUIsolutions/DoTheWorld/releases/download/10.0.3/doTheWorldOne.c -o dependencies/doTheWorldOne.c",
        "curl -L https://github.com/OUIsolutions/C-argv-parser/releases/download/0.0.2/CArgvParseOne.c -o dependencies/CArgvParseOne.c",
        "curl -L https://github.com/OUIsolutions/CWebStudio/releases/download/4.0.0/CWebStudioOne.c -o dependencies/CWebStudioOne.c",
    }
    for _, command in ipairs(comands) do
        os.execute(command)
    end
    local new_hasher = darwin.dtw.newHasher()
    new_hasher.digest_folder_by_content("dependencies")
    print("new hasher is: ", new_hasher.get_value())
end