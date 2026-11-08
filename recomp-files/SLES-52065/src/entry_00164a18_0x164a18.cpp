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

// Function: entry_00164a18
// Address: 0x164a18 - 0x164a28
void entry_00164a18_0x164a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164a18_0x164a18");
#endif

    ctx->pc = 0x164a18u;

    // 0x164a18: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x164A18u;
    {
        const bool branch_taken_0x164a18 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x164A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A18u;
        // 0x164a1c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a18) {
            ctx->pc = 0x164A28u;
            return;
        }
    }
    ctx->pc = 0x164A20u;
    // 0x164a20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x164A20u;
    {
        const bool branch_taken_0x164a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A20u;
        // 0x164a24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a20) {
            ctx->pc = 0x164A48u;
            return;
        }
    }
    ctx->pc = 0x164A28u;
}
