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

// Function: entry_0020b578
// Address: 0x20b578 - 0x20b5b0
void entry_0020b578_0x20b578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b578_0x20b578");
#endif

    ctx->pc = 0x20b578u;

label_20b578:
    // 0x20b578: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b57c: 0x0  nop
    ctx->pc = 0x20b57cu;
    // NOP
    // 0x20b580: 0x0  nop
    ctx->pc = 0x20b580u;
    // NOP
    // 0x20b584: 0x0  nop
    ctx->pc = 0x20b584u;
    // NOP
    // 0x20b588: 0x0  nop
    ctx->pc = 0x20b588u;
    // NOP
    // 0x20b58c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B58Cu;
    {
        const bool branch_taken_0x20b58c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b58c) {
            ctx->pc = 0x20B578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b578;
        }
    }
    ctx->pc = 0x20B594u;
    // 0x20b594: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b598: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x20b598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x20b59c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x20b59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x20b5a0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b5a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20b5a4u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x20b5a8: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x20b5a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x20b5ac: 0x0  nop
    ctx->pc = 0x20b5acu;
    // NOP
    ctx->pc = 0x20b5b0u;
}
