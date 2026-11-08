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

// Function: entry_00164858
// Address: 0x164858 - 0x164874
void entry_00164858_0x164858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164858_0x164858");
#endif

    switch (ctx->pc) {
        case 0x164864u: goto label_164864;
        default: break;
    }

    ctx->pc = 0x164858u;

    // 0x164858: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x164858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16485c: 0xc058d4c  jal         func_163530
    ctx->pc = 0x16485Cu;
    SET_GPR_U32(ctx, 31, 0x164864u);
    ctx->pc = 0x164860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16485Cu;
    // 0x164860: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163530u, 0x16485Cu, 0x164864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164864u;
label_164864:
    // 0x164864: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164864u;
    {
        const bool branch_taken_0x164864 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x164868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164864u;
        // 0x164868: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164864) {
            ctx->pc = 0x164874u;
            return;
        }
    }
    ctx->pc = 0x16486Cu;
    // 0x16486c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x16486Cu;
    {
        const bool branch_taken_0x16486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16486Cu;
        // 0x164870: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16486c) {
            ctx->pc = 0x164900u;
            return;
        }
    }
    ctx->pc = 0x164874u;
}
