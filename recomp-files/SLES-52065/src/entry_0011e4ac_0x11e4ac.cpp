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

// Function: entry_0011e4ac
// Address: 0x11e4ac - 0x11e4c4
void entry_0011e4ac_0x11e4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e4ac_0x11e4ac");
#endif

    ctx->pc = 0x11e4acu;

    // 0x11e4ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e4b0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E4B0u;
    {
        const bool branch_taken_0x11e4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4B0u;
        // 0x11e4b4: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4b0) {
            ctx->pc = 0x11E4C4u;
            return;
        }
    }
    ctx->pc = 0x11E4B8u;
    // 0x11e4b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11e4bc: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E4BCu;
    {
        const bool branch_taken_0x11e4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4BCu;
        // 0x11e4c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4bc) {
            ctx->pc = 0x11E4ECu;
            return;
        }
    }
    ctx->pc = 0x11E4C4u;
}
