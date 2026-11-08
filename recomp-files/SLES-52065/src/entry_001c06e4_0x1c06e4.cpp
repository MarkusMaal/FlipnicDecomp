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

// Function: entry_001c06e4
// Address: 0x1c06e4 - 0x1c0708
void entry_001c06e4_0x1c06e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c06e4_0x1c06e4");
#endif

    switch (ctx->pc) {
        case 0x1c06f0u: goto label_1c06f0;
        default: break;
    }

    ctx->pc = 0x1c06e4u;

    // 0x1c06e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c06e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c06e8: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1C06E8u;
    SET_GPR_U32(ctx, 31, 0x1C06F0u);
    ctx->pc = 0x1C06ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C06E8u;
    // 0x1c06ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1C06E8u, 0x1C06F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06F0u;
label_1c06f0:
    // 0x1c06f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1c06f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1c06f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c06f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c06f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C06F8u;
    {
        const bool branch_taken_0x1c06f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06F8u;
        // 0x1c06fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06f8) {
            ctx->pc = 0x1C070Cu;
            return;
        }
    }
    ctx->pc = 0x1C0700u;
    // 0x1c0700: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C0700u;
    SET_GPR_U32(ctx, 31, 0x1C0708u);
    ctx->pc = 0x1C0704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0700u;
    // 0x1c0704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C0700u, 0x1C0708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0708u;
}
