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

// Function: entry_00203a68
// Address: 0x203a68 - 0x203a80
void entry_00203a68_0x203a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203a68_0x203a68");
#endif

    switch (ctx->pc) {
        case 0x203a7cu: goto label_203a7c;
        default: break;
    }

    ctx->pc = 0x203a68u;

    // 0x203a68: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x203a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x203a6c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x203A6Cu;
    {
        const bool branch_taken_0x203a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203a6c) {
            ctx->pc = 0x203A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203A6Cu;
            // 0x203a70: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203A80u;
            return;
        }
    }
    ctx->pc = 0x203A74u;
    // 0x203a74: 0xc07f5b0  jal         func_1FD6C0
    ctx->pc = 0x203A74u;
    SET_GPR_U32(ctx, 31, 0x203A7Cu);
    ctx->pc = 0x203A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A74u;
    // 0x203a78: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x203A74u, 0x203A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A7Cu;
label_203a7c:
    // 0x203a7c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x203a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x203a80u;
}
