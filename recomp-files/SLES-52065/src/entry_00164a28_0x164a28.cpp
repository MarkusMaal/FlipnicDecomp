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

// Function: entry_00164a28
// Address: 0x164a28 - 0x164a44
void entry_00164a28_0x164a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164a28_0x164a28");
#endif

    ctx->pc = 0x164a28u;

    // 0x164a28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x164a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164a2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164a30: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x164a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x164a34: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164A34u;
    {
        const bool branch_taken_0x164a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x164a34) {
            ctx->pc = 0x164A44u;
            return;
        }
    }
    ctx->pc = 0x164A3Cu;
    // 0x164a3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x164A3Cu;
    {
        const bool branch_taken_0x164a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a3c) {
            ctx->pc = 0x164A48u;
            return;
        }
    }
    ctx->pc = 0x164A44u;
}
