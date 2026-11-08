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

// Function: entry_00119fdc
// Address: 0x119fdc - 0x11a008
void entry_00119fdc_0x119fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119fdc_0x119fdc");
#endif

    switch (ctx->pc) {
        case 0x119fe8u: goto label_119fe8;
        default: break;
    }

    ctx->pc = 0x119fdcu;

label_119fdc:
    // 0x119fdc: 0x0  nop
    ctx->pc = 0x119fdcu;
    // NOP
    // 0x119fe0: 0xc07ce64  jal         func_1F3990
    ctx->pc = 0x119FE0u;
    SET_GPR_U32(ctx, 31, 0x119FE8u);
    ctx->pc = 0x1F3990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3990u, 0x119FE0u, 0x119FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FE8u;
label_119fe8:
    // 0x119fe8: 0x0  nop
    ctx->pc = 0x119fe8u;
    // NOP
    // 0x119fec: 0x0  nop
    ctx->pc = 0x119fecu;
    // NOP
    // 0x119ff0: 0x0  nop
    ctx->pc = 0x119ff0u;
    // NOP
    // 0x119ff4: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x119FF4u;
    {
        const bool branch_taken_0x119ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119ff4) {
            ctx->pc = 0x119FDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119fdc;
        }
    }
    ctx->pc = 0x119FFCu;
    // 0x119ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a000: 0x3e00008  jr          $ra
    ctx->pc = 0x11A000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A000u;
        // 0x11a004: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A008u;
}
