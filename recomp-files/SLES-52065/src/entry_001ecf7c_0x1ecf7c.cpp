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

// Function: entry_001ecf7c
// Address: 0x1ecf7c - 0x1ecfa0
void entry_001ecf7c_0x1ecf7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecf7c_0x1ecf7c");
#endif

    switch (ctx->pc) {
        case 0x1ecf8cu: goto label_1ecf8c;
        default: break;
    }

    ctx->pc = 0x1ecf7cu;

    // 0x1ecf7c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1ecf7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1ecf80: 0xdc254288  ld          $a1, 0x4288($at)
    ctx->pc = 0x1ecf80u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x224288u));
    // 0x1ecf84: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1ECF84u;
    SET_GPR_U32(ctx, 31, 0x1ECF8Cu);
    ctx->pc = 0x1ECF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF84u;
    // 0x1ecf88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1ECF84u, 0x1ECF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECF8Cu;
label_1ecf8c:
    // 0x1ecf8c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ECF8Cu;
    {
        const bool branch_taken_0x1ecf8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ECF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF8Cu;
        // 0x1ecf90: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf8c) {
            ctx->pc = 0x1ECFD4u;
            return;
        }
    }
    ctx->pc = 0x1ECF94u;
    // 0x1ecf94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ECF94u;
    {
        const bool branch_taken_0x1ecf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecf94) {
            ctx->pc = 0x1ECFB4u;
            return;
        }
    }
    ctx->pc = 0x1ECF9Cu;
    // 0x1ecf9c: 0x0  nop
    ctx->pc = 0x1ecf9cu;
    // NOP
    ctx->pc = 0x1ecfa0u;
}
