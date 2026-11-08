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

// Function: entry_001bffec
// Address: 0x1bffec - 0x1bfff4
void entry_001bffec_0x1bffec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bffec_0x1bffec");
#endif

    ctx->pc = 0x1bffecu;

    // 0x1bffec: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1bffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1bfff0: 0xa040282c  sb          $zero, 0x282C($v0)
    ctx->pc = 0x1bfff0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10284), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1bfff4u;
}
