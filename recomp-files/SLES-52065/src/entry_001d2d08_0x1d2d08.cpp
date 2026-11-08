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

// Function: entry_001d2d08
// Address: 0x1d2d08 - 0x1d2d48
void entry_001d2d08_0x1d2d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2d08_0x1d2d08");
#endif

    switch (ctx->pc) {
        case 0x1d2d20u: goto label_1d2d20;
        case 0x1d2d30u: goto label_1d2d30;
        default: break;
    }

    ctx->pc = 0x1d2d08u;

    // 0x1d2d08: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1d2d08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d14: 0x24c60350  addiu       $a2, $a2, 0x350
    ctx->pc = 0x1d2d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 848));
    // 0x1d2d18: 0xc07e132  jal         func_1F84C8
    ctx->pc = 0x1D2D18u;
    SET_GPR_U32(ctx, 31, 0x1D2D20u);
    ctx->pc = 0x1D2D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D18u;
    // 0x1d2d1c: 0x24070202  addiu       $a3, $zero, 0x202 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C8u, 0x1D2D18u, 0x1D2D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D20u;
label_1d2d20:
    // 0x1d2d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d28: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2D28u;
    SET_GPR_U32(ctx, 31, 0x1D2D30u);
    ctx->pc = 0x1D2D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D28u;
    // 0x1d2d2c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2D28u, 0x1D2D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D30u;
label_1d2d30:
    // 0x1d2d30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d34: 0x8c2303a0  lw          $v1, 0x3A0($at)
    ctx->pc = 0x1d2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3703A0u));
    // 0x1d2d38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2d3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d40: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D2D40u;
    {
        const bool branch_taken_0x1d2d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D40u;
        // 0x1d2d44: 0xac2303a0  sw          $v1, 0x3A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d40) {
            ctx->pc = 0x1D2DD8u;
            return;
        }
    }
    ctx->pc = 0x1D2D48u;
}
