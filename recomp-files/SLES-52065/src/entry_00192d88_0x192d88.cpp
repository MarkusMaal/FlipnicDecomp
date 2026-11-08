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

// Function: entry_00192d88
// Address: 0x192d88 - 0x192d90
void entry_00192d88_0x192d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192d88_0x192d88");
#endif

    ctx->pc = 0x192d88u;

    // 0x192d88: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x192d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x192d8c: 0x55a821  addu        $s5, $v0, $s5
    ctx->pc = 0x192d8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->pc = 0x192d90u;
}
