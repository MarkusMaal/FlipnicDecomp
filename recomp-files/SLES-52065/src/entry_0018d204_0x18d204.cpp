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

// Function: entry_0018d204
// Address: 0x18d204 - 0x18d20c
void entry_0018d204_0x18d204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d204_0x18d204");
#endif

    ctx->pc = 0x18d204u;

    // 0x18d204: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d208: 0xae420488  sw          $v0, 0x488($s2)
    ctx->pc = 0x18d208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1160), GPR_U32(ctx, 2));
    ctx->pc = 0x18d20cu;
}
