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

// Function: entry_0011a5f0
// Address: 0x11a5f0 - 0x11a600
void entry_0011a5f0_0x11a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a5f0_0x11a5f0");
#endif

    ctx->pc = 0x11a5f0u;

    // 0x11a5f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a5f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a5f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a5fc: 0x8f9083c0  lw          $s0, -0x7C40($gp)
    ctx->pc = 0x11a5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935488)));
    ctx->pc = 0x11a600u;
}
