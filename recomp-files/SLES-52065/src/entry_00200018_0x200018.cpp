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

// Function: entry_00200018
// Address: 0x200018 - 0x200038
void entry_00200018_0x200018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200018_0x200018");
#endif

    ctx->pc = 0x200018u;

    // 0x200018: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x200018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x20001c: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x20001cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x200020: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x200020u;
    {
        const bool branch_taken_0x200020 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x200024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200020u;
        // 0x200024: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200020) {
            ctx->pc = 0x200094u;
            return;
        }
    }
    ctx->pc = 0x200028u;
    // 0x200028: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x200028u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20002c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20002cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200030: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x200030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x200034: 0x250f0004  addiu       $t7, $t0, 0x4
    ctx->pc = 0x200034u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    ctx->pc = 0x200038u;
}
