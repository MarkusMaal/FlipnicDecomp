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

// Function: entry_00138fa4
// Address: 0x138fa4 - 0x138fb4
void entry_00138fa4_0x138fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138fa4_0x138fa4");
#endif

    ctx->pc = 0x138fa4u;

    // 0x138fa4: 0x0  nop
    ctx->pc = 0x138fa4u;
    // NOP
    // 0x138fa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x138fa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138fac: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x138FACu;
    {
        const bool branch_taken_0x138fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138FACu;
        // 0x138fb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138fac) {
            ctx->pc = 0x1395E8u;
            return;
        }
    }
    ctx->pc = 0x138FB4u;
}
