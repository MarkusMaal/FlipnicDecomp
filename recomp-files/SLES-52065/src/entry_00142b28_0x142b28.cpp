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

// Function: entry_00142b28
// Address: 0x142b28 - 0x142b34
void entry_00142b28_0x142b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142b28_0x142b28");
#endif

    ctx->pc = 0x142b28u;

    // 0x142b28: 0x16c00002  bnez        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x142B28u;
    {
        const bool branch_taken_0x142b28 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x142b28) {
            ctx->pc = 0x142B34u;
            return;
        }
    }
    ctx->pc = 0x142B30u;
    // 0x142b30: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x142b30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x142b34u;
}
