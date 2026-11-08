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

// Function: entry_001bfa68
// Address: 0x1bfa68 - 0x1bfa84
void entry_001bfa68_0x1bfa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfa68_0x1bfa68");
#endif

    ctx->pc = 0x1bfa68u;

    // 0x1bfa68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bfa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfa70: 0x8c23f4f8  lw          $v1, -0xB08($at)
    ctx->pc = 0x1bfa70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4F8u));
    // 0x1bfa74: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFA74u;
    {
        const bool branch_taken_0x1bfa74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bfa74) {
            ctx->pc = 0x1BFA84u;
            return;
        }
    }
    ctx->pc = 0x1BFA7Cu;
    // 0x1bfa7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bfa7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bfa80: 0xac20f4f0  sw          $zero, -0xB10($at)
    ctx->pc = 0x1bfa80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F4F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4F0u, _value); } while (0);
    ctx->pc = 0x1bfa84u;
}
