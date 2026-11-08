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

// Function: FUN_001190d0
// Address: 0x1190d0 - 0x11913c
void FUN_001190d0_0x1190d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001190d0_0x1190d0");
#endif

    switch (ctx->pc) {
        case 0x1190f4u: goto label_1190f4;
        default: break;
    }

    ctx->pc = 0x1190d0u;

    // 0x1190d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1190d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1190d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1190d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1190d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1190d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1190dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1190dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1190e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1190e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1190e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1190e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1190ec: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1190ECu;
    SET_GPR_U32(ctx, 31, 0x1190F4u);
    ctx->pc = 0x1190F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1190ECu;
    // 0x1190f0: 0x24a5e5f0  addiu       $a1, $a1, -0x1A10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1190ECu, 0x1190F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1190F4u;
label_1190f4:
    // 0x1190f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1190F4u;
    {
        const bool branch_taken_0x1190f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1190f4) {
            ctx->pc = 0x119104u;
            goto label_119104;
        }
    }
    ctx->pc = 0x1190FCu;
    // 0x1190fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1190FCu;
    {
        const bool branch_taken_0x1190fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190FCu;
        // 0x119100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190fc) {
            ctx->pc = 0x119128u;
            goto label_119128;
        }
    }
    ctx->pc = 0x119104u;
label_119104:
    // 0x119104: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x119104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x119108: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11910c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11910cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x119110: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x119110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119114: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x119114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x119118: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x119118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x11911c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x119120: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x119120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x119124: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x119124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_119128:
    // 0x119128: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11912c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11912cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119134: 0x3e00008  jr          $ra
    ctx->pc = 0x119134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119134u;
        // 0x119138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11913Cu;
}
