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

// Function: entry_0020b3f8
// Address: 0x20b3f8 - 0x20b428
void entry_0020b3f8_0x20b3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b3f8_0x20b3f8");
#endif

    ctx->pc = 0x20b3f8u;

label_20b3f8:
    // 0x20b3f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b3fc: 0x0  nop
    ctx->pc = 0x20b3fcu;
    // NOP
    // 0x20b400: 0x0  nop
    ctx->pc = 0x20b400u;
    // NOP
    // 0x20b404: 0x0  nop
    ctx->pc = 0x20b404u;
    // NOP
    // 0x20b408: 0x0  nop
    ctx->pc = 0x20b408u;
    // NOP
    // 0x20b40c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B40Cu;
    {
        const bool branch_taken_0x20b40c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b40c) {
            ctx->pc = 0x20B3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b3f8;
        }
    }
    ctx->pc = 0x20B414u;
    // 0x20b414: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b418: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20b418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20b41c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x20b41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x20b420: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x20b420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x20b424: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20b424u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0));
    ctx->pc = 0x20b428u;
}
