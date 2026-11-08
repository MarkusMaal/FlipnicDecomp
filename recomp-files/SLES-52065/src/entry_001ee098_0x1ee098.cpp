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

// Function: entry_001ee098
// Address: 0x1ee098 - 0x1ee0ac
void entry_001ee098_0x1ee098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee098_0x1ee098");
#endif

    switch (ctx->pc) {
        case 0x1ee0a4u: goto label_1ee0a4;
        default: break;
    }

    ctx->pc = 0x1ee098u;

    // 0x1ee098: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1ee098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1ee09c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EE09Cu;
    SET_GPR_U32(ctx, 31, 0x1EE0A4u);
    ctx->pc = 0x1EE0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE09Cu;
    // 0x1ee0a0: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EE09Cu, 0x1EE0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE0A4u;
label_1ee0a4:
    // 0x1ee0a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE0A4u;
    {
        const bool branch_taken_0x1ee0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE0A4u;
        // 0x1ee0a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee0a4) {
            ctx->pc = 0x1EE0C4u;
            return;
        }
    }
    ctx->pc = 0x1EE0ACu;
}
