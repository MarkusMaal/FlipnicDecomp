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

// Function: entry_001346bc
// Address: 0x1346bc - 0x1346e0
void entry_001346bc_0x1346bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001346bc_0x1346bc");
#endif

    switch (ctx->pc) {
        case 0x1346d0u: goto label_1346d0;
        default: break;
    }

    ctx->pc = 0x1346bcu;

    // 0x1346bc: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x1346bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x1346c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1346C0u;
    {
        const bool branch_taken_0x1346c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346C0u;
        // 0x1346c4: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346c0) {
            ctx->pc = 0x134700u;
            return;
        }
    }
    ctx->pc = 0x1346C8u;
    // 0x1346c8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1346C8u;
    SET_GPR_U32(ctx, 31, 0x1346D0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1346C8u, 0x1346D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346D0u;
label_1346d0:
    // 0x1346d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1346D0u;
    {
        const bool branch_taken_0x1346d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346D0u;
        // 0x1346d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346d0) {
            ctx->pc = 0x1346E0u;
            return;
        }
    }
    ctx->pc = 0x1346D8u;
    // 0x1346d8: 0xc05f490  jal         func_17D240
    ctx->pc = 0x1346D8u;
    SET_GPR_U32(ctx, 31, 0x1346E0u);
    ctx->pc = 0x17D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D240u, 0x1346D8u, 0x1346E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1346E0u;
}
