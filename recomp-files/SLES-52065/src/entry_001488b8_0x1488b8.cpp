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

// Function: entry_001488b8
// Address: 0x1488b8 - 0x1488d0
void entry_001488b8_0x1488b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001488b8_0x1488b8");
#endif

    ctx->pc = 0x1488b8u;

    // 0x1488b8: 0x8dd90000  lw          $t9, 0x0($t6)
    ctx->pc = 0x1488b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1488bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1488bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1488c0: 0x8f300000  lw          $s0, 0x0($t9)
    ctx->pc = 0x1488c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x1488c4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1488c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1488c8: 0xadb00000  sw          $s0, 0x0($t5)
    ctx->pc = 0x1488c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 16));
    // 0x1488cc: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1488ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1488d0u;
}
