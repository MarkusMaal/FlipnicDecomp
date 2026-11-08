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

// Function: entry_001c4f0c
// Address: 0x1c4f0c - 0x1c4f20
void entry_001c4f0c_0x1c4f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4f0c_0x1c4f0c");
#endif

    ctx->pc = 0x1c4f0cu;

    // 0x1c4f0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c4f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c4f10: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1c4f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c4f14: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C4F14u;
    {
        const bool branch_taken_0x1c4f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F14u;
        // 0x1c4f18: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f14) {
            ctx->pc = 0x1C4EE8u;
            return;
        }
    }
    ctx->pc = 0x1C4F1Cu;
    // 0x1c4f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c4f20u;
}
