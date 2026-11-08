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

// Function: FUN_001d0090
// Address: 0x1d0090 - 0x1d0124
void FUN_001d0090_0x1d0090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d0090_0x1d0090");
#endif

    switch (ctx->pc) {
        case 0x1d00c4u: goto label_1d00c4;
        case 0x1d00d4u: goto label_1d00d4;
        default: break;
    }

    ctx->pc = 0x1d0090u;

    // 0x1d0090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d0090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d0094: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1d0094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1d0098: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d0098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d009c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1d009cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d00a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d00a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d00a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d00a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d00a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d00a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d00ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d00acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d00b0: 0x8c30ca84  lw          $s0, -0x357C($at)
    ctx->pc = 0x1d00b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1d00b4: 0xde040028  ld          $a0, 0x28($s0)
    ctx->pc = 0x1d00b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d00b8: 0xde122818  ld          $s2, 0x2818($s0)
    ctx->pc = 0x1d00b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 16), 10264)));
    // 0x1d00bc: 0xc081a86  jal         func_206A18
    ctx->pc = 0x1D00BCu;
    SET_GPR_U32(ctx, 31, 0x1D00C4u);
    ctx->pc = 0x1D00C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00BCu;
    // 0x1d00c0: 0x26130028  addiu       $s3, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A18u, 0x1D00BCu, 0x1D00C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00C4u;
label_1d00c4:
    // 0x1d00c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d00c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00c8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1d00c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d00cc: 0xc081a86  jal         func_206A18
    ctx->pc = 0x1D00CCu;
    SET_GPR_U32(ctx, 31, 0x1D00D4u);
    ctx->pc = 0x1D00D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00CCu;
    // 0x1d00d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A18u, 0x1D00CCu, 0x1D00D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00D4u;
label_1d00d4:
    // 0x1d00d4: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x1d00d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d00d8: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x1d00d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1d00dc: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x1d00dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1d00e0: 0x72182d  daddu       $v1, $v1, $s2
    ctx->pc = 0x1d00e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 18));
    // 0x1d00e4: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1d00e4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x1d00e8: 0xde030028  ld          $v1, 0x28($s0)
    ctx->pc = 0x1d00e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d00ec: 0x64182f  dsubu       $v1, $v1, $a0
    ctx->pc = 0x1d00ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    // 0x1d00f0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D00F0u;
    {
        const bool branch_taken_0x1d00f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00F0u;
        // 0x1d00f4: 0xfe030028  sd          $v1, 0x28($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00f0) {
            ctx->pc = 0x1D00FCu;
            goto label_1d00fc;
        }
    }
    ctx->pc = 0x1D00F8u;
    // 0x1d00f8: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x1d00f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1d00fc:
    // 0x1d00fc: 0xde030028  ld          $v1, 0x28($s0)
    ctx->pc = 0x1d00fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d0100: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x1d0100u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1d0104: 0xfe030028  sd          $v1, 0x28($s0)
    ctx->pc = 0x1d0104u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 3));
    // 0x1d0108: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d0108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d010c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d010cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0110: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0114: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d011c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D011Cu;
        // 0x1d0120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D011Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0124u;
}
