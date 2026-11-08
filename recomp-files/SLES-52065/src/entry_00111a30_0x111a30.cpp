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

// Function: entry_00111a30
// Address: 0x111a30 - 0x111a64
void entry_00111a30_0x111a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111a30_0x111a30");
#endif

    ctx->pc = 0x111a30u;

    // 0x111a30: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x111a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x111a34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x111a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x111a38: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x111a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111a3c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x111a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x111a40: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x111a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x111a44: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x111a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x111a48: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x111a48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x111a4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x111a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x111a50: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x111a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x111a54: 0xac800224  sw          $zero, 0x224($a0)
    ctx->pc = 0x111a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
    // 0x111a58: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x111a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x111a5c: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x111a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x111a60: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x111a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
    ctx->pc = 0x111a64u;
}
