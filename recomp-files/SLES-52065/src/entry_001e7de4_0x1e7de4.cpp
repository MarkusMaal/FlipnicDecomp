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

// Function: entry_001e7de4
// Address: 0x1e7de4 - 0x1e7df4
void entry_001e7de4_0x1e7de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7de4_0x1e7de4");
#endif

    ctx->pc = 0x1e7de4u;

    // 0x1e7de4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1e7de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1e7de8: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x1e7de8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e7dec: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E7DECu;
    {
        const bool branch_taken_0x1e7dec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7dec) {
            ctx->pc = 0x1E7E24u;
            return;
        }
    }
    ctx->pc = 0x1E7DF4u;
}
