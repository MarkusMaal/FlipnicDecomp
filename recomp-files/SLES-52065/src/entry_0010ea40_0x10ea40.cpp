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

// Function: entry_0010ea40
// Address: 0x10ea40 - 0x10ea7c
void entry_0010ea40_0x10ea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea40_0x10ea40");
#endif

    ctx->pc = 0x10ea40u;

    // 0x10ea40: 0x8e260220  lw          $a2, 0x220($s1)
    ctx->pc = 0x10ea40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x10ea44: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x10ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x10ea48: 0x8e250210  lw          $a1, 0x210($s1)
    ctx->pc = 0x10ea48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10ea4c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x10ea4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x10ea50: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10ea54: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x10ea54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10ea58: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x10ea58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x10ea5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10ea60: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x10ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x10ea64: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x10ea64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10ea68: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x10ea68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10ea6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10ea70: 0x8c842cd8  lw          $a0, 0x2CD8($a0)
    ctx->pc = 0x10ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x10ea74: 0x8c8401d4  lw          $a0, 0x1D4($a0)
    ctx->pc = 0x10ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x10ea78: 0xac640040  sw          $a0, 0x40($v1)
    ctx->pc = 0x10ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
    ctx->pc = 0x10ea7cu;
}
