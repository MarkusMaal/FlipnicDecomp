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

// Function: entry_0017f0fc
// Address: 0x17f0fc - 0x17f10c
void entry_0017f0fc_0x17f0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f0fc_0x17f0fc");
#endif

    ctx->pc = 0x17f0fcu;

    // 0x17f0fc: 0x0  nop
    ctx->pc = 0x17f0fcu;
    // NOP
    // 0x17f100: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17f100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17f104: 0x1613ffe6  bne         $s0, $s3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17F104u;
    {
        const bool branch_taken_0x17f104 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x17f104) {
            ctx->pc = 0x17F0A0u;
            return;
        }
    }
    ctx->pc = 0x17F10Cu;
}
