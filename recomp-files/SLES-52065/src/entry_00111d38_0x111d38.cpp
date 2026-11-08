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

// Function: entry_00111d38
// Address: 0x111d38 - 0x111d68
void entry_00111d38_0x111d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111d38_0x111d38");
#endif

    ctx->pc = 0x111d38u;

    // 0x111d38: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x111d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x111d3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x111d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x111d40: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x111d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111d44: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x111d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x111d48: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x111d48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111d4c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x111d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x111d50: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x111d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x111d54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x111d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x111d58: 0x8c652cd8  lw          $a1, 0x2CD8($v1)
    ctx->pc = 0x111d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x111d5c: 0x8ca30224  lw          $v1, 0x224($a1)
    ctx->pc = 0x111d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x111d60: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x111d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x111d64: 0xaca30224  sw          $v1, 0x224($a1)
    ctx->pc = 0x111d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 548), GPR_U32(ctx, 3));
    ctx->pc = 0x111d68u;
}
