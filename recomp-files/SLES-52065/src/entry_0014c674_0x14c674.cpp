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

// Function: entry_0014c674
// Address: 0x14c674 - 0x14c680
void entry_0014c674_0x14c674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c674_0x14c674");
#endif

    ctx->pc = 0x14c674u;

    // 0x14c674: 0x0  nop
    ctx->pc = 0x14c674u;
    // NOP
    // 0x14c678: 0x1653fff8  bne         $s2, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14C678u;
    {
        const bool branch_taken_0x14c678 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x14c678) {
            ctx->pc = 0x14C65Cu;
            return;
        }
    }
    ctx->pc = 0x14C680u;
}
