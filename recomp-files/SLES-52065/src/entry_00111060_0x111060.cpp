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

// Function: entry_00111060
// Address: 0x111060 - 0x111094
void entry_00111060_0x111060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111060_0x111060");
#endif

    ctx->pc = 0x111060u;

    // 0x111060: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x111060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x111064: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x111064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x111068: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x111068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11106c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11106cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x111070: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x111070u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x111074: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x111074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x111078: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x111078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11107c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11107cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x111080: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x111080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x111084: 0xac800224  sw          $zero, 0x224($a0)
    ctx->pc = 0x111084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
    // 0x111088: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x111088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11108c: 0x3463002c  ori         $v1, $v1, 0x2C
    ctx->pc = 0x11108cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44);
    // 0x111090: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x111090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
    ctx->pc = 0x111094u;
}
