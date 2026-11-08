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

// Function: entry_001e529c
// Address: 0x1e529c - 0x1e52c4
void entry_001e529c_0x1e529c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e529c_0x1e529c");
#endif

    ctx->pc = 0x1e529cu;

    // 0x1e529c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1e529cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1e52a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1e52a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e52a4: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1e52a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1e52a8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1e52a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1e52ac: 0x2464002e  addiu       $a0, $v1, 0x2E
    ctx->pc = 0x1e52acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 46));
    // 0x1e52b0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1e52b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1e52b4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1e52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1e52b8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e52b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e52bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e52bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e52c0: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x1e52c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1e52c4u;
}
