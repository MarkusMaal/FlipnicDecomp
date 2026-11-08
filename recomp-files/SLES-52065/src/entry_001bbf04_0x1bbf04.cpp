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

// Function: entry_001bbf04
// Address: 0x1bbf04 - 0x1bbf08
void entry_001bbf04_0x1bbf04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbf04_0x1bbf04");
#endif

    ctx->pc = 0x1bbf04u;

    // 0x1bbf04: 0xaeb6000c  sw          $s6, 0xC($s5)
    ctx->pc = 0x1bbf04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 22));
    ctx->pc = 0x1bbf08u;
}
