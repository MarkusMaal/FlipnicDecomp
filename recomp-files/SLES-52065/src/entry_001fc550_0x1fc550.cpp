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

// Function: entry_001fc550
// Address: 0x1fc550 - 0x1fc56c
void entry_001fc550_0x1fc550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc550_0x1fc550");
#endif

    ctx->pc = 0x1fc550u;

    // 0x1fc550: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x1fc550u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1fc554: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1fc554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fc558: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC558u;
    {
        const bool branch_taken_0x1fc558 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1fc558) {
            ctx->pc = 0x1FC55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC558u;
            // 0x1fc55c: 0x108023  negu        $s0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC56Cu;
            return;
        }
    }
    ctx->pc = 0x1FC560u;
    // 0x1fc560: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x1fc560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x1fc564: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC564u;
    {
        const bool branch_taken_0x1fc564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC564u;
        // 0x1fc568: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc564) {
            ctx->pc = 0x1FC574u;
            return;
        }
    }
    ctx->pc = 0x1FC56Cu;
}
