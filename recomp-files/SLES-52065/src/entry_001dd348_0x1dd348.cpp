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

// Function: entry_001dd348
// Address: 0x1dd348 - 0x1dd37c
void entry_001dd348_0x1dd348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd348_0x1dd348");
#endif

    ctx->pc = 0x1dd348u;

    // 0x1dd348: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1dd348u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1dd34c: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x1dd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1dd350: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x1dd350u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1dd354: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1dd354u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x1dd358: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd35c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1dd35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1dd360: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd364: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1dd364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1dd368: 0x24217330  addiu       $at, $at, 0x7330
    ctx->pc = 0x1dd368u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29488));
    // 0x1dd36c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x1dd36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1dd370: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1dd370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd374: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1dd374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1dd378: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1dd378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1dd37cu;
}
