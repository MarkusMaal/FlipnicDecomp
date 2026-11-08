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

// Function: entry_0016eab0
// Address: 0x16eab0 - 0x16eac0
void entry_0016eab0_0x16eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016eab0_0x16eab0");
#endif

    ctx->pc = 0x16eab0u;

    // 0x16eab0: 0x86020216  lh          $v0, 0x216($s0)
    ctx->pc = 0x16eab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 534)));
    // 0x16eab4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16eab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16eab8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16eabc: 0xa6020216  sh          $v0, 0x216($s0)
    ctx->pc = 0x16eabcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 534), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x16eac0u;
}
