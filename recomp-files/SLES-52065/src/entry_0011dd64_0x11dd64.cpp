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

// Function: entry_0011dd64
// Address: 0x11dd64 - 0x11ddbc
void entry_0011dd64_0x11dd64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dd64_0x11dd64");
#endif

    switch (ctx->pc) {
        case 0x11dd74u: goto label_11dd74;
        case 0x11dd84u: goto label_11dd84;
        case 0x11dd98u: goto label_11dd98;
        case 0x11ddacu: goto label_11ddac;
        default: break;
    }

    ctx->pc = 0x11dd64u;

    // 0x11dd64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11dd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd68: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x11dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x11dd6c: 0xc07c99c  jal         func_1F2670
    ctx->pc = 0x11DD6Cu;
    SET_GPR_U32(ctx, 31, 0x11DD74u);
    ctx->pc = 0x11DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD6Cu;
    // 0x11dd70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2670u, 0x11DD6Cu, 0x11DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD74u;
label_11dd74:
    // 0x11dd74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11dd74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd78: 0x26440108  addiu       $a0, $s2, 0x108
    ctx->pc = 0x11dd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x11dd7c: 0xc074e36  jal         func_1D38D8
    ctx->pc = 0x11DD7Cu;
    SET_GPR_U32(ctx, 31, 0x11DD84u);
    ctx->pc = 0x11DD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD7Cu;
    // 0x11dd80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D38D8u, 0x11DD7Cu, 0x11DD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD84u;
label_11dd84:
    // 0x11dd84: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x11DD84u;
    {
        const bool branch_taken_0x11dd84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD84u;
        // 0x11dd88: 0xae4003e8  sw          $zero, 0x3E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd84) {
            ctx->pc = 0x11DDD8u;
            return;
        }
    }
    ctx->pc = 0x11DD8Cu;
    // 0x11dd8c: 0x264403ec  addiu       $a0, $s2, 0x3EC
    ctx->pc = 0x11dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1004));
    // 0x11dd90: 0xc080702  jal         func_201C08
    ctx->pc = 0x11DD90u;
    SET_GPR_U32(ctx, 31, 0x11DD98u);
    ctx->pc = 0x11DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD90u;
    // 0x11dd94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11DD90u, 0x11DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD98u;
label_11dd98:
    // 0x11dd98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11dd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11dd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dda0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11dda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dda4: 0xc046b94  jal         func_11AE50
    ctx->pc = 0x11DDA4u;
    SET_GPR_U32(ctx, 31, 0x11DDACu);
    ctx->pc = 0x11DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DDA4u;
    // 0x11dda8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE50u, 0x11DDA4u, 0x11DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDACu;
label_11ddac:
    // 0x11ddac: 0xae4203e8  sw          $v0, 0x3E8($s2)
    ctx->pc = 0x11ddacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1000), GPR_U32(ctx, 2));
    // 0x11ddb0: 0x8e4203e8  lw          $v0, 0x3E8($s2)
    ctx->pc = 0x11ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1000)));
    // 0x11ddb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11DDB4u;
    {
        const bool branch_taken_0x11ddb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ddb4) {
            ctx->pc = 0x11DDD8u;
            return;
        }
    }
    ctx->pc = 0x11DDBCu;
}
