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

// Function: entry_0015200c
// Address: 0x15200c - 0x15201c
void entry_0015200c_0x15200c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015200c_0x15200c");
#endif

    ctx->pc = 0x15200cu;

    // 0x15200c: 0x0  nop
    ctx->pc = 0x15200cu;
    // NOP
    // 0x152010: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x152010u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x152014: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x152014u;
    {
        const bool branch_taken_0x152014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x152014) {
            ctx->pc = 0x151F24u;
            return;
        }
    }
    ctx->pc = 0x15201Cu;
}
