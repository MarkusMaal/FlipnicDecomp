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

// Function: FUN_002095e0
// Address: 0x2095e0 - 0x209614
void FUN_002095e0_0x2095e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002095e0_0x2095e0");
#endif

    switch (ctx->pc) {
        case 0x2095f0u: goto label_2095f0;
        default: break;
    }

    ctx->pc = 0x2095e0u;

    // 0x2095e0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2095E0u;
    {
        const bool branch_taken_0x2095e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2095E0u;
        // 0x2095e4: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095e0) {
            ctx->pc = 0x20960Cu;
            goto label_20960c;
        }
    }
    ctx->pc = 0x2095E8u;
    // 0x2095e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2095e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2095ec: 0x0  nop
    ctx->pc = 0x2095ecu;
    // NOP
label_2095f0:
    // 0x2095f0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2095f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2095f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2095f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2095f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2095f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2095fc: 0x0  nop
    ctx->pc = 0x2095fcu;
    // NOP
    // 0x209600: 0x0  nop
    ctx->pc = 0x209600u;
    // NOP
    // 0x209604: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x209604u;
    {
        const bool branch_taken_0x209604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x209604) {
            ctx->pc = 0x2095F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2095f0;
        }
    }
    ctx->pc = 0x20960Cu;
label_20960c:
    // 0x20960c: 0x3e00008  jr          $ra
    ctx->pc = 0x20960Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20960Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209614u;
}
