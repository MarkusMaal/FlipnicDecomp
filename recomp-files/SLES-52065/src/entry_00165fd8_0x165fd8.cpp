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

// Function: entry_00165fd8
// Address: 0x165fd8 - 0x165fdc
void entry_00165fd8_0x165fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165fd8_0x165fd8");
#endif

    ctx->pc = 0x165fd8u;

    // 0x165fd8: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x165fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    ctx->pc = 0x165fdcu;
}
