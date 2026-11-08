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

// Function: entry_0013d398
// Address: 0x13d398 - 0x13d3bc
void entry_0013d398_0x13d398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d398_0x13d398");
#endif

    switch (ctx->pc) {
        case 0x13d3b4u: goto label_13d3b4;
        default: break;
    }

    ctx->pc = 0x13d398u;

    // 0x13d398: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x13d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x13d39c: 0x0  nop
    ctx->pc = 0x13d39cu;
    // NOP
    // 0x13d3a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13D3A0u;
    {
        const bool branch_taken_0x13d3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d3a0) {
            ctx->pc = 0x13D390u;
            return;
        }
    }
    ctx->pc = 0x13D3A8u;
    // 0x13d3a8: 0x2604019c  addiu       $a0, $s0, 0x19C
    ctx->pc = 0x13d3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 412));
    // 0x13d3ac: 0xc04fd04  jal         func_13F410
    ctx->pc = 0x13D3ACu;
    SET_GPR_U32(ctx, 31, 0x13D3B4u);
    ctx->pc = 0x13D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3ACu;
    // 0x13d3b0: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F410u, 0x13D3ACu, 0x13D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3B4u;
label_13d3b4:
    // 0x13d3b4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13D3B4u;
    {
        const bool branch_taken_0x13d3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d3b4) {
            ctx->pc = 0x13D404u;
            return;
        }
    }
    ctx->pc = 0x13D3BCu;
}
