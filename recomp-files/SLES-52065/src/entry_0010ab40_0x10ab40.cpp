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

// Function: entry_0010ab40
// Address: 0x10ab40 - 0x10ab70
void entry_0010ab40_0x10ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ab40_0x10ab40");
#endif

    switch (ctx->pc) {
        case 0x10ab58u: goto label_10ab58;
        default: break;
    }

    ctx->pc = 0x10ab40u;

    // 0x10ab40: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10ab40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10ab44: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10ab44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x10ab48: 0x8e6601d8  lw          $a2, 0x1D8($s3)
    ctx->pc = 0x10ab48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
    // 0x10ab4c: 0x24a5e300  addiu       $a1, $a1, -0x1D00
    ctx->pc = 0x10ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959872));
    // 0x10ab50: 0xc0570f4  jal         func_15C3D0
    ctx->pc = 0x10AB50u;
    SET_GPR_U32(ctx, 31, 0x10AB58u);
    ctx->pc = 0x10AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB50u;
    // 0x10ab54: 0x240704b1  addiu       $a3, $zero, 0x4B1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1201));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C3D0u, 0x10AB50u, 0x10AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB58u;
label_10ab58:
    // 0x10ab58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ab58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab5c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x10ab5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ab60: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x10ab60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x10ab64: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x10AB64u;
    {
        const bool branch_taken_0x10ab64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB64u;
        // 0x10ab68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab64) {
            ctx->pc = 0x10ABA8u;
            return;
        }
    }
    ctx->pc = 0x10AB6Cu;
    // 0x10ab6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10ab6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ab70u;
}
