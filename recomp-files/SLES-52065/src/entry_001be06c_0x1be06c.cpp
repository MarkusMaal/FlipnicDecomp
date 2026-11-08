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

// Function: entry_001be06c
// Address: 0x1be06c - 0x1be098
void entry_001be06c_0x1be06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be06c_0x1be06c");
#endif

    ctx->pc = 0x1be06cu;

    // 0x1be06c: 0x0  nop
    ctx->pc = 0x1be06cu;
    // NOP
    // 0x1be070: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1be070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1be074: 0x206082b  sltu        $at, $s0, $a2
    ctx->pc = 0x1be074u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1be078: 0x1020ffeb  beqz        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1BE078u;
    {
        const bool branch_taken_0x1be078 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be078) {
            ctx->pc = 0x1BE028u;
            return;
        }
    }
    ctx->pc = 0x1BE080u;
    // 0x1be080: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BE080u;
    {
        const bool branch_taken_0x1be080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be080) {
            ctx->pc = 0x1BE0B4u;
            return;
        }
    }
    ctx->pc = 0x1BE088u;
    // 0x1be088: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1be088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1be08c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1be08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1be090: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE090u;
    {
        const bool branch_taken_0x1be090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE090u;
        // 0x1be094: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be090) {
            ctx->pc = 0x1BE09Cu;
            return;
        }
    }
    ctx->pc = 0x1BE098u;
}
