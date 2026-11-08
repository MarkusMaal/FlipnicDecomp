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

// Function: entry_0020b540
// Address: 0x20b540 - 0x20b578
void entry_0020b540_0x20b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b540_0x20b540");
#endif

    ctx->pc = 0x20b540u;

label_20b540:
    // 0x20b540: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x20b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20b544: 0x0  nop
    ctx->pc = 0x20b544u;
    // NOP
    // 0x20b548: 0x0  nop
    ctx->pc = 0x20b548u;
    // NOP
    // 0x20b54c: 0x0  nop
    ctx->pc = 0x20b54cu;
    // NOP
    // 0x20b550: 0x0  nop
    ctx->pc = 0x20b550u;
    // NOP
    // 0x20b554: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B554u;
    {
        const bool branch_taken_0x20b554 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b554) {
            ctx->pc = 0x20B540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b540;
        }
    }
    ctx->pc = 0x20B55Cu;
    // 0x20b55c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b560: 0x3c039000  lui         $v1, 0x9000
    ctx->pc = 0x20b560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36864 << 16));
    // 0x20b564: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x20b564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x20b568: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x20b568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x20b56c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x20b56cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x20b570: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x20b570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x20b574: 0x0  nop
    ctx->pc = 0x20b574u;
    // NOP
    ctx->pc = 0x20b578u;
}
