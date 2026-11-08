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

// Function: entry_0012c638
// Address: 0x12c638 - 0x12c65c
void entry_0012c638_0x12c638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c638_0x12c638");
#endif

    switch (ctx->pc) {
        case 0x12c644u: goto label_12c644;
        default: break;
    }

    ctx->pc = 0x12c638u;

    // 0x12c638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c63c: 0xc07d84c  jal         func_1F6130
    ctx->pc = 0x12C63Cu;
    SET_GPR_U32(ctx, 31, 0x12C644u);
    ctx->pc = 0x12C640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C63Cu;
    // 0x12c640: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6130u, 0x12C63Cu, 0x12C644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C644u;
label_12c644:
    // 0x12c644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c648: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C648u;
    {
        const bool branch_taken_0x12c648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C648u;
        // 0x12c64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c648) {
            ctx->pc = 0x12C65Cu;
            return;
        }
    }
    ctx->pc = 0x12C650u;
    // 0x12c650: 0x82420066  lb          $v0, 0x66($s2)
    ctx->pc = 0x12c650u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
    // 0x12c654: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12c654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12c658: 0xa2420066  sb          $v0, 0x66($s2)
    ctx->pc = 0x12c658u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12c65cu;
}
