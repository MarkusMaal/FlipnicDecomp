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

// Function: entry_001fae9c
// Address: 0x1fae9c - 0x1faeb0
void entry_001fae9c_0x1fae9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fae9c_0x1fae9c");
#endif

    ctx->pc = 0x1fae9cu;

    // 0x1fae9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fae9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faea0: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FAEA0u;
    {
        const bool branch_taken_0x1faea0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1FAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEA0u;
        // 0x1faea4: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faea0) {
            ctx->pc = 0x1FAEF0u;
            return;
        }
    }
    ctx->pc = 0x1FAEA8u;
    // 0x1faea8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1faea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1faeac: 0x0  nop
    ctx->pc = 0x1faeacu;
    // NOP
    ctx->pc = 0x1faeb0u;
}
