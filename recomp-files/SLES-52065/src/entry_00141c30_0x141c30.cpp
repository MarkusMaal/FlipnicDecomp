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

// Function: entry_00141c30
// Address: 0x141c30 - 0x141c34
void entry_00141c30_0x141c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141c30_0x141c30");
#endif

    ctx->pc = 0x141c30u;

    // 0x141c30: 0xa220002a  sb          $zero, 0x2A($s1)
    ctx->pc = 0x141c30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x141c34u;
}
