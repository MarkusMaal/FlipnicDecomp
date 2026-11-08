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

// Function: entry_0018b694
// Address: 0x18b694 - 0x18b6c8
void entry_0018b694_0x18b694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b694_0x18b694");
#endif

    switch (ctx->pc) {
        case 0x18b6a4u: goto label_18b6a4;
        case 0x18b6b4u: goto label_18b6b4;
        default: break;
    }

    ctx->pc = 0x18b694u;

    // 0x18b694: 0x0  nop
    ctx->pc = 0x18b694u;
    // NOP
    // 0x18b698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b69c: 0xc053408  jal         func_14D020
    ctx->pc = 0x18B69Cu;
    SET_GPR_U32(ctx, 31, 0x18B6A4u);
    ctx->pc = 0x18B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B69Cu;
    // 0x18b6a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D020u, 0x18B69Cu, 0x18B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B6A4u;
label_18b6a4:
    // 0x18b6a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18b6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18b6a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6ac: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x18B6ACu;
    SET_GPR_U32(ctx, 31, 0x18B6B4u);
    ctx->pc = 0x18B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B6ACu;
    // 0x18b6b0: 0x24a5fd00  addiu       $a1, $a1, -0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x18B6ACu, 0x18B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B6B4u;
label_18b6b4:
    // 0x18b6b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18b6b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6b8: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6B8u;
    {
        const bool branch_taken_0x18b6b8 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x18b6b8) {
            ctx->pc = 0x18B6C8u;
            return;
        }
    }
    ctx->pc = 0x18B6C0u;
    // 0x18b6c0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x18B6C0u;
    {
        const bool branch_taken_0x18b6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6C0u;
        // 0x18b6c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6c0) {
            ctx->pc = 0x18B870u;
            return;
        }
    }
    ctx->pc = 0x18B6C8u;
}
