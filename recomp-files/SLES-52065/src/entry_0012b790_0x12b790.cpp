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

// Function: entry_0012b790
// Address: 0x12b790 - 0x12b7ac
void entry_0012b790_0x12b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b790_0x12b790");
#endif

    ctx->pc = 0x12b790u;

    // 0x12b790: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x12b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x12b794: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x12b794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x12b798: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B798u;
    {
        const bool branch_taken_0x12b798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12b798) {
            ctx->pc = 0x12B7ACu;
            return;
        }
    }
    ctx->pc = 0x12B7A0u;
    // 0x12b7a0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x12b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x12b7a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b7a8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x12b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->pc = 0x12b7acu;
}
