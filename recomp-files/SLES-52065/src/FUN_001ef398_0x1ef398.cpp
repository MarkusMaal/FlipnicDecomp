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

// Function: FUN_001ef398
// Address: 0x1ef398 - 0x1ef3e4
void FUN_001ef398_0x1ef398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ef398_0x1ef398");
#endif

    switch (ctx->pc) {
        case 0x1ef3d0u: goto label_1ef3d0;
        default: break;
    }

    ctx->pc = 0x1ef398u;

    // 0x1ef398: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ef398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ef39c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ef39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef3a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ef3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ef3a4: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1ef3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1ef3a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ef3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ef3ac: 0x8e02a464  lw          $v0, -0x5B9C($s0)
    ctx->pc = 0x1ef3acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A464u));
    // 0x1ef3b0: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF3B0u;
    {
        const bool branch_taken_0x1ef3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3B0u;
        // 0x1ef3b4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3b0) {
            ctx->pc = 0x1EF3D8u;
            goto label_1ef3d8;
        }
    }
    ctx->pc = 0x1EF3B8u;
    // 0x1ef3b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef3bc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ef3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1ef3c0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1ef3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1ef3c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ef3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef3c8: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EF3C8u;
    SET_GPR_U32(ctx, 31, 0x1EF3D0u);
    ctx->pc = 0x1EF3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF3C8u;
    // 0x1ef3cc: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EF3C8u, 0x1EF3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3D0u;
label_1ef3d0:
    // 0x1ef3d0: 0xae02a464  sw          $v0, -0x5B9C($s0)
    ctx->pc = 0x1ef3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943844), GPR_U32(ctx, 2));
    // 0x1ef3d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ef3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ef3d8:
    // 0x1ef3d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ef3d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3DCu;
        // 0x1ef3e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF3E4u;
}
