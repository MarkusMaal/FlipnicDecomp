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

// Function: entry_001b18f4
// Address: 0x1b18f4 - 0x1b18f8
void entry_001b18f4_0x1b18f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b18f4_0x1b18f4");
#endif

    ctx->pc = 0x1b18f4u;

    // 0x1b18f4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b18f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x1b18f8u;
}
