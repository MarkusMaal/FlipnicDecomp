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

// Function: entry_0015a964
// Address: 0x15a964 - 0x15a968
void entry_0015a964_0x15a964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a964_0x15a964");
#endif

    ctx->pc = 0x15a964u;

    // 0x15a964: 0xa62001e8  sh          $zero, 0x1E8($s1)
    ctx->pc = 0x15a964u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x15a968u;
}
