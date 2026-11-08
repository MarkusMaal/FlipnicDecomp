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

// Function: entry_00132858
// Address: 0x132858 - 0x1328b4
void entry_00132858_0x132858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132858_0x132858");
#endif

    switch (ctx->pc) {
        case 0x132864u: goto label_132864;
        case 0x132870u: goto label_132870;
        case 0x132888u: goto label_132888;
        default: break;
    }

    ctx->pc = 0x132858u;

    // 0x132858: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x13285c: 0xc04c554  jal         func_131550
    ctx->pc = 0x13285Cu;
    SET_GPR_U32(ctx, 31, 0x132864u);
    ctx->pc = 0x132860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13285Cu;
    // 0x132860: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13285Cu, 0x132864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132864u;
label_132864:
    // 0x132864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132868: 0xc04c550  jal         func_131540
    ctx->pc = 0x132868u;
    SET_GPR_U32(ctx, 31, 0x132870u);
    ctx->pc = 0x13286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132868u;
    // 0x13286c: 0x27a40058  addiu       $a0, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x132868u, 0x132870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132870u;
label_132870:
    // 0x132870: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x132870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x132874: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x132874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x132878: 0x24a5ccc8  addiu       $a1, $a1, -0x3338
    ctx->pc = 0x132878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954184));
    // 0x13287c: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x13287cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x132880: 0xc04c93c  jal         func_1324F0
    ctx->pc = 0x132880u;
    SET_GPR_U32(ctx, 31, 0x132888u);
    ctx->pc = 0x132884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132880u;
    // 0x132884: 0x27a70054  addiu       $a3, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324F0u, 0x132880u, 0x132888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132888u;
label_132888:
    // 0x132888: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x132888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13288c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132890: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x132890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x132894: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x132894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x132898: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x132898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13289c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13289cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1328a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1328a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1328a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1328a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1328a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1328a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1328ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1328ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1328B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328ACu;
        // 0x1328b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1328ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1328B4u;
}
