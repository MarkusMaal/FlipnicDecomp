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

// Function: FUN_001323c0
// Address: 0x1323c0 - 0x132468
void FUN_001323c0_0x1323c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001323c0_0x1323c0");
#endif

    switch (ctx->pc) {
        case 0x13241cu: goto label_13241c;
        case 0x132428u: goto label_132428;
        default: break;
    }

    ctx->pc = 0x1323c0u;

    // 0x1323c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1323c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1323c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1323c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1323c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1323c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1323cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1323ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1323d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1323d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1323d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1323d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1323d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1323dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1323e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1323e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323e4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1323e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1323e8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1323e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1323ec: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1323ECu;
    {
        const bool branch_taken_0x1323ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1323F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323ECu;
        // 0x1323f0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323ec) {
            ctx->pc = 0x1323FCu;
            goto label_1323fc;
        }
    }
    ctx->pc = 0x1323F4u;
    // 0x1323f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1323F4u;
    {
        const bool branch_taken_0x1323f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1323F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323F4u;
        // 0x1323f8: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323f4) {
            ctx->pc = 0x13244Cu;
            goto label_13244c;
        }
    }
    ctx->pc = 0x1323FCu;
label_1323fc:
    // 0x1323fc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1323fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132400: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x132400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x132404: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x132404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x132408: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x132408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x13240c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x13240cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x132410: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x132410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x132414: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x132414u;
    {
        const bool branch_taken_0x132414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132414u;
        // 0x132418: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132414) {
            ctx->pc = 0x132434u;
            goto label_132434;
        }
    }
    ctx->pc = 0x13241Cu;
label_13241c:
    // 0x13241c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x132420: 0xc0401a4  jal         func_100690
    ctx->pc = 0x132420u;
    SET_GPR_U32(ctx, 31, 0x132428u);
    ctx->pc = 0x132424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132420u;
    // 0x132424: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x132420u, 0x132428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132428u;
label_132428:
    // 0x132428: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x132428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13242c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13242cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x132430: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x132430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_132434:
    // 0x132434: 0x0  nop
    ctx->pc = 0x132434u;
    // NOP
    // 0x132438: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x132438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13243c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13243cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132440: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x132440u;
    {
        const bool branch_taken_0x132440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x132440) {
            ctx->pc = 0x13241Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13241c;
        }
    }
    ctx->pc = 0x132448u;
    // 0x132448: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x132448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_13244c:
    // 0x13244c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13244cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132450: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x132450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132454: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x132454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13245c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13245cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132460: 0x3e00008  jr          $ra
    ctx->pc = 0x132460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132460u;
        // 0x132464: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132468u;
}
