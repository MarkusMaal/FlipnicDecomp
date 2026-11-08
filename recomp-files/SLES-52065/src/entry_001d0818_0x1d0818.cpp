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

// Function: entry_001d0818
// Address: 0x1d0818 - 0x1d0820
void entry_001d0818_0x1d0818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0818_0x1d0818");
#endif

    ctx->pc = 0x1d0818u;

    // 0x1d0818: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d0818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d081c: 0x244299c8  addiu       $v0, $v0, -0x6638
    ctx->pc = 0x1d081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941128));
    ctx->pc = 0x1d0820u;
}
