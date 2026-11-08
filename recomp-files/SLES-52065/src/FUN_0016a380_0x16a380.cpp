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

// Function: FUN_0016a380
// Address: 0x16a380 - 0x16a3c0
void FUN_0016a380_0x16a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016a380_0x16a380");
#endif

    switch (ctx->pc) {
        case 0x16a3a0u: goto label_16a3a0;
        case 0x16a3a8u: goto label_16a3a8;
        default: break;
    }

    ctx->pc = 0x16a380u;

    // 0x16a380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a384: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x16a384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16a388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a38c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16a38cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a394: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x16a394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a398: 0xc04af2c  jal         func_12BCB0
    ctx->pc = 0x16A398u;
    SET_GPR_U32(ctx, 31, 0x16A3A0u);
    ctx->pc = 0x16A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A398u;
    // 0x16a39c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BCB0u, 0x16A398u, 0x16A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3A0u;
label_16a3a0:
    // 0x16a3a0: 0xc05a8f0  jal         func_16A3C0
    ctx->pc = 0x16A3A0u;
    SET_GPR_U32(ctx, 31, 0x16A3A8u);
    ctx->pc = 0x16A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3A0u;
    // 0x16a3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A3C0u, 0x16A3A0u, 0x16A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3A8u;
label_16a3a8:
    // 0x16a3a8: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x16a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x16a3ac: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x16a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x16a3b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a3b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x16A3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A3B8u;
        // 0x16a3bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A3C0u;
}
