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

// Function: entry_001c9474
// Address: 0x1c9474 - 0x1c94c0
void entry_001c9474_0x1c9474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9474_0x1c9474");
#endif

    switch (ctx->pc) {
        case 0x1c9484u: goto label_1c9484;
        default: break;
    }

    ctx->pc = 0x1c9474u;

    // 0x1c9474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9478: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c9478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c947c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C947Cu;
    SET_GPR_U32(ctx, 31, 0x1C9484u);
    ctx->pc = 0x1C9480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C947Cu;
    // 0x1c9480: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C947Cu, 0x1C9484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9484u;
label_1c9484:
    // 0x1c9484: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c9484u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c9488: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c948c: 0x8c24f8b8  lw          $a0, -0x748($at)
    ctx->pc = 0x1c948cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c9490: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c9490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9494: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C9494u;
    {
        const bool branch_taken_0x1c9494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9494u;
        // 0x1c9498: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9494) {
            ctx->pc = 0x1C94DCu;
            return;
        }
    }
    ctx->pc = 0x1C949Cu;
    // 0x1c949c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c94a0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C94A0u;
    {
        const bool branch_taken_0x1c94a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94A0u;
        // 0x1c94a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94a0) {
            ctx->pc = 0x1C94C0u;
            return;
        }
    }
    ctx->pc = 0x1C94A8u;
    // 0x1c94a8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C94A8u;
    {
        const bool branch_taken_0x1c94a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c94a8) {
            ctx->pc = 0x1C94C0u;
            return;
        }
    }
    ctx->pc = 0x1C94B0u;
    // 0x1c94b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C94B0u;
    {
        const bool branch_taken_0x1c94b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c94b0) {
            ctx->pc = 0x1C94C0u;
            return;
        }
    }
    ctx->pc = 0x1C94B8u;
    // 0x1c94b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C94B8u;
    {
        const bool branch_taken_0x1c94b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c94b8) {
            ctx->pc = 0x1C94D8u;
            return;
        }
    }
    ctx->pc = 0x1C94C0u;
}
