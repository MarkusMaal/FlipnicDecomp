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

// Function: entry_0020774c
// Address: 0x20774c - 0x207760
void entry_0020774c_0x20774c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020774c_0x20774c");
#endif

    ctx->pc = 0x20774cu;

    // 0x20774c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x20774cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x207750: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x207750u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x207754: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x207754u;
    {
        const bool branch_taken_0x207754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207754u;
        // 0x207758: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207754) {
            ctx->pc = 0x2078D8u;
            return;
        }
    }
    ctx->pc = 0x20775Cu;
    // 0x20775c: 0x0  nop
    ctx->pc = 0x20775cu;
    // NOP
    ctx->pc = 0x207760u;
}
