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

// Function: entry_00101a5c
// Address: 0x101a5c - 0x101a60
void entry_00101a5c_0x101a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101a5c_0x101a5c");
#endif

    ctx->pc = 0x101a5cu;

    // 0x101a5c: 0xae80005c  sw          $zero, 0x5C($s4)
    ctx->pc = 0x101a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
    ctx->pc = 0x101a60u;
}
