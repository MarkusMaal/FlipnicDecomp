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

// Function: entry_0017e340
// Address: 0x17e340 - 0x17e350
void entry_0017e340_0x17e340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e340_0x17e340");
#endif

    ctx->pc = 0x17e340u;

    // 0x17e340: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17e340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17e344: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x17e344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x17e348: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x17E348u;
    {
        const bool branch_taken_0x17e348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e348) {
            ctx->pc = 0x17E310u;
            return;
        }
    }
    ctx->pc = 0x17E350u;
}
