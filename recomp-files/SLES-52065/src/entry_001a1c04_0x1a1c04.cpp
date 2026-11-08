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

// Function: entry_001a1c04
// Address: 0x1a1c04 - 0x1a1c08
void entry_001a1c04_0x1a1c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1c04_0x1a1c04");
#endif

    ctx->pc = 0x1a1c04u;

    // 0x1a1c04: 0x9283068c  lbu         $v1, 0x68C($s4)
    ctx->pc = 0x1a1c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1676)));
    ctx->pc = 0x1a1c08u;
}
