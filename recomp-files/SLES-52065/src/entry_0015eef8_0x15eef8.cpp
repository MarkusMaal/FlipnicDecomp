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

// Function: entry_0015eef8
// Address: 0x15eef8 - 0x15ef28
void entry_0015eef8_0x15eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eef8_0x15eef8");
#endif

    ctx->pc = 0x15eef8u;

    // 0x15eef8: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x15eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15eefc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15eefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15ef00: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x15ef00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15ef04: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x15ef08: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x15ef08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15ef0c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x15ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15ef10: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15ef14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15ef18: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15ef18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15ef1c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x15ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x15ef20: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x15ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x15ef24: 0xac642ca8  sw          $a0, 0x2CA8($v1)
    ctx->pc = 0x15ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11432), GPR_U32(ctx, 4));
    ctx->pc = 0x15ef28u;
}
