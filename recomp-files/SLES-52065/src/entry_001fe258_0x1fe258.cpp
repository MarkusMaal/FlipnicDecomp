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

// Function: entry_001fe258
// Address: 0x1fe258 - 0x1fe26c
void entry_001fe258_0x1fe258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe258_0x1fe258");
#endif

    switch (ctx->pc) {
        case 0x1fe268u: goto label_1fe268;
        default: break;
    }

    ctx->pc = 0x1fe258u;

    // 0x1fe258: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE258u;
    {
        const bool branch_taken_0x1fe258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe258) {
            ctx->pc = 0x1FE25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE258u;
            // 0x1fe25c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE26Cu;
            return;
        }
    }
    ctx->pc = 0x1FE260u;
    // 0x1fe260: 0xc07f5b0  jal         func_1FD6C0
    ctx->pc = 0x1FE260u;
    SET_GPR_U32(ctx, 31, 0x1FE268u);
    ctx->pc = 0x1FE264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE260u;
    // 0x1fe264: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x1FE260u, 0x1FE268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE268u;
label_1fe268:
    // 0x1fe268: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1fe268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x1fe26cu;
}
