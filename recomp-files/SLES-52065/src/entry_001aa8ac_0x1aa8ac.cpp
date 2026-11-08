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

// Function: entry_001aa8ac
// Address: 0x1aa8ac - 0x1aa8c4
void entry_001aa8ac_0x1aa8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa8ac_0x1aa8ac");
#endif

    ctx->pc = 0x1aa8acu;

    // 0x1aa8ac: 0x0  nop
    ctx->pc = 0x1aa8acu;
    // NOP
    // 0x1aa8b0: 0x8ea30714  lw          $v1, 0x714($s5)
    ctx->pc = 0x1aa8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1812)));
    // 0x1aa8b4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1aa8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1aa8b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa8bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1aa8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1aa8c0: 0xaea30714  sw          $v1, 0x714($s5)
    ctx->pc = 0x1aa8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1812), GPR_U32(ctx, 3));
    ctx->pc = 0x1aa8c4u;
}
