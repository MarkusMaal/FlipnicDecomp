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

// Function: entry_00127cf8
// Address: 0x127cf8 - 0x127d0c
void entry_00127cf8_0x127cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127cf8_0x127cf8");
#endif

    ctx->pc = 0x127cf8u;

    // 0x127cf8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x127cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x127cfc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x127cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x127d00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127d04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x127d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127d08: 0x0  nop
    ctx->pc = 0x127d08u;
    // NOP
    ctx->pc = 0x127d0cu;
}
