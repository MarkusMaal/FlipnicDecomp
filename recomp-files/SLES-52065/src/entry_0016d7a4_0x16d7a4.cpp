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

// Function: entry_0016d7a4
// Address: 0x16d7a4 - 0x16d7cc
void entry_0016d7a4_0x16d7a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d7a4_0x16d7a4");
#endif

    switch (ctx->pc) {
        case 0x16d7c4u: goto label_16d7c4;
        default: break;
    }

    ctx->pc = 0x16d7a4u;

    // 0x16d7a4: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x16D7A4u;
    {
        const bool branch_taken_0x16d7a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d7a4) {
            ctx->pc = 0x16D7CCu;
            return;
        }
    }
    ctx->pc = 0x16D7ACu;
    // 0x16d7ac: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x16d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16d7b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d7b4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D7B4u;
    {
        const bool branch_taken_0x16d7b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7B4u;
        // 0x16d7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7b4) {
            ctx->pc = 0x16D7CCu;
            return;
        }
    }
    ctx->pc = 0x16D7BCu;
    // 0x16d7bc: 0xc042118  jal         func_108460
    ctx->pc = 0x16D7BCu;
    SET_GPR_U32(ctx, 31, 0x16D7C4u);
    ctx->pc = 0x16D7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7BCu;
    // 0x16d7c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16D7BCu, 0x16D7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7C4u;
label_16d7c4:
    // 0x16d7c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16D7C4u;
    {
        const bool branch_taken_0x16d7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D7C4u;
        // 0x16d7c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d7c4) {
            ctx->pc = 0x16D7D0u;
            return;
        }
    }
    ctx->pc = 0x16D7CCu;
}
