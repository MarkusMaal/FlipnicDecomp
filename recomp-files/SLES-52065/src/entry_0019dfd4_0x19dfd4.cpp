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

// Function: entry_0019dfd4
// Address: 0x19dfd4 - 0x19dfdc
void entry_0019dfd4_0x19dfd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dfd4_0x19dfd4");
#endif

    ctx->pc = 0x19dfd4u;

    // 0x19dfd4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19DFD4u;
    {
        const bool branch_taken_0x19dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFD4u;
        // 0x19dfd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfd4) {
            ctx->pc = 0x19E030u;
            return;
        }
    }
    ctx->pc = 0x19DFDCu;
}
