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

// Function: entry_00202e8c
// Address: 0x202e8c - 0x202ea4
void entry_00202e8c_0x202e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202e8c_0x202e8c");
#endif

    switch (ctx->pc) {
        case 0x202e9cu: goto label_202e9c;
        default: break;
    }

    ctx->pc = 0x202e8cu;

    // 0x202e8c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x202e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x202e90: 0xdc255178  ld          $a1, 0x5178($at)
    ctx->pc = 0x202e90u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x225178u));
    // 0x202e94: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202E94u;
    SET_GPR_U32(ctx, 31, 0x202E9Cu);
    ctx->pc = 0x202E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E94u;
    // 0x202e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202E94u, 0x202E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E9Cu;
label_202e9c:
    // 0x202e9c: 0x4420085  bltzl       $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x202E9Cu;
    {
        const bool branch_taken_0x202e9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x202e9c) {
            ctx->pc = 0x202EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202E9Cu;
            // 0x202ea0: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2030B4u;
            return;
        }
    }
    ctx->pc = 0x202EA4u;
}
