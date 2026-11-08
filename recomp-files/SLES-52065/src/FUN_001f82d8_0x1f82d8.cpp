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

// Function: FUN_001f82d8
// Address: 0x1f82d8 - 0x1f8318
void FUN_001f82d8_0x1f82d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f82d8_0x1f82d8");
#endif

    switch (ctx->pc) {
        case 0x1f82fcu: goto label_1f82fc;
        default: break;
    }

    ctx->pc = 0x1f82d8u;

    // 0x1f82d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f82d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f82dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f82dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f82e0: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1f82e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1f82e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f82e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f82e8: 0x8e04d6bc  lw          $a0, -0x2944($s0)
    ctx->pc = 0x1f82e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D6BCu));
    // 0x1f82ec: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F82ECu;
    {
        const bool branch_taken_0x1f82ec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1F82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82ECu;
        // 0x1f82f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82ec) {
            ctx->pc = 0x1F8308u;
            goto label_1f8308;
        }
    }
    ctx->pc = 0x1F82F4u;
    // 0x1f82f4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F82F4u;
    SET_GPR_U32(ctx, 31, 0x1F82FCu);
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F82F4u, 0x1F82FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F82FCu;
label_1f82fc:
    // 0x1f82fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f82fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f8300: 0xae03d6bc  sw          $v1, -0x2944($s0)
    ctx->pc = 0x1f8300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294956732), GPR_U32(ctx, 3));
    // 0x1f8304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f8304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8308:
    // 0x1f8308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f830c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f830cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8310: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8310u;
        // 0x1f8314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8318u;
}
