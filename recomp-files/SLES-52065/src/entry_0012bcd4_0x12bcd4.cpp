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

// Function: entry_0012bcd4
// Address: 0x12bcd4 - 0x12bcd8
void entry_0012bcd4_0x12bcd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bcd4_0x12bcd4");
#endif

    ctx->pc = 0x12bcd4u;

    // 0x12bcd4: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x12bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
    ctx->pc = 0x12bcd8u;
}
