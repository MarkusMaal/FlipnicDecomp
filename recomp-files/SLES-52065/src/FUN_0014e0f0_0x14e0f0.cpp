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

// Function: FUN_0014e0f0
// Address: 0x14e0f0 - 0x14e138
void FUN_0014e0f0_0x14e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014e0f0_0x14e0f0");
#endif

    switch (ctx->pc) {
        case 0x14e124u: goto label_14e124;
        default: break;
    }

    ctx->pc = 0x14e0f0u;

    // 0x14e0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14e0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14e0f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14e0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14e0f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e0fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e100: 0x12050009  beq         $s0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E100u;
    {
        const bool branch_taken_0x14e100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x14E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E100u;
        // 0x14e104: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e100) {
            ctx->pc = 0x14E128u;
            goto label_14e128;
        }
    }
    ctx->pc = 0x14E108u;
    // 0x14e108: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x14e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14e10c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x14e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14e110: 0x83a7002c  lb          $a3, 0x2C($sp)
    ctx->pc = 0x14e110u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14e114: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14e114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14e118: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x14e118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e11c: 0xc053b14  jal         func_14EC50
    ctx->pc = 0x14E11Cu;
    SET_GPR_U32(ctx, 31, 0x14E124u);
    ctx->pc = 0x14E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E11Cu;
    // 0x14e120: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC50u, 0x14E11Cu, 0x14E124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E124u;
label_14e124:
    // 0x14e124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14e124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e128:
    // 0x14e128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e12c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e130: 0x3e00008  jr          $ra
    ctx->pc = 0x14E130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E130u;
        // 0x14e134: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E138u;
}
