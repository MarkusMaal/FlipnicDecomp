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

// Function: entry_001eca64
// Address: 0x1eca64 - 0x1eca80
void entry_001eca64_0x1eca64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eca64_0x1eca64");
#endif

    ctx->pc = 0x1eca64u;

    // 0x1eca64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1eca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eca68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECA68u;
    {
        const bool branch_taken_0x1eca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eca68) {
            ctx->pc = 0x1ECA80u;
            return;
        }
    }
    ctx->pc = 0x1ECA70u;
    // 0x1eca70: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1eca70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1eca74: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1eca74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eca78: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1ECA78u;
    SET_GPR_U32(ctx, 31, 0x1ECA80u);
    ctx->pc = 0x1ECA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECA78u;
    // 0x1eca7c: 0x24844258  addiu       $a0, $a0, 0x4258 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1ECA78u, 0x1ECA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA80u;
}
