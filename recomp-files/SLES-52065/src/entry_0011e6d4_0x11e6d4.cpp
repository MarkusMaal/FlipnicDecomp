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

// Function: entry_0011e6d4
// Address: 0x11e6d4 - 0x11e708
void entry_0011e6d4_0x11e6d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e6d4_0x11e6d4");
#endif

    switch (ctx->pc) {
        case 0x11e6dcu: goto label_11e6dc;
        case 0x11e6f4u: goto label_11e6f4;
        default: break;
    }

    ctx->pc = 0x11e6d4u;

    // 0x11e6d4: 0xc080664  jal         func_201990
    ctx->pc = 0x11E6D4u;
    SET_GPR_U32(ctx, 31, 0x11E6DCu);
    ctx->pc = 0x11E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6D4u;
    // 0x11e6d8: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11E6D4u, 0x11E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6DCu;
label_11e6dc:
    // 0x11e6dc: 0x8e420538  lw          $v0, 0x538($s2)
    ctx->pc = 0x11e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1336)));
    // 0x11e6e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11e6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e6e4: 0x14450015  bne         $v0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E6E4u;
    {
        const bool branch_taken_0x11e6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x11E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6E4u;
        // 0x11e6e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6e4) {
            ctx->pc = 0x11E73Cu;
            return;
        }
    }
    ctx->pc = 0x11E6ECu;
    // 0x11e6ec: 0xc07bdf0  jal         func_1EF7C0
    ctx->pc = 0x11E6ECu;
    SET_GPR_U32(ctx, 31, 0x11E6F4u);
    ctx->pc = 0x11E6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6ECu;
    // 0x11e6f0: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF7C0u, 0x11E6ECu, 0x11E6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6F4u;
label_11e6f4:
    // 0x11e6f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11e6f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6f8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E6F8u;
    {
        const bool branch_taken_0x11e6f8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x11E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6F8u;
        // 0x11e6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6f8) {
            ctx->pc = 0x11E708u;
            return;
        }
    }
    ctx->pc = 0x11E700u;
    // 0x11e700: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x11E700u;
    {
        const bool branch_taken_0x11e700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E700u;
        // 0x11e704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e700) {
            ctx->pc = 0x11E8C8u;
            return;
        }
    }
    ctx->pc = 0x11E708u;
}
