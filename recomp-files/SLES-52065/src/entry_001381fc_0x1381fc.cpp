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

// Function: entry_001381fc
// Address: 0x1381fc - 0x13820c
void entry_001381fc_0x1381fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001381fc_0x1381fc");
#endif

    ctx->pc = 0x1381fcu;

    // 0x1381fc: 0x0  nop
    ctx->pc = 0x1381fcu;
    // NOP
    // 0x138200: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x138200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x138204: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x138204u;
    {
        const bool branch_taken_0x138204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138204) {
            ctx->pc = 0x1380E8u;
            return;
        }
    }
    ctx->pc = 0x13820Cu;
}
