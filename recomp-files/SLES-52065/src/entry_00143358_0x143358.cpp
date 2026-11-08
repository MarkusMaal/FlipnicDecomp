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

// Function: entry_00143358
// Address: 0x143358 - 0x143364
void entry_00143358_0x143358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143358_0x143358");
#endif

    ctx->pc = 0x143358u;

    // 0x143358: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x143358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x14335c: 0x16b3ffc0  bne         $s5, $s3, . + 4 + (-0x40 << 2)
    ctx->pc = 0x14335Cu;
    {
        const bool branch_taken_0x14335c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 19));
        if (branch_taken_0x14335c) {
            ctx->pc = 0x143260u;
            return;
        }
    }
    ctx->pc = 0x143364u;
}
