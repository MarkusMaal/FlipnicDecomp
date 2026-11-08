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

// Function: entry_001f8d30
// Address: 0x1f8d30 - 0x1f8d38
void entry_001f8d30_0x1f8d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8d30_0x1f8d30");
#endif

    ctx->pc = 0x1f8d30u;

    // 0x1f8d30: 0x26221680  addiu       $v0, $s1, 0x1680
    ctx->pc = 0x1f8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
    // 0x1f8d34: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1f8d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x1f8d38u;
}
