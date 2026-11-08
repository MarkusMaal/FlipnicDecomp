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

// Function: entry_001e44fc
// Address: 0x1e44fc - 0x1e4518
void entry_001e44fc_0x1e44fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e44fc_0x1e44fc");
#endif

    switch (ctx->pc) {
        case 0x1e450cu: goto label_1e450c;
        default: break;
    }

    ctx->pc = 0x1e44fcu;

    // 0x1e44fc: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E44FCu;
    {
        const bool branch_taken_0x1e44fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44FCu;
        // 0x1e4500: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44fc) {
            ctx->pc = 0x1E451Cu;
            return;
        }
    }
    ctx->pc = 0x1E4504u;
    // 0x1e4504: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x1E4504u;
    SET_GPR_U32(ctx, 31, 0x1E450Cu);
    ctx->pc = 0x1E4508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4504u;
    // 0x1e4508: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1E4504u, 0x1E450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E450Cu;
label_1e450c:
    // 0x1e450c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E450Cu;
    {
        const bool branch_taken_0x1e450c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e450c) {
            ctx->pc = 0x1E4518u;
            return;
        }
    }
    ctx->pc = 0x1E4514u;
    // 0x1e4514: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e4514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e4518u;
}
