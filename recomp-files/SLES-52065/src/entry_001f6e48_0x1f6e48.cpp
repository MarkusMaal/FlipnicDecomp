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

// Function: entry_001f6e48
// Address: 0x1f6e48 - 0x1f6e78
void entry_001f6e48_0x1f6e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6e48_0x1f6e48");
#endif

    switch (ctx->pc) {
        case 0x1f6e50u: goto label_1f6e50;
        case 0x1f6e74u: goto label_1f6e74;
        default: break;
    }

    ctx->pc = 0x1f6e48u;

    // 0x1f6e48: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F6E48u;
    SET_GPR_U32(ctx, 31, 0x1F6E50u);
    ctx->pc = 0x1F6E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6E48u;
    // 0x1f6e4c: 0x8fc4bb20  lw          $a0, -0x44E0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F6E48u, 0x1F6E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E50u;
label_1f6e50:
    // 0x1f6e50: 0x8e63bb64  lw          $v1, -0x449C($s3)
    ctx->pc = 0x1f6e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949732)));
    // 0x1f6e54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f6e58: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6E58u;
    {
        const bool branch_taken_0x1f6e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E58u;
        // 0x1f6e5c: 0x8ea2bb10  lw          $v0, -0x44F0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e58) {
            ctx->pc = 0x1F6E78u;
            return;
        }
    }
    ctx->pc = 0x1F6E60u;
    // 0x1f6e60: 0xae40bb34  sw          $zero, -0x44CC($s2)
    ctx->pc = 0x1f6e60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949684), GPR_U32(ctx, 0));
    // 0x1f6e64: 0xae60bb64  sw          $zero, -0x449C($s3)
    ctx->pc = 0x1f6e64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294949732), GPR_U32(ctx, 0));
    // 0x1f6e68: 0xaee0bb14  sw          $zero, -0x44EC($s7)
    ctx->pc = 0x1f6e68u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294949652), GPR_U32(ctx, 0));
    // 0x1f6e6c: 0xc07ad18  jal         func_1EB460
    ctx->pc = 0x1F6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1F6E74u);
    ctx->pc = 0x1F6E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6E6Cu;
    // 0x1f6e70: 0xaec0134c  sw          $zero, 0x134C($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4940), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB460u, 0x1F6E6Cu, 0x1F6E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6E74u;
label_1f6e74:
    // 0x1f6e74: 0x8ea2bb10  lw          $v0, -0x44F0($s5)
    ctx->pc = 0x1f6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949648)));
    ctx->pc = 0x1f6e78u;
}
