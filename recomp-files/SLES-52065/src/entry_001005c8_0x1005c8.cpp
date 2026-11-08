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

// Function: entry_001005c8
// Address: 0x1005c8 - 0x1005dc
void entry_001005c8_0x1005c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001005c8_0x1005c8");
#endif

    ctx->pc = 0x1005c8u;

    // 0x1005c8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1005C8u;
    {
        const bool branch_taken_0x1005c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1005c8) {
            ctx->pc = 0x1005DCu;
            return;
        }
    }
    ctx->pc = 0x1005D0u;
    // 0x1005d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1005d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1005D4u;
    {
        const bool branch_taken_0x1005d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005d4) {
            ctx->pc = 0x100608u;
            return;
        }
    }
    ctx->pc = 0x1005DCu;
}
