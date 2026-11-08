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

// Function: entry_001e349c
// Address: 0x1e349c - 0x1e34b8
void entry_001e349c_0x1e349c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e349c_0x1e349c");
#endif

    switch (ctx->pc) {
        case 0x1e34acu: goto label_1e34ac;
        default: break;
    }

    ctx->pc = 0x1e349cu;

    // 0x1e349c: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E349Cu;
    {
        const bool branch_taken_0x1e349c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E349Cu;
        // 0x1e34a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e349c) {
            ctx->pc = 0x1E34BCu;
            return;
        }
    }
    ctx->pc = 0x1E34A4u;
    // 0x1e34a4: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x1E34A4u;
    SET_GPR_U32(ctx, 31, 0x1E34ACu);
    ctx->pc = 0x1E34A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E34A4u;
    // 0x1e34a8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1E34A4u, 0x1E34ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E34ACu;
label_1e34ac:
    // 0x1e34ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E34ACu;
    {
        const bool branch_taken_0x1e34ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e34ac) {
            ctx->pc = 0x1E34B8u;
            return;
        }
    }
    ctx->pc = 0x1E34B4u;
    // 0x1e34b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e34b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e34b8u;
}
