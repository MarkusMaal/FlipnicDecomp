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

// Function: entry_001110dc
// Address: 0x1110dc - 0x11110c
void entry_001110dc_0x1110dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001110dc_0x1110dc");
#endif

    ctx->pc = 0x1110dcu;

    // 0x1110dc: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1110dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1110e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1110e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1110e4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1110e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1110e8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1110e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1110ec: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x1110ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1110f0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1110f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1110f4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1110f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1110f8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1110f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1110fc: 0x8c862cd8  lw          $a2, 0x2CD8($a0)
    ctx->pc = 0x1110fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x111100: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x111100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
    // 0x111104: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x111104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x111108: 0xacc40224  sw          $a0, 0x224($a2)
    ctx->pc = 0x111108u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
    ctx->pc = 0x11110cu;
}
