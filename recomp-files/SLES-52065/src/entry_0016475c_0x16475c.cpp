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

// Function: entry_0016475c
// Address: 0x16475c - 0x16476c
void entry_0016475c_0x16475c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016475c_0x16475c");
#endif

    ctx->pc = 0x16475cu;

    // 0x16475c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16475Cu;
    {
        const bool branch_taken_0x16475c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x164760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16475Cu;
        // 0x164760: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16475c) {
            ctx->pc = 0x16476Cu;
            return;
        }
    }
    ctx->pc = 0x164764u;
    // 0x164764: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x164764u;
    {
        const bool branch_taken_0x164764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164764u;
        // 0x164768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164764) {
            ctx->pc = 0x16478Cu;
            return;
        }
    }
    ctx->pc = 0x16476Cu;
}
