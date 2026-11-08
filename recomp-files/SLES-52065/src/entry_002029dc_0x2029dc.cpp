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

// Function: entry_002029dc
// Address: 0x2029dc - 0x2029e4
void entry_002029dc_0x2029dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002029dc_0x2029dc");
#endif

    ctx->pc = 0x2029dcu;

    // 0x2029dc: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x2029dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x2029e0: 0x26425088  addiu       $v0, $s2, 0x5088
    ctx->pc = 0x2029e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20616));
    ctx->pc = 0x2029e4u;
}
