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

// Function: entry_00110a0c
// Address: 0x110a0c - 0x110a3c
void entry_00110a0c_0x110a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110a0c_0x110a0c");
#endif

    ctx->pc = 0x110a0cu;

    // 0x110a0c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x110a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110a10: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x110a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x110a14: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x110a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110a18: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x110a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x110a1c: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x110a1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x110a20: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x110a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x110a24: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x110a24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x110a28: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x110a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x110a2c: 0x8c862cd8  lw          $a2, 0x2CD8($a0)
    ctx->pc = 0x110a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x110a30: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x110a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
    // 0x110a34: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x110a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x110a38: 0xacc40224  sw          $a0, 0x224($a2)
    ctx->pc = 0x110a38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
    ctx->pc = 0x110a3cu;
}
