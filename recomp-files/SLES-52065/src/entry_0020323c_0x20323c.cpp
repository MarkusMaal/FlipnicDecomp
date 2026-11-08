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

// Function: entry_0020323c
// Address: 0x20323c - 0x20325c
void entry_0020323c_0x20323c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020323c_0x20323c");
#endif

    ctx->pc = 0x20323cu;

    // 0x20323c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x20323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x203240: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x203240u;
    {
        const bool branch_taken_0x203240 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x203244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203240u;
        // 0x203244: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203240) {
            ctx->pc = 0x203268u;
            return;
        }
    }
    ctx->pc = 0x203248u;
    // 0x203248: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x203248u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20324c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20324Cu;
    {
        const bool branch_taken_0x20324c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x203250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20324Cu;
        // 0x203250: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20324c) {
            ctx->pc = 0x20325Cu;
            return;
        }
    }
    ctx->pc = 0x203254u;
    // 0x203254: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203254u;
    {
        const bool branch_taken_0x203254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x203254) {
            ctx->pc = 0x203268u;
            return;
        }
    }
    ctx->pc = 0x20325Cu;
}
