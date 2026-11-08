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

// Function: entry_002086b0
// Address: 0x2086b0 - 0x2086d4
void entry_002086b0_0x2086b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002086b0_0x2086b0");
#endif

    ctx->pc = 0x2086b0u;

label_2086b0:
    // 0x2086b0: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x2086b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x2086b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2086b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2086b8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2086b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086bc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x2086bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2086c0: 0x0  nop
    ctx->pc = 0x2086c0u;
    // NOP
    // 0x2086c4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2086C4u;
    {
        const bool branch_taken_0x2086c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2086c4) {
            ctx->pc = 0x2086B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2086b0;
        }
    }
    ctx->pc = 0x2086CCu;
    // 0x2086cc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2086ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2086d0: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x2086d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->pc = 0x2086d4u;
}
