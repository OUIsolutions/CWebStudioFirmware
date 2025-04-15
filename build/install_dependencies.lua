function Install_dependencies()
    local hasher = darwin.dtw.newHasher()
    hasher.digest_folder_by_content("dependencies")
    local TARGET_HASH = "3693deff3fef1bb40b6f25a3b45dd097b6e4cc479a29015dc0657b0815b84fd7"
    if hasher.get_value() == TARGET_HASH then
        return
    end
    local comands = {
        "mkdir -p dependencies",
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