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

// Function: entry_00162b50
// Address: 0x162b50 - 0x162b54
void entry_00162b50_0x162b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162b50_0x162b50");
#endif

    ctx->pc = 0x162b50u;

    // 0x162b50: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x162b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->pc = 0x162b54u;
}
