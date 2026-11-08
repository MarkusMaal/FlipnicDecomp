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

// Function: entry_001fc428
// Address: 0x1fc428 - 0x1fc44c
void entry_001fc428_0x1fc428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc428_0x1fc428");
#endif

    switch (ctx->pc) {
        case 0x1fc430u: goto label_1fc430;
        case 0x1fc448u: goto label_1fc448;
        default: break;
    }

    ctx->pc = 0x1fc428u;

    // 0x1fc428: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FC428u;
    SET_GPR_U32(ctx, 31, 0x1FC430u);
    ctx->pc = 0x1FC42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC428u;
    // 0x1fc42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FC428u, 0x1FC430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC430u;
label_1fc430:
    // 0x1fc430: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC430u;
    {
        const bool branch_taken_0x1fc430 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1FC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC430u;
        // 0x1fc434: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc430) {
            ctx->pc = 0x1FC44Cu;
            return;
        }
    }
    ctx->pc = 0x1FC438u;
    // 0x1fc438: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1fc438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1fc43c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1fc43cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1fc440: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1FC440u;
    SET_GPR_U32(ctx, 31, 0x1FC448u);
    ctx->pc = 0x1FC444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC440u;
    // 0x1fc444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1FC440u, 0x1FC448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC448u;
label_1fc448:
    // 0x1fc448: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1fc448u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fc44cu;
}
