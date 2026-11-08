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

// Function: entry_001df868
// Address: 0x1df868 - 0x1df890
void entry_001df868_0x1df868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df868_0x1df868");
#endif

    ctx->pc = 0x1df868u;

    // 0x1df868: 0x1102006b  beq         $t0, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1DF868u;
    {
        const bool branch_taken_0x1df868 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF868u;
        // 0x1df86c: 0x29022001  slti        $v0, $t0, 0x2001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df868) {
            ctx->pc = 0x1DFA18u;
            return;
        }
    }
    ctx->pc = 0x1DF870u;
    // 0x1df870: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF870u;
    {
        const bool branch_taken_0x1df870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF870u;
        // 0x1df874: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df870) {
            ctx->pc = 0x1DF890u;
            return;
        }
    }
    ctx->pc = 0x1DF878u;
    // 0x1df878: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1df878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1df87c: 0x11020060  beq         $t0, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1DF87Cu;
    {
        const bool branch_taken_0x1df87c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF87Cu;
        // 0x1df880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df87c) {
            ctx->pc = 0x1DFA00u;
            return;
        }
    }
    ctx->pc = 0x1DF884u;
    // 0x1df884: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1DF884u;
    {
        const bool branch_taken_0x1df884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF884u;
        // 0x1df888: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df884) {
            ctx->pc = 0x1DFA44u;
            return;
        }
    }
    ctx->pc = 0x1DF88Cu;
    // 0x1df88c: 0x0  nop
    ctx->pc = 0x1df88cu;
    // NOP
    ctx->pc = 0x1df890u;
}
