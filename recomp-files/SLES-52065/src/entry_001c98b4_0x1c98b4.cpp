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

// Function: entry_001c98b4
// Address: 0x1c98b4 - 0x1c98d8
void entry_001c98b4_0x1c98b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c98b4_0x1c98b4");
#endif

    switch (ctx->pc) {
        case 0x1c98c0u: goto label_1c98c0;
        default: break;
    }

    ctx->pc = 0x1c98b4u;

    // 0x1c98b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c98b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c98b8: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1C98B8u;
    SET_GPR_U32(ctx, 31, 0x1C98C0u);
    ctx->pc = 0x1C98BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C98B8u;
    // 0x1c98bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1C98B8u, 0x1C98C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98C0u;
label_1c98c0:
    // 0x1c98c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1c98c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1c98c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c98c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c98c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C98C8u;
    {
        const bool branch_taken_0x1c98c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C98CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98C8u;
        // 0x1c98cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98c8) {
            ctx->pc = 0x1C98DCu;
            return;
        }
    }
    ctx->pc = 0x1C98D0u;
    // 0x1c98d0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C98D0u;
    SET_GPR_U32(ctx, 31, 0x1C98D8u);
    ctx->pc = 0x1C98D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C98D0u;
    // 0x1c98d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C98D0u, 0x1C98D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98D8u;
}
