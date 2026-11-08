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

// Function: entry_001dfa30
// Address: 0x1dfa30 - 0x1dfa3c
void entry_001dfa30_0x1dfa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfa30_0x1dfa30");
#endif

    ctx->pc = 0x1dfa30u;

    // 0x1dfa30: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1dfa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1dfa34: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DFA34u;
    SET_GPR_U32(ctx, 31, 0x1DFA3Cu);
    ctx->pc = 0x1DFA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA34u;
    // 0x1dfa38: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DFA34u, 0x1DFA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA3Cu;
}
