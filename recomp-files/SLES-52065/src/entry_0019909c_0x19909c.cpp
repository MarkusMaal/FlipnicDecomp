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

// Function: entry_0019909c
// Address: 0x19909c - 0x1990a8
void entry_0019909c_0x19909c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019909c_0x19909c");
#endif

    ctx->pc = 0x19909cu;

    // 0x19909c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x19909Cu;
    {
        const bool branch_taken_0x19909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1990A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19909Cu;
        // 0x1990a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19909c) {
            ctx->pc = 0x199358u;
            return;
        }
    }
    ctx->pc = 0x1990A4u;
    // 0x1990a4: 0x2933021  addu        $a2, $s4, $s3
    ctx->pc = 0x1990a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    ctx->pc = 0x1990a8u;
}
