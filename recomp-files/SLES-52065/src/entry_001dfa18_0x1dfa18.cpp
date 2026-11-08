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

// Function: entry_001dfa18
// Address: 0x1dfa18 - 0x1dfa30
void entry_001dfa18_0x1dfa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfa18_0x1dfa18");
#endif

    switch (ctx->pc) {
        case 0x1dfa24u: goto label_1dfa24;
        default: break;
    }

    ctx->pc = 0x1dfa18u;

    // 0x1dfa18: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1dfa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1dfa1c: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DFA1Cu;
    SET_GPR_U32(ctx, 31, 0x1DFA24u);
    ctx->pc = 0x1DFA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA1Cu;
    // 0x1dfa20: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DFA1Cu, 0x1DFA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA24u;
label_1dfa24:
    // 0x1dfa24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFA24u;
    {
        const bool branch_taken_0x1dfa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA24u;
        // 0x1dfa28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa24) {
            ctx->pc = 0x1DFA40u;
            return;
        }
    }
    ctx->pc = 0x1DFA2Cu;
    // 0x1dfa2c: 0x0  nop
    ctx->pc = 0x1dfa2cu;
    // NOP
    ctx->pc = 0x1dfa30u;
}
