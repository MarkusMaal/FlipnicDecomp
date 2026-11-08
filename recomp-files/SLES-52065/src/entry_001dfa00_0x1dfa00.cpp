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

// Function: entry_001dfa00
// Address: 0x1dfa00 - 0x1dfa18
void entry_001dfa00_0x1dfa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfa00_0x1dfa00");
#endif

    switch (ctx->pc) {
        case 0x1dfa0cu: goto label_1dfa0c;
        default: break;
    }

    ctx->pc = 0x1dfa00u;

    // 0x1dfa00: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1dfa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1dfa04: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DFA04u;
    SET_GPR_U32(ctx, 31, 0x1DFA0Cu);
    ctx->pc = 0x1DFA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA04u;
    // 0x1dfa08: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DFA04u, 0x1DFA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA0Cu;
label_1dfa0c:
    // 0x1dfa0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DFA0Cu;
    {
        const bool branch_taken_0x1dfa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA0Cu;
        // 0x1dfa10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa0c) {
            ctx->pc = 0x1DFA40u;
            return;
        }
    }
    ctx->pc = 0x1DFA14u;
    // 0x1dfa14: 0x0  nop
    ctx->pc = 0x1dfa14u;
    // NOP
    ctx->pc = 0x1dfa18u;
}
