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

// Function: entry_00164088
// Address: 0x164088 - 0x16409c
void entry_00164088_0x164088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164088_0x164088");
#endif

    ctx->pc = 0x164088u;

    // 0x164088: 0x8e4301d4  lw          $v1, 0x1D4($s2)
    ctx->pc = 0x164088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x16408c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16408Cu;
    {
        const bool branch_taken_0x16408c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16408Cu;
        // 0x164090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16408c) {
            ctx->pc = 0x16409Cu;
            return;
        }
    }
    ctx->pc = 0x164094u;
    // 0x164094: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x164094u;
    {
        const bool branch_taken_0x164094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164094u;
        // 0x164098: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164094) {
            ctx->pc = 0x164350u;
            return;
        }
    }
    ctx->pc = 0x16409Cu;
}
