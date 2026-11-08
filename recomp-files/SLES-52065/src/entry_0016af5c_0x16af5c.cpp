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

// Function: entry_0016af5c
// Address: 0x16af5c - 0x16af64
void entry_0016af5c_0x16af5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016af5c_0x16af5c");
#endif

    ctx->pc = 0x16af5cu;

    // 0x16af5c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16af60: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x16af60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
    ctx->pc = 0x16af64u;
}
