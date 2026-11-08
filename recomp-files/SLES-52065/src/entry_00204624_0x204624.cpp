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

// Function: entry_00204624
// Address: 0x204624 - 0x204640
void entry_00204624_0x204624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204624_0x204624");
#endif

    ctx->pc = 0x204624u;

    // 0x204624: 0xd58023  subu        $s0, $a2, $s5
    ctx->pc = 0x204624u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x204628: 0x1a00002f  blez        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x204628u;
    {
        const bool branch_taken_0x204628 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x20462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204628u;
        // 0x20462c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204628) {
            ctx->pc = 0x2046E8u;
            return;
        }
    }
    ctx->pc = 0x204630u;
    // 0x204630: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x204630u;
    {
        const bool branch_taken_0x204630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204630u;
        // 0x204634: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204630) {
            ctx->pc = 0x204698u;
            return;
        }
    }
    ctx->pc = 0x204638u;
    // 0x204638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204638u;
    {
        const bool branch_taken_0x204638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204638u;
        // 0x20463c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204638) {
            ctx->pc = 0x204644u;
            return;
        }
    }
    ctx->pc = 0x204640u;
}
