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

// Function: entry_0016bda0
// Address: 0x16bda0 - 0x16bdb0
void entry_0016bda0_0x16bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bda0_0x16bda0");
#endif

    ctx->pc = 0x16bda0u;

    // 0x16bda0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BDA0u;
    {
        const bool branch_taken_0x16bda0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x16BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDA0u;
        // 0x16bda4: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bda0) {
            ctx->pc = 0x16BDB0u;
            return;
        }
    }
    ctx->pc = 0x16BDA8u;
    // 0x16bda8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16BDA8u;
    {
        const bool branch_taken_0x16bda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDA8u;
        // 0x16bdac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bda8) {
            ctx->pc = 0x16BDD0u;
            return;
        }
    }
    ctx->pc = 0x16BDB0u;
}
