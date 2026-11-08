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

// Function: entry_00196a50
// Address: 0x196a50 - 0x196a58
void entry_00196a50_0x196a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196a50_0x196a50");
#endif

    ctx->pc = 0x196a50u;

    // 0x196a50: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x196a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x196a54: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x196a54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x196a58u;
}
