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

// Function: entry_001ae9b0
// Address: 0x1ae9b0 - 0x1ae9dc
void entry_001ae9b0_0x1ae9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae9b0_0x1ae9b0");
#endif

    switch (ctx->pc) {
        case 0x1ae9b8u: goto label_1ae9b8;
        default: break;
    }

    ctx->pc = 0x1ae9b0u;

    // 0x1ae9b0: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x1AE9B0u;
    SET_GPR_U32(ctx, 31, 0x1AE9B8u);
    ctx->pc = 0x1AE9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9B0u;
    // 0x1ae9b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1AE9B0u, 0x1AE9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE9B8u;
label_1ae9b8:
    // 0x1ae9b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ae9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ae9bc: 0x144300fe  bne         $v0, $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x1AE9BCu;
    {
        const bool branch_taken_0x1ae9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ae9bc) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
    ctx->pc = 0x1AE9C4u;
    // 0x1ae9c4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE9C4u;
    {
        const bool branch_taken_0x1ae9c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae9c4) {
            ctx->pc = 0x1AE9DCu;
            return;
        }
    }
    ctx->pc = 0x1AE9CCu;
    // 0x1ae9cc: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1ae9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1ae9d0: 0x8c6327a4  lw          $v1, 0x27A4($v1)
    ctx->pc = 0x1ae9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10148)));
    // 0x1ae9d4: 0x106000f8  beqz        $v1, . + 4 + (0xF8 << 2)
    ctx->pc = 0x1AE9D4u;
    {
        const bool branch_taken_0x1ae9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae9d4) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
    ctx->pc = 0x1AE9DCu;
}
