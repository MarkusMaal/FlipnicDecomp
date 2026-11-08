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

// Function: entry_001aa744
// Address: 0x1aa744 - 0x1aa758
void entry_001aa744_0x1aa744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa744_0x1aa744");
#endif

    ctx->pc = 0x1aa744u;

    // 0x1aa744: 0x0  nop
    ctx->pc = 0x1aa744u;
    // NOP
    // 0x1aa748: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa74c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1AA74Cu;
    {
        const bool branch_taken_0x1aa74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA74Cu;
        // 0x1aa750: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa74c) {
            ctx->pc = 0x1AA848u;
            return;
        }
    }
    ctx->pc = 0x1AA754u;
    // 0x1aa754: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1aa754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x1aa758u;
}
