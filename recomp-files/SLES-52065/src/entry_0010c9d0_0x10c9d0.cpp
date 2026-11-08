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

// Function: entry_0010c9d0
// Address: 0x10c9d0 - 0x10c9e8
void entry_0010c9d0_0x10c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c9d0_0x10c9d0");
#endif

    ctx->pc = 0x10c9d0u;

    // 0x10c9d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10c9d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10c9d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10c9dc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x10c9e0: 0xa4700688  sh          $s0, 0x688($v1)
    ctx->pc = 0x10c9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1672), (uint16_t)GPR_U32(ctx, 16));
    // 0x10c9e4: 0xa462068a  sh          $v0, 0x68A($v1)
    ctx->pc = 0x10c9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1674), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x10c9e8u;
}
