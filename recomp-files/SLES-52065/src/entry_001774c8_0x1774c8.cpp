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

// Function: entry_001774c8
// Address: 0x1774c8 - 0x1774f8
void entry_001774c8_0x1774c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001774c8_0x1774c8");
#endif

    ctx->pc = 0x1774c8u;

    // 0x1774c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1774c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1774cc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1774ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1774d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1774d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1774d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1774d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1774d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1774d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1774dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1774dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1774e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1774e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1774e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1774e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1774e8: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x1774e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x1774ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1774ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1774f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1774f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1774f4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1774f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1774f8u;
}
