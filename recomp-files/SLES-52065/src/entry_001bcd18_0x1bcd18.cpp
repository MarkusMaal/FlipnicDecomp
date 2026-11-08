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

// Function: entry_001bcd18
// Address: 0x1bcd18 - 0x1bcd30
void entry_001bcd18_0x1bcd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcd18_0x1bcd18");
#endif

    ctx->pc = 0x1bcd18u;

    // 0x1bcd18: 0x3393c  dsll32      $a3, $v1, 4
    ctx->pc = 0x1bcd18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1bcd1c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1bcd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bcd20: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCD20u;
    {
        const bool branch_taken_0x1bcd20 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BCD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD20u;
        // 0x1bcd24: 0x7393f  dsra32      $a3, $a3, 4 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd20) {
            ctx->pc = 0x1BCD30u;
            return;
        }
    }
    ctx->pc = 0x1BCD28u;
    // 0x1bcd28: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1bcd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1bcd2c: 0x23903  sra         $a3, $v0, 4
    ctx->pc = 0x1bcd2cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x1bcd30u;
}
