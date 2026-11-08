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

// Function: entry_001ca75c
// Address: 0x1ca75c - 0x1ca78c
void entry_001ca75c_0x1ca75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca75c_0x1ca75c");
#endif

    ctx->pc = 0x1ca75cu;

    // 0x1ca75c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x1ca75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ca760: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1ca760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca764: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA764u;
    {
        const bool branch_taken_0x1ca764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA764u;
        // 0x1ca768: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca764) {
            ctx->pc = 0x1CA78Cu;
            return;
        }
    }
    ctx->pc = 0x1CA76Cu;
    // 0x1ca76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca770: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ca770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ca774: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1ca774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ca778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca77c: 0x260a0068  addiu       $t2, $s0, 0x68
    ctx->pc = 0x1ca77cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1ca780: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1ca780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca784: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CA784u;
    SET_GPR_U32(ctx, 31, 0x1CA78Cu);
    ctx->pc = 0x1CA788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA784u;
    // 0x1ca788: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CA784u, 0x1CA78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA78Cu;
}
