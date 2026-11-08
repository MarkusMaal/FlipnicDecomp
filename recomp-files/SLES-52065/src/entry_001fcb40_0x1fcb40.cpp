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

// Function: entry_001fcb40
// Address: 0x1fcb40 - 0x1fcb48
void entry_001fcb40_0x1fcb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcb40_0x1fcb40");
#endif

    ctx->pc = 0x1fcb40u;

    // 0x1fcb40: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1fcb40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcb44: 0x0  nop
    ctx->pc = 0x1fcb44u;
    // NOP
    ctx->pc = 0x1fcb48u;
}
