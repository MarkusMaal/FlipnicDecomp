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

// Function: FUN_0012a3f0
// Address: 0x12a3f0 - 0x12a428
void FUN_0012a3f0_0x12a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a3f0_0x12a3f0");
#endif

    switch (ctx->pc) {
        case 0x12a3f0u: goto label_12a3f0;
        case 0x12a3f4u: goto label_12a3f4;
        case 0x12a3f8u: goto label_12a3f8;
        case 0x12a3fcu: goto label_12a3fc;
        case 0x12a400u: goto label_12a400;
        case 0x12a404u: goto label_12a404;
        case 0x12a408u: goto label_12a408;
        case 0x12a40cu: goto label_12a40c;
        case 0x12a410u: goto label_12a410;
        case 0x12a414u: goto label_12a414;
        case 0x12a418u: goto label_12a418;
        case 0x12a41cu: goto label_12a41c;
        case 0x12a420u: goto label_12a420;
        case 0x12a424u: goto label_12a424;
        default: break;
    }

    ctx->pc = 0x12a3f0u;

label_12a3f0:
    // 0x12a3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12a3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_12a3f4:
    // 0x12a3f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12a3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_12a3f8:
    // 0x12a3f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12a3fc:
    // 0x12a3fc: 0xc04a830  jal         func_12A0C0
label_12a400:
    if (ctx->pc == 0x12A400u) {
        ctx->pc = 0x12A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3FCu;
        // 0x12a400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A404u;
        goto label_12a404;
    }
    ctx->pc = 0x12A3FCu;
    SET_GPR_U32(ctx, 31, 0x12A404u);
    ctx->pc = 0x12A400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A3FCu;
    // 0x12a400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0C0u, 0x12A3FCu, 0x12A404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A404u;
label_12a404:
    // 0x12a404: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x12a404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_12a408:
    // 0x12a408: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12a408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12a40c:
    // 0x12a40c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x12a40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_12a410:
    // 0x12a410: 0x320f809  jalr        $t9
label_12a414:
    if (ctx->pc == 0x12A414u) {
        ctx->pc = 0x12A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A410u;
        // 0x12a414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A418u;
        goto label_12a418;
    }
    ctx->pc = 0x12A410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12A418u);
        ctx->pc = 0x12A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A410u;
        // 0x12a414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A410u, 0x12A418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A418u;
label_12a418:
    // 0x12a418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12a418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12a41c:
    // 0x12a41c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12a420:
    // 0x12a420: 0x3e00008  jr          $ra
label_12a424:
    if (ctx->pc == 0x12A424u) {
        ctx->pc = 0x12A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A420u;
        // 0x12a424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A428u;
        goto label_fallthrough_0x12a420;
    }
    ctx->pc = 0x12A420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A420u;
        // 0x12a424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12a420:
    ctx->pc = 0x12A428u;
}
