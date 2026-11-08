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

// Function: entry_001df7e8
// Address: 0x1df7e8 - 0x1df810
void entry_001df7e8_0x1df7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df7e8_0x1df7e8");
#endif

    ctx->pc = 0x1df7e8u;

    // 0x1df7e8: 0x1102003f  beq         $t0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1DF7E8u;
    {
        const bool branch_taken_0x1df7e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7E8u;
        // 0x1df7ec: 0x29020021  slti        $v0, $t0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7e8) {
            ctx->pc = 0x1DF8E8u;
            return;
        }
    }
    ctx->pc = 0x1DF7F0u;
    // 0x1df7f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF7F0u;
    {
        const bool branch_taken_0x1df7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7F0u;
        // 0x1df7f4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7f0) {
            ctx->pc = 0x1DF810u;
            return;
        }
    }
    ctx->pc = 0x1DF7F8u;
    // 0x1df7f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1df7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1df7fc: 0x11020032  beq         $t0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1DF7FCu;
    {
        const bool branch_taken_0x1df7fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7FCu;
        // 0x1df800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7fc) {
            ctx->pc = 0x1DF8C8u;
            return;
        }
    }
    ctx->pc = 0x1DF804u;
    // 0x1df804: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1DF804u;
    {
        const bool branch_taken_0x1df804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF804u;
        // 0x1df808: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df804) {
            ctx->pc = 0x1DFA44u;
            return;
        }
    }
    ctx->pc = 0x1DF80Cu;
    // 0x1df80c: 0x0  nop
    ctx->pc = 0x1df80cu;
    // NOP
    ctx->pc = 0x1df810u;
}
