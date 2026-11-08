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

// Function: entry_001dd9e0
// Address: 0x1dd9e0 - 0x1dda08
void entry_001dd9e0_0x1dd9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd9e0_0x1dd9e0");
#endif

    ctx->pc = 0x1dd9e0u;

    // 0x1dd9e0: 0x2301823  subu        $v1, $s1, $s0
    ctx->pc = 0x1dd9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1dd9e4: 0x26447330  addiu       $a0, $s2, 0x7330
    ctx->pc = 0x1dd9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29488));
    // 0x1dd9e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd9ec: 0x2405f7ff  addiu       $a1, $zero, -0x801
    ctx->pc = 0x1dd9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1dd9f0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1dd9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1dd9f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd9f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd9fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dda00: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1dda00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1dda04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1dda04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1dda08u;
}
