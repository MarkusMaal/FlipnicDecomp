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

// Function: entry_0020b230
// Address: 0x20b230 - 0x20b260
void entry_0020b230_0x20b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b230_0x20b230");
#endif

    ctx->pc = 0x20b230u;

label_20b230:
    // 0x20b230: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b234: 0x0  nop
    ctx->pc = 0x20b234u;
    // NOP
    // 0x20b238: 0x0  nop
    ctx->pc = 0x20b238u;
    // NOP
    // 0x20b23c: 0x0  nop
    ctx->pc = 0x20b23cu;
    // NOP
    // 0x20b240: 0x0  nop
    ctx->pc = 0x20b240u;
    // NOP
    // 0x20b244: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20B244u;
    {
        const bool branch_taken_0x20b244 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20b244) {
            ctx->pc = 0x20B230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b230;
        }
    }
    ctx->pc = 0x20B24Cu;
    // 0x20b24c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x20b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x20b250: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20b250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20b254: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x20b254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x20b258: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x20b258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x20b25c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x20b25cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 19));
    ctx->pc = 0x20b260u;
}
