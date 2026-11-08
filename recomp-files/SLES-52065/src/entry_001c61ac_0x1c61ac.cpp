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

// Function: entry_001c61ac
// Address: 0x1c61ac - 0x1c61c8
void entry_001c61ac_0x1c61ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c61ac_0x1c61ac");
#endif

    ctx->pc = 0x1c61acu;

    // 0x1c61ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c61acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c61b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61b4: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1c61b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c61b8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C61B8u;
    {
        const bool branch_taken_0x1c61b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c61b8) {
            ctx->pc = 0x1C61C8u;
            return;
        }
    }
    ctx->pc = 0x1C61C0u;
    // 0x1c61c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C61C0u;
    {
        const bool branch_taken_0x1c61c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c61c0) {
            ctx->pc = 0x1C61CCu;
            return;
        }
    }
    ctx->pc = 0x1C61C8u;
}
