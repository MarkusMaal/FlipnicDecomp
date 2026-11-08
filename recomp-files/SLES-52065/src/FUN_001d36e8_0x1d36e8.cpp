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

// Function: FUN_001d36e8
// Address: 0x1d36e8 - 0x1d3724
void FUN_001d36e8_0x1d36e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d36e8_0x1d36e8");
#endif

    switch (ctx->pc) {
        case 0x1d36f8u: goto label_1d36f8;
        default: break;
    }

    ctx->pc = 0x1d36e8u;

    // 0x1d36e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d36ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d36ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d36f0: 0x24420448  addiu       $v0, $v0, 0x448
    ctx->pc = 0x1d36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1096));
    // 0x1d36f4: 0x0  nop
    ctx->pc = 0x1d36f4u;
    // NOP
label_1d36f8:
    // 0x1d36f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d36f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d36fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d36fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d3700: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d3700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d3704: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x1d3704u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d3708: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x1d3708u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d370c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d370cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d3710: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1d3710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1d3714: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D3714u;
    {
        const bool branch_taken_0x1d3714 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3714u;
        // 0x1d3718: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3714) {
            ctx->pc = 0x1D36F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d36f8;
        }
    }
    ctx->pc = 0x1D371Cu;
    // 0x1d371c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D371Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D371Cu;
        // 0x1d3720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D371Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3724u;
}
