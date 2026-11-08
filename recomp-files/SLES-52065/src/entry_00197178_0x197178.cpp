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

// Function: entry_00197178
// Address: 0x197178 - 0x197184
void entry_00197178_0x197178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197178_0x197178");
#endif

    ctx->pc = 0x197178u;

    // 0x197178: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x197178u;
    {
        const bool branch_taken_0x197178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197178u;
        // 0x19717c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197178) {
            ctx->pc = 0x1971C8u;
            return;
        }
    }
    ctx->pc = 0x197180u;
    // 0x197180: 0x2b29821  addu        $s3, $s5, $s2
    ctx->pc = 0x197180u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    ctx->pc = 0x197184u;
}
