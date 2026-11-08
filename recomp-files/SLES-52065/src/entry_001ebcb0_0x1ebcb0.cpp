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

// Function: entry_001ebcb0
// Address: 0x1ebcb0 - 0x1ebcc0
void entry_001ebcb0_0x1ebcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebcb0_0x1ebcb0");
#endif

    switch (ctx->pc) {
        case 0x1ebcb8u: goto label_1ebcb8;
        default: break;
    }

    ctx->pc = 0x1ebcb0u;

    // 0x1ebcb0: 0xc07b2fc  jal         func_1ECBF0
    ctx->pc = 0x1EBCB0u;
    SET_GPR_U32(ctx, 31, 0x1EBCB8u);
    ctx->pc = 0x1EBCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBCB0u;
    // 0x1ebcb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECBF0u, 0x1EBCB0u, 0x1EBCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBCB8u;
label_1ebcb8:
    // 0x1ebcb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBCB8u;
    {
        const bool branch_taken_0x1ebcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCB8u;
        // 0x1ebcbc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebcb8) {
            ctx->pc = 0x1EBCC8u;
            return;
        }
    }
    ctx->pc = 0x1EBCC0u;
}
