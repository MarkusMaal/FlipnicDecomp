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

// Function: entry_001f4648
// Address: 0x1f4648 - 0x1f4658
void entry_001f4648_0x1f4648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4648_0x1f4648");
#endif

    ctx->pc = 0x1f4648u;

    // 0x1f4648: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x1f4648u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x1f464c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1F464Cu;
    {
        const bool branch_taken_0x1f464c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F464Cu;
        // 0x1f4650: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f464c) {
            ctx->pc = 0x1F4678u;
            return;
        }
    }
    ctx->pc = 0x1F4654u;
    // 0x1f4654: 0x0  nop
    ctx->pc = 0x1f4654u;
    // NOP
    ctx->pc = 0x1f4658u;
}
