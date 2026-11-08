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

// Function: FUN_001247d0
// Address: 0x1247d0 - 0x124874
void FUN_001247d0_0x1247d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001247d0_0x1247d0");
#endif

    switch (ctx->pc) {
        case 0x124808u: goto label_124808;
        case 0x124814u: goto label_124814;
        case 0x124844u: goto label_124844;
        default: break;
    }

    ctx->pc = 0x1247d0u;

    // 0x1247d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1247d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1247d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1247d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1247d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1247d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1247dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1247dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1247e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1247e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1247e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1247e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1247e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1247ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1247ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1247f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1247f4: 0x8c91008c  lw          $s1, 0x8C($a0)
    ctx->pc = 0x1247f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1247f8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1247f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1247fc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1247FCu;
    {
        const bool branch_taken_0x1247fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x124800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247FCu;
        // 0x124800: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247fc) {
            ctx->pc = 0x124830u;
            goto label_124830;
        }
    }
    ctx->pc = 0x124804u;
    // 0x124804: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x124804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124808:
    // 0x124808: 0x8e820084  lw          $v0, 0x84($s4)
    ctx->pc = 0x124808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x12480c: 0xc048148  jal         func_120520
    ctx->pc = 0x12480Cu;
    SET_GPR_U32(ctx, 31, 0x124814u);
    ctx->pc = 0x124810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12480Cu;
    // 0x124810: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x12480Cu, 0x124814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124814u;
label_124814:
    // 0x124814: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x124814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x124818: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x124818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12481c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x12481cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x124820: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x124820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x124824: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x124824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x124828: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x124828u;
    {
        const bool branch_taken_0x124828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124828u;
        // 0x12482c: 0x26730090  addiu       $s3, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124828) {
            ctx->pc = 0x124808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124808;
        }
    }
    ctx->pc = 0x124830u;
label_124830:
    // 0x124830: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x124830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x124834: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x124834u;
    {
        const bool branch_taken_0x124834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124834u;
        // 0x124838: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124834) {
            ctx->pc = 0x124854u;
            goto label_124854;
        }
    }
    ctx->pc = 0x12483Cu;
    // 0x12483c: 0xc048148  jal         func_120520
    ctx->pc = 0x12483Cu;
    SET_GPR_U32(ctx, 31, 0x124844u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x12483Cu, 0x124844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124844u;
label_124844:
    // 0x124844: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x124844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x124848: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x124848u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x12484c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12484cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x124850: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x124850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124854:
    // 0x124854: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x124854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x124858: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x124858u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12485c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12485cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124860: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x124860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x124864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x124868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12486c: 0x3e00008  jr          $ra
    ctx->pc = 0x12486Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12486Cu;
        // 0x124870: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12486Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124874u;
}
