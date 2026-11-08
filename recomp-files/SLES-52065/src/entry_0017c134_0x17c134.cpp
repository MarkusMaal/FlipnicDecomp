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

// Function: entry_0017c134
// Address: 0x17c134 - 0x17c138
void entry_0017c134_0x17c134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c134_0x17c134");
#endif

    ctx->pc = 0x17c134u;

    // 0x17c134: 0xa4800218  sh          $zero, 0x218($a0)
    ctx->pc = 0x17c134u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 536), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x17c138u;
}
