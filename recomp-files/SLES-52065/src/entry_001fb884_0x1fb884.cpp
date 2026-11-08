#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001fb884
// Address: 0x1fb884 - 0x1fb898
void entry_001fb884_0x1fb884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb884_0x1fb884");
#endif

    ctx->pc = 0x1fb884u;

    // 0x1fb884: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb888: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x1fb888u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fb88c: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x1fb88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1fb890: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB890u;
    {
        const bool branch_taken_0x1fb890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb890) {
            ctx->pc = 0x1FB8A0u;
            return;
        }
    }
    ctx->pc = 0x1FB898u;
}
