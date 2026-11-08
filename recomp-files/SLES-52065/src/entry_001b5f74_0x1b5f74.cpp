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

// Function: entry_001b5f74
// Address: 0x1b5f74 - 0x1b5fa0
void entry_001b5f74_0x1b5f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5f74_0x1b5f74");
#endif

    switch (ctx->pc) {
        case 0x1b5f8cu: goto label_1b5f8c;
        default: break;
    }

    ctx->pc = 0x1b5f74u;

    // 0x1b5f74: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B5F74u;
    {
        const bool branch_taken_0x1b5f74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F74u;
        // 0x1b5f78: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f74) {
            ctx->pc = 0x1B5FA4u;
            return;
        }
    }
    ctx->pc = 0x1B5F7Cu;
    // 0x1b5f7c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5F7Cu;
    {
        const bool branch_taken_0x1b5f7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F7Cu;
        // 0x1b5f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f7c) {
            ctx->pc = 0x1B5FA0u;
            return;
        }
    }
    ctx->pc = 0x1B5F84u;
    // 0x1b5f84: 0xc04fc50  jal         func_13F140
    ctx->pc = 0x1B5F84u;
    SET_GPR_U32(ctx, 31, 0x1B5F8Cu);
    ctx->pc = 0x13F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F140u, 0x1B5F84u, 0x1B5F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5F8Cu;
label_1b5f8c:
    // 0x1b5f8c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1b5f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1b5f90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5F90u;
    {
        const bool branch_taken_0x1b5f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F90u;
        // 0x1b5f94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f90) {
            ctx->pc = 0x1B5FA0u;
            return;
        }
    }
    ctx->pc = 0x1B5F98u;
    // 0x1b5f98: 0xc04f118  jal         func_13C460
    ctx->pc = 0x1B5F98u;
    SET_GPR_U32(ctx, 31, 0x1B5FA0u);
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x1B5F98u, 0x1B5FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5FA0u;
}
