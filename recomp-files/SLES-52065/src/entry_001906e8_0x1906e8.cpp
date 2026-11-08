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

// Function: entry_001906e8
// Address: 0x1906e8 - 0x190700
void entry_001906e8_0x1906e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001906e8_0x1906e8");
#endif

    ctx->pc = 0x1906e8u;

    // 0x1906e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1906e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1906ec: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1906ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1906f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1906f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1906f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1906f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1906f8: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1906f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1906fc: 0x0  nop
    ctx->pc = 0x1906fcu;
    // NOP
    ctx->pc = 0x190700u;
}
