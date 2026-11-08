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

// Function: entry_00165e64
// Address: 0x165e64 - 0x165e68
void entry_00165e64_0x165e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165e64_0x165e64");
#endif

    ctx->pc = 0x165e64u;

    // 0x165e64: 0xa4800224  sh          $zero, 0x224($a0)
    ctx->pc = 0x165e64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 548), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x165e68u;
}
