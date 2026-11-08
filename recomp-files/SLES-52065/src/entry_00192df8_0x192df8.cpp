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

// Function: entry_00192df8
// Address: 0x192df8 - 0x192dfc
void entry_00192df8_0x192df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192df8_0x192df8");
#endif

    ctx->pc = 0x192df8u;

    // 0x192df8: 0xae150320  sw          $s5, 0x320($s0)
    ctx->pc = 0x192df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 21));
    ctx->pc = 0x192dfcu;
}
