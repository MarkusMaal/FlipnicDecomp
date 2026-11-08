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

// Function: entry_0010e6b4
// Address: 0x10e6b4 - 0x10e6e8
void entry_0010e6b4_0x10e6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e6b4_0x10e6b4");
#endif

    ctx->pc = 0x10e6b4u;

    // 0x10e6b4: 0x8e250210  lw          $a1, 0x210($s1)
    ctx->pc = 0x10e6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e6b8: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x10e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x10e6bc: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10e6c0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x10e6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x10e6c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10e6c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x10e6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x10e6cc: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x10e6ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10e6d0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x10e6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x10e6d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x10e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10e6d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10e6dc: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x10e6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x10e6e0: 0x8c8401d4  lw          $a0, 0x1D4($a0)
    ctx->pc = 0x10e6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x10e6e4: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x10e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    ctx->pc = 0x10e6e8u;
}
