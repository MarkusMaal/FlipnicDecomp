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

// Function: entry_00197d30
// Address: 0x197d30 - 0x197d38
void entry_00197d30_0x197d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197d30_0x197d30");
#endif

    ctx->pc = 0x197d30u;

    // 0x197d30: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x197d30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x197d34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x197d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x197d38u;
}
