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

// Function: entry_00168f30
// Address: 0x168f30 - 0x168f50
void entry_00168f30_0x168f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168f30_0x168f30");
#endif

    switch (ctx->pc) {
        case 0x168f44u: goto label_168f44;
        default: break;
    }

    ctx->pc = 0x168f30u;

    // 0x168f30: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x168f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x168f34: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x168f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x168f38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x168f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x168f3c: 0xc0465b8  jal         func_1196E0
    ctx->pc = 0x168F3Cu;
    SET_GPR_U32(ctx, 31, 0x168F44u);
    ctx->pc = 0x168F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F3Cu;
    // 0x168f40: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1196E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1196E0u, 0x168F3Cu, 0x168F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F44u;
label_168f44:
    // 0x168f44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x168f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168f48: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x168F48u;
    {
        const bool branch_taken_0x168f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F48u;
        // 0x168f4c: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f48) {
            ctx->pc = 0x169008u;
            return;
        }
    }
    ctx->pc = 0x168F50u;
}
