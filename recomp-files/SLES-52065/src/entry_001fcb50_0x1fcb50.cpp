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

// Function: entry_001fcb50
// Address: 0x1fcb50 - 0x1fcb78
void entry_001fcb50_0x1fcb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcb50_0x1fcb50");
#endif

    switch (ctx->pc) {
        case 0x1fcb60u: goto label_1fcb60;
        case 0x1fcb70u: goto label_1fcb70;
        default: break;
    }

    ctx->pc = 0x1fcb50u;

    // 0x1fcb50: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x1fcb50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x1fcb54: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1fcb54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1fcb58: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FCB58u;
    SET_GPR_U32(ctx, 31, 0x1FCB60u);
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FCB58u, 0x1FCB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB60u;
label_1fcb60:
    // 0x1fcb60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fcb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fcb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb68: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FCB68u;
    SET_GPR_U32(ctx, 31, 0x1FCB70u);
    ctx->pc = 0x1FCB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB68u;
    // 0x1fcb6c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FCB68u, 0x1FCB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB70u;
label_1fcb70:
    // 0x1fcb70: 0x10400204  beqz        $v0, . + 4 + (0x204 << 2)
    ctx->pc = 0x1FCB70u;
    {
        const bool branch_taken_0x1fcb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB70u;
        // 0x1fcb74: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb70) {
            ctx->pc = 0x1FD384u;
            return;
        }
    }
    ctx->pc = 0x1FCB78u;
}
