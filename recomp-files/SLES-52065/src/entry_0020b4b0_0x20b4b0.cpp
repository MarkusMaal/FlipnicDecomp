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

// Function: entry_0020b4b0
// Address: 0x20b4b0 - 0x20b4e8
void entry_0020b4b0_0x20b4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b4b0_0x20b4b0");
#endif

    ctx->pc = 0x20b4b0u;

label_20b4b0:
    // 0x20b4b0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x20b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20b4b4: 0x0  nop
    ctx->pc = 0x20b4b4u;
    // NOP
    // 0x20b4b8: 0x0  nop
    ctx->pc = 0x20b4b8u;
    // NOP
    // 0x20b4bc: 0x0  nop
    ctx->pc = 0x20b4bcu;
    // NOP
    // 0x20b4c0: 0x0  nop
    ctx->pc = 0x20b4c0u;
    // NOP
    // 0x20b4c4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B4C4u;
    {
        const bool branch_taken_0x20b4c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b4c4) {
            ctx->pc = 0x20B4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b4b0;
        }
    }
    ctx->pc = 0x20B4CCu;
    // 0x20b4cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b4d0: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x20b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x20b4d4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x20b4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x20b4d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b4dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20b4dcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x20b4e0: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x20b4e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x20b4e4: 0x0  nop
    ctx->pc = 0x20b4e4u;
    // NOP
    ctx->pc = 0x20b4e8u;
}
