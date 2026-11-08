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

// Function: entry_001de998
// Address: 0x1de998 - 0x1de9a0
void entry_001de998_0x1de998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de998_0x1de998");
#endif

    ctx->pc = 0x1de998u;

    // 0x1de998: 0x34626000  ori         $v0, $v1, 0x6000
    ctx->pc = 0x1de998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x1de99c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1de99cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1de9a0u;
}
