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

// Function: entry_001d5da8
// Address: 0x1d5da8 - 0x1d5df8
void entry_001d5da8_0x1d5da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5da8_0x1d5da8");
#endif

    switch (ctx->pc) {
        case 0x1d5de8u: goto label_1d5de8;
        default: break;
    }

    ctx->pc = 0x1d5da8u;

label_1d5da8:
    // 0x1d5da8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d5da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d5dac: 0xac52fffc  sw          $s2, -0x4($v0)
    ctx->pc = 0x1d5dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 18));
    // 0x1d5db0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1d5db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x1d5db4: 0x0  nop
    ctx->pc = 0x1d5db4u;
    // NOP
    // 0x1d5db8: 0x0  nop
    ctx->pc = 0x1d5db8u;
    // NOP
    // 0x1d5dbc: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5DBCu;
    {
        const bool branch_taken_0x1d5dbc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1D5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DBCu;
        // 0x1d5dc0: 0x24420074  addiu       $v0, $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5dbc) {
            ctx->pc = 0x1D5DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5da8;
        }
    }
    ctx->pc = 0x1D5DC4u;
    // 0x1d5dc4: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d5dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5dc8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d5dcc: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1d5dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5dd0: 0x24420558  addiu       $v0, $v0, 0x558
    ctx->pc = 0x1d5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1368));
    // 0x1d5dd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dd8: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x1d5dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d5ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5de0: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D5DE0u;
    SET_GPR_U32(ctx, 31, 0x1D5DE8u);
    ctx->pc = 0x1D5DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DE0u;
    // 0x1d5de4: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D5DE0u, 0x1D5DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DE8u;
label_1d5de8:
    // 0x1d5de8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5dec: 0x60000da  bltz        $s0, . + 4 + (0xDA << 2)
    ctx->pc = 0x1D5DECu;
    {
        const bool branch_taken_0x1d5dec = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1d5dec) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5DF4u;
    // 0x1d5df4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d5df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x1d5df8u;
}
