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

// Function: entry_001e13c8
// Address: 0x1e13c8 - 0x1e13f8
void entry_001e13c8_0x1e13c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e13c8_0x1e13c8");
#endif

    ctx->pc = 0x1e13c8u;

    // 0x1e13c8: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x1e13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x1e13cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e13ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e13d0: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1e13d0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1e13d4: 0xada00000  sw          $zero, 0x0($t5)
    ctx->pc = 0x1e13d4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
    // 0x1e13d8: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x1e13d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x1e13dc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1e13dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1e13e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1e13e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1e13e4: 0xadc00000  sw          $zero, 0x0($t6)
    ctx->pc = 0x1e13e4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 0));
    // 0x1e13e8: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1e13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1e13ec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1e13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1e13f0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1e13f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1e13f4: 0xade00000  sw          $zero, 0x0($t7)
    ctx->pc = 0x1e13f4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1e13f8u;
}
