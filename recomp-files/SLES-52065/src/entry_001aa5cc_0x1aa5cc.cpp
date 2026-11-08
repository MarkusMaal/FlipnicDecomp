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

// Function: entry_001aa5cc
// Address: 0x1aa5cc - 0x1aa5e0
void entry_001aa5cc_0x1aa5cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa5cc_0x1aa5cc");
#endif

    ctx->pc = 0x1aa5ccu;

    // 0x1aa5cc: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1aa5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x1aa5d0: 0x8880  sll         $s1, $zero, 2
    ctx->pc = 0x1aa5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
    // 0x1aa5d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1aa5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5d8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1AA5D8u;
    {
        const bool branch_taken_0x1aa5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5D8u;
        // 0x1aa5dc: 0x24500040  addiu       $s0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5d8) {
            ctx->pc = 0x1AA694u;
            return;
        }
    }
    ctx->pc = 0x1AA5E0u;
}
