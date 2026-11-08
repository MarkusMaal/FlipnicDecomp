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

// Function: FUN_001d3870
// Address: 0x1d3870 - 0x1d38d8
void FUN_001d3870_0x1d3870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3870_0x1d3870");
#endif

    switch (ctx->pc) {
        case 0x1d3898u: goto label_1d3898;
        case 0x1d38acu: goto label_1d38ac;
        default: break;
    }

    ctx->pc = 0x1d3870u;

    // 0x1d3870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3874: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d3874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d3878: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d3878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d387c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d387cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3880: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d3880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3884: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3888: 0x24510480  addiu       $s1, $v0, 0x480
    ctx->pc = 0x1d3888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x1d388c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d388cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d3890: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d3890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3894: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d3894u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x370480u));
label_1d3898:
    // 0x1d3898: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3898u;
    {
        const bool branch_taken_0x1d3898 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3898u;
        // 0x1d389c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3898) {
            ctx->pc = 0x1D38ACu;
            goto label_1d38ac;
        }
    }
    ctx->pc = 0x1D38A0u;
    // 0x1d38a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d38a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38a4: 0xc07725e  jal         func_1DC978
    ctx->pc = 0x1D38A4u;
    SET_GPR_U32(ctx, 31, 0x1D38ACu);
    ctx->pc = 0x1D38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D38A4u;
    // 0x1d38a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC978u, 0x1D38A4u, 0x1D38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38ACu;
label_1d38ac:
    // 0x1d38ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d38acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d38b0: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1d38b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1d38b4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D38B4u;
    {
        const bool branch_taken_0x1d38b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d38b4) {
            ctx->pc = 0x1D38B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D38B4u;
            // 0x1d38b8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3898;
        }
    }
    ctx->pc = 0x1D38BCu;
    // 0x1d38bc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d38bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d38c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d38c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d38c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d38c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d38c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d38cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d38ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d38d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D38D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38D0u;
        // 0x1d38d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D38D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D38D8u;
}
