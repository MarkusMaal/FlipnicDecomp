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

// Function: entry_001a3908
// Address: 0x1a3908 - 0x1a3930
void entry_001a3908_0x1a3908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3908_0x1a3908");
#endif

    ctx->pc = 0x1a3908u;

    // 0x1a3908: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x1a3908u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a390c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A390Cu;
    {
        const bool branch_taken_0x1a390c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a390c) {
            ctx->pc = 0x1A3930u;
            return;
        }
    }
    ctx->pc = 0x1A3914u;
    // 0x1a3914: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a3914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x1a3918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a391c: 0x8e270680  lw          $a3, 0x680($s1)
    ctx->pc = 0x1a391cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
    // 0x1a3920: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1a3920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a3924: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a3924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1a3928: 0xc064f7c  jal         func_193DF0
    ctx->pc = 0x1A3928u;
    SET_GPR_U32(ctx, 31, 0x1A3930u);
    ctx->pc = 0x1A392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3928u;
    // 0x1a392c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1A3928u, 0x1A3930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3930u;
}
