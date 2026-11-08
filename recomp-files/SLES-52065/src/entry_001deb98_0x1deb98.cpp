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

// Function: entry_001deb98
// Address: 0x1deb98 - 0x1deb9c
void entry_001deb98_0x1deb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001deb98_0x1deb98");
#endif

    ctx->pc = 0x1deb98u;

    // 0x1deb98: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1deb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1deb9cu;
}
