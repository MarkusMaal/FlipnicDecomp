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

// Function: entry_0017c42c
// Address: 0x17c42c - 0x17c430
void entry_0017c42c_0x17c42c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c42c_0x17c42c");
#endif

    ctx->pc = 0x17c42cu;

    // 0x17c42c: 0xae3001d4  sw          $s0, 0x1D4($s1)
    ctx->pc = 0x17c42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 16));
    ctx->pc = 0x17c430u;
}
