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

// Function: entry_0011d484
// Address: 0x11d484 - 0x11d4b4
void entry_0011d484_0x11d484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d484_0x11d484");
#endif

    ctx->pc = 0x11d484u;

    // 0x11d484: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x11d484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x11d488: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11d488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11d48c: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x11d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x11d490: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x11d490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x11d494: 0x14770007  bne         $v1, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D494u;
    {
        const bool branch_taken_0x11d494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x11d494) {
            ctx->pc = 0x11D4B4u;
            return;
        }
    }
    ctx->pc = 0x11D49Cu;
    // 0x11d49c: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x11d49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11d4a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11d4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d4a8: 0x65200a  movz        $a0, $v1, $a1
    ctx->pc = 0x11d4a8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x11d4ac: 0xae040084  sw          $a0, 0x84($s0)
    ctx->pc = 0x11d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 4));
    // 0x11d4b0: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x11d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    ctx->pc = 0x11d4b4u;
}
