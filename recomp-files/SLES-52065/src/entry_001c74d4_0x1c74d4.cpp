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

// Function: entry_001c74d4
// Address: 0x1c74d4 - 0x1c74ec
void entry_001c74d4_0x1c74d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c74d4_0x1c74d4");
#endif

    switch (ctx->pc) {
        case 0x1c74e0u: goto label_1c74e0;
        default: break;
    }

    ctx->pc = 0x1c74d4u;

    // 0x1c74d4: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c74d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c74d8: 0xc0747ec  jal         func_1D1FB0
    ctx->pc = 0x1C74D8u;
    SET_GPR_U32(ctx, 31, 0x1C74E0u);
    ctx->pc = 0x1C74DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74D8u;
    // 0x1c74dc: 0x24a520b8  addiu       $a1, $a1, 0x20B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1FB0u, 0x1C74D8u, 0x1C74E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74E0u;
label_1c74e0:
    // 0x1c74e0: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1c74e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c74e4: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1C74E4u;
    {
        const bool branch_taken_0x1c74e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74E4u;
        // 0x1c74e8: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74e4) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C74ECu;
}
