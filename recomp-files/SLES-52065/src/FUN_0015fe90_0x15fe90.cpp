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

// Function: FUN_0015fe90
// Address: 0x15fe90 - 0x15fed0
void FUN_0015fe90_0x15fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015fe90_0x15fe90");
#endif

    switch (ctx->pc) {
        case 0x15fe9cu: goto label_15fe9c;
        default: break;
    }

    ctx->pc = 0x15fe90u;

    // 0x15fe90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15fe90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15fe94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15fe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15fe9c:
    // 0x15fe9c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x15fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15fea0: 0x84630228  lh          $v1, 0x228($v1)
    ctx->pc = 0x15fea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 552)));
    // 0x15fea4: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FEA4u;
    {
        const bool branch_taken_0x15fea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x15fea4) {
            ctx->pc = 0x15FEB4u;
            goto label_15feb4;
        }
    }
    ctx->pc = 0x15FEACu;
    // 0x15feac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15FEACu;
    {
        const bool branch_taken_0x15feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15feac) {
            ctx->pc = 0x15FEC8u;
            goto label_15fec8;
        }
    }
    ctx->pc = 0x15FEB4u;
label_15feb4:
    // 0x15feb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15feb8: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x15feb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15febc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15FEBCu;
    {
        const bool branch_taken_0x15febc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEBCu;
        // 0x15fec0: 0x24c603d0  addiu       $a2, $a2, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15febc) {
            ctx->pc = 0x15FE9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fe9c;
        }
    }
    ctx->pc = 0x15FEC4u;
    // 0x15fec4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x15fec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15fec8:
    // 0x15fec8: 0x3e00008  jr          $ra
    ctx->pc = 0x15FEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FED0u;
}
