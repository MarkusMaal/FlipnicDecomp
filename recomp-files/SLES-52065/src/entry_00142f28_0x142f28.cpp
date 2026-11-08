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

// Function: entry_00142f28
// Address: 0x142f28 - 0x142f44
void entry_00142f28_0x142f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142f28_0x142f28");
#endif

    ctx->pc = 0x142f28u;

    // 0x142f28: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x142f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x142f2c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x142f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x142f30: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x142f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x142f34: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x142f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x142f38: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x142f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x142f3c: 0x1462ff5f  bne         $v1, $v0, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x142F3Cu;
    {
        const bool branch_taken_0x142f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x142f3c) {
            ctx->pc = 0x142CBCu;
            return;
        }
    }
    ctx->pc = 0x142F44u;
}
