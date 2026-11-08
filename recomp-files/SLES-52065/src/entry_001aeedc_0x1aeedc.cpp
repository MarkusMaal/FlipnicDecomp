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

// Function: entry_001aeedc
// Address: 0x1aeedc - 0x1aeee4
void entry_001aeedc_0x1aeedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aeedc_0x1aeedc");
#endif

    ctx->pc = 0x1aeedcu;

    // 0x1aeedc: 0x8e8307e0  lw          $v1, 0x7E0($s4)
    ctx->pc = 0x1aeedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2016)));
    // 0x1aeee0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1aeee0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1aeee4u;
}
