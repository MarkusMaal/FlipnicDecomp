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

// Function: entry_001fc56c
// Address: 0x1fc56c - 0x1fc574
void entry_001fc56c_0x1fc56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc56c_0x1fc56c");
#endif

    ctx->pc = 0x1fc56cu;

    // 0x1fc56c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1fc56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1fc570: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1fc570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->pc = 0x1fc574u;
}
