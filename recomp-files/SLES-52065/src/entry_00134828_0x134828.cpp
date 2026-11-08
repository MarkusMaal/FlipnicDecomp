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

// Function: entry_00134828
// Address: 0x134828 - 0x13482c
void entry_00134828_0x134828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134828_0x134828");
#endif

    ctx->pc = 0x134828u;

    // 0x134828: 0xae920008  sw          $s2, 0x8($s4)
    ctx->pc = 0x134828u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 18));
    ctx->pc = 0x13482cu;
}
