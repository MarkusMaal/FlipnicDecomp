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

// Function: entry_0018a8b8
// Address: 0x18a8b8 - 0x18a8f4
void entry_0018a8b8_0x18a8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a8b8_0x18a8b8");
#endif

    switch (ctx->pc) {
        case 0x18a8c0u: goto label_18a8c0;
        case 0x18a8ccu: goto label_18a8cc;
        default: break;
    }

    ctx->pc = 0x18a8b8u;

label_18a8b8:
    // 0x18a8b8: 0xc062cf0  jal         func_18B3C0
    ctx->pc = 0x18A8B8u;
    SET_GPR_U32(ctx, 31, 0x18A8C0u);
    ctx->pc = 0x18A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8B8u;
    // 0x18a8bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B3C0u, 0x18A8B8u, 0x18A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8C0u;
label_18a8c0:
    // 0x18a8c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18a8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8c4: 0xc062b20  jal         func_18AC80
    ctx->pc = 0x18A8C4u;
    SET_GPR_U32(ctx, 31, 0x18A8CCu);
    ctx->pc = 0x18A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8C4u;
    // 0x18a8c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AC80u, 0x18A8C4u, 0x18A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8CCu;
label_18a8cc:
    // 0x18a8cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a8d0: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x18a8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18a8d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A8D4u;
    {
        const bool branch_taken_0x18a8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8D4u;
        // 0x18a8d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8d4) {
            ctx->pc = 0x18A8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a8b8;
        }
    }
    ctx->pc = 0x18A8DCu;
    // 0x18a8dc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x18a8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x18a8e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18a8e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18a8e4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A8E4u;
    {
        const bool branch_taken_0x18a8e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8E4u;
        // 0x18a8e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8e4) {
            ctx->pc = 0x18A8F8u;
            return;
        }
    }
    ctx->pc = 0x18A8ECu;
    // 0x18a8ec: 0xc0401a4  jal         func_100690
    ctx->pc = 0x18A8ECu;
    SET_GPR_U32(ctx, 31, 0x18A8F4u);
    ctx->pc = 0x18A8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8ECu;
    // 0x18a8f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x18A8ECu, 0x18A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8F4u;
}
