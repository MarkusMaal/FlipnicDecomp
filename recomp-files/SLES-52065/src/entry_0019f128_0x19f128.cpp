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

// Function: entry_0019f128
// Address: 0x19f128 - 0x19f144
void entry_0019f128_0x19f128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f128_0x19f128");
#endif

    switch (ctx->pc) {
        case 0x19f140u: goto label_19f140;
        default: break;
    }

    ctx->pc = 0x19f128u;

    // 0x19f128: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x19f128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x19f12c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f130: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F130u;
    {
        const bool branch_taken_0x19f130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F130u;
        // 0x19f134: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f130) {
            ctx->pc = 0x19F144u;
            return;
        }
    }
    ctx->pc = 0x19F138u;
    // 0x19f138: 0xc0424e4  jal         func_109390
    ctx->pc = 0x19F138u;
    SET_GPR_U32(ctx, 31, 0x19F140u);
    ctx->pc = 0x19F13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F138u;
    // 0x19f13c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109390u, 0x19F138u, 0x19F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F140u;
label_19f140:
    // 0x19f140: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f144u;
}
