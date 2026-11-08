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

// Function: entry_0012f538
// Address: 0x12f538 - 0x12f540
void entry_0012f538_0x12f538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f538_0x12f538");
#endif

    ctx->pc = 0x12f538u;

    // 0x12f538: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12F538u;
    {
        const bool branch_taken_0x12f538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F538u;
        // 0x12f53c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f538) {
            ctx->pc = 0x12F594u;
            return;
        }
    }
    ctx->pc = 0x12F540u;
}
