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

// Function: entry_001f89e0
// Address: 0x1f89e0 - 0x1f8a0c
void entry_001f89e0_0x1f89e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f89e0_0x1f89e0");
#endif

    ctx->pc = 0x1f89e0u;

    // 0x1f89e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1f89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1f89e4: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1f89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f89e8: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x1f89e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x1f89ec: 0x2624fff0  addiu       $a0, $s1, -0x10
    ctx->pc = 0x1f89ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x1f89f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f89f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f89f4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f89f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f89f8: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1f89f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f89fc: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1f89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f8a00: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1f8a00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1f8a04: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x1f8a04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x1f8a08: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x1f8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x1f8a0cu;
}
