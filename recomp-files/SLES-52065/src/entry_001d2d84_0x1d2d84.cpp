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

// Function: entry_001d2d84
// Address: 0x1d2d84 - 0x1d2db4
void entry_001d2d84_0x1d2d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2d84_0x1d2d84");
#endif

    switch (ctx->pc) {
        case 0x1d2d8cu: goto label_1d2d8c;
        case 0x1d2d9cu: goto label_1d2d9c;
        default: break;
    }

    ctx->pc = 0x1d2d84u;

    // 0x1d2d84: 0xc07e18a  jal         func_1F8628
    ctx->pc = 0x1D2D84u;
    SET_GPR_U32(ctx, 31, 0x1D2D8Cu);
    ctx->pc = 0x1D2D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D84u;
    // 0x1d2d88: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8628u, 0x1D2D84u, 0x1D2D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D8Cu;
label_1d2d8c:
    // 0x1d2d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d94: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2D94u;
    SET_GPR_U32(ctx, 31, 0x1D2D9Cu);
    ctx->pc = 0x1D2D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D94u;
    // 0x1d2d98: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2D94u, 0x1D2D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D9Cu;
label_1d2d9c:
    // 0x1d2d9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2da0: 0x8c2303a0  lw          $v1, 0x3A0($at)
    ctx->pc = 0x1d2da0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3703A0u));
    // 0x1d2da4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2da8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2dac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D2DACu;
    {
        const bool branch_taken_0x1d2dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DACu;
        // 0x1d2db0: 0xac2303a0  sw          $v1, 0x3A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2dac) {
            ctx->pc = 0x1D2DD8u;
            return;
        }
    }
    ctx->pc = 0x1D2DB4u;
}
