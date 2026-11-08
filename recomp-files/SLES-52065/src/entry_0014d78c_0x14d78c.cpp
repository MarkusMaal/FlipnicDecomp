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

// Function: entry_0014d78c
// Address: 0x14d78c - 0x14d7c4
void entry_0014d78c_0x14d78c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d78c_0x14d78c");
#endif

    switch (ctx->pc) {
        case 0x14d7a4u: goto label_14d7a4;
        default: break;
    }

    ctx->pc = 0x14d78cu;

    // 0x14d78c: 0x0  nop
    ctx->pc = 0x14d78cu;
    // NOP
    // 0x14d790: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14d790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x14d794: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x14D794u;
    {
        const bool branch_taken_0x14d794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x14D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D794u;
        // 0x14d798: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d794) {
            ctx->pc = 0x14D7C4u;
            return;
        }
    }
    ctx->pc = 0x14D79Cu;
    // 0x14d79c: 0xc053604  jal         func_14D810
    ctx->pc = 0x14D79Cu;
    SET_GPR_U32(ctx, 31, 0x14D7A4u);
    ctx->pc = 0x14D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D810u, 0x14D79Cu, 0x14D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7A4u;
label_14d7a4:
    // 0x14d7a4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x14d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14d7a8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x14d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14d7ac: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x14d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x14d7b0: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x14d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x14d7b4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14d7b8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14d7bc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x14d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x14d7c0: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x14d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x14d7c4u;
}
