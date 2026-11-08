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

// Function: entry_001e83b4
// Address: 0x1e83b4 - 0x1e83c4
void entry_001e83b4_0x1e83b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e83b4_0x1e83b4");
#endif

    ctx->pc = 0x1e83b4u;

    // 0x1e83b4: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1e83b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1e83b8: 0x244082b  sltu        $at, $s2, $a0
    ctx->pc = 0x1e83b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e83bc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E83BCu;
    {
        const bool branch_taken_0x1e83bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e83bc) {
            ctx->pc = 0x1E83F4u;
            return;
        }
    }
    ctx->pc = 0x1E83C4u;
}
