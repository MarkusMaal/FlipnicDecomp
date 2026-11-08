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

// Function: entry_001e609c
// Address: 0x1e609c - 0x1e60b8
void entry_001e609c_0x1e609c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e609c_0x1e609c");
#endif

    switch (ctx->pc) {
        case 0x1e60b0u: goto label_1e60b0;
        default: break;
    }

    ctx->pc = 0x1e609cu;

    // 0x1e609c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1e609cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e60a0: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1e60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e60a4: 0x27a50046  addiu       $a1, $sp, 0x46
    ctx->pc = 0x1e60a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 70));
    // 0x1e60a8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1E60A8u;
    SET_GPR_U32(ctx, 31, 0x1E60B0u);
    ctx->pc = 0x1E60ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60A8u;
    // 0x1e60ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E60A8u, 0x1E60B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60B0u;
label_1e60b0:
    // 0x1e60b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E60B0u;
    {
        const bool branch_taken_0x1e60b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e60b0) {
            ctx->pc = 0x1E60C4u;
            return;
        }
    }
    ctx->pc = 0x1E60B8u;
}
