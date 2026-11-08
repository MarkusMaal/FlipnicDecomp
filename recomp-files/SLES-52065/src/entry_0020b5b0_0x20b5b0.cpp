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

// Function: entry_0020b5b0
// Address: 0x20b5b0 - 0x20b5e0
void entry_0020b5b0_0x20b5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b5b0_0x20b5b0");
#endif

    ctx->pc = 0x20b5b0u;

label_20b5b0:
    // 0x20b5b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b5b4: 0x0  nop
    ctx->pc = 0x20b5b4u;
    // NOP
    // 0x20b5b8: 0x0  nop
    ctx->pc = 0x20b5b8u;
    // NOP
    // 0x20b5bc: 0x0  nop
    ctx->pc = 0x20b5bcu;
    // NOP
    // 0x20b5c0: 0x0  nop
    ctx->pc = 0x20b5c0u;
    // NOP
    // 0x20b5c4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B5C4u;
    {
        const bool branch_taken_0x20b5c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b5c4) {
            ctx->pc = 0x20B5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b5b0;
        }
    }
    ctx->pc = 0x20B5CCu;
    // 0x20b5cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b5d0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20b5d4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x20b5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x20b5d8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x20b5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x20b5dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20b5dcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0));
    ctx->pc = 0x20b5e0u;
}
