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

// Function: entry_0019cd08
// Address: 0x19cd08 - 0x19cd10
void entry_0019cd08_0x19cd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cd08_0x19cd08");
#endif

    ctx->pc = 0x19cd08u;

    // 0x19cd08: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x19cd08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x19cd0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19cd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x19cd10u;
}
