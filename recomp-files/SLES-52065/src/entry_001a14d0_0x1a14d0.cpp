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

// Function: entry_001a14d0
// Address: 0x1a14d0 - 0x1a14fc
void entry_001a14d0_0x1a14d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a14d0_0x1a14d0");
#endif

    switch (ctx->pc) {
        case 0x1a14f0u: goto label_1a14f0;
        default: break;
    }

    ctx->pc = 0x1a14d0u;

    // 0x1a14d0: 0x8e8306a8  lw          $v1, 0x6A8($s4)
    ctx->pc = 0x1a14d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
    // 0x1a14d4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A14D4u;
    {
        const bool branch_taken_0x1a14d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a14d4) {
            ctx->pc = 0x1A1540u;
            return;
        }
    }
    ctx->pc = 0x1A14DCu;
    // 0x1a14dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a14e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a14e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a14e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a14e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a14e8: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A14E8u;
    SET_GPR_U32(ctx, 31, 0x1A14F0u);
    ctx->pc = 0x1A14ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A14E8u;
    // 0x1a14ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A14E8u, 0x1A14F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A14F0u;
label_1a14f0:
    // 0x1a14f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A14F0u;
    {
        const bool branch_taken_0x1a14f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a14f0) {
            ctx->pc = 0x1A1540u;
            return;
        }
    }
    ctx->pc = 0x1A14F8u;
    // 0x1a14f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a14f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a14fcu;
}
