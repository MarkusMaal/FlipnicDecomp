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

// Function: entry_00192a04
// Address: 0x192a04 - 0x192a08
void entry_00192a04_0x192a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192a04_0x192a04");
#endif

    ctx->pc = 0x192a04u;

    // 0x192a04: 0xae120320  sw          $s2, 0x320($s0)
    ctx->pc = 0x192a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 18));
    ctx->pc = 0x192a08u;
}
