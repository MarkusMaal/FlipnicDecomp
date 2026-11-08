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

// Function: entry_001386e0
// Address: 0x1386e0 - 0x1386f0
void entry_001386e0_0x1386e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001386e0_0x1386e0");
#endif

    ctx->pc = 0x1386e0u;

    // 0x1386e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1386e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1386e4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1386E4u;
    {
        const bool branch_taken_0x1386e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1386e4) {
            ctx->pc = 0x1386F0u;
            return;
        }
    }
    ctx->pc = 0x1386ECu;
    // 0x1386ec: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x1386ecu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x1386f0u;
}
