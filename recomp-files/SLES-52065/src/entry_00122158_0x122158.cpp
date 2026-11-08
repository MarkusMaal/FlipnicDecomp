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

// Function: entry_00122158
// Address: 0x122158 - 0x122160
void entry_00122158_0x122158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122158_0x122158");
#endif

    ctx->pc = 0x122158u;

    // 0x122158: 0x8ed60004  lw          $s6, 0x4($s6)
    ctx->pc = 0x122158u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x12215c: 0x0  nop
    ctx->pc = 0x12215cu;
    // NOP
    ctx->pc = 0x122160u;
}
