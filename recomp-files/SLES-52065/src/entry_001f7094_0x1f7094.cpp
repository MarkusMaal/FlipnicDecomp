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

// Function: entry_001f7094
// Address: 0x1f7094 - 0x1f709c
void entry_001f7094_0x1f7094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7094_0x1f7094");
#endif

    ctx->pc = 0x1f7094u;

    // 0x1f7094: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f7094u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f7098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1f709cu;
}
