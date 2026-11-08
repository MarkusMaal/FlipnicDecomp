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

// Function: entry_0014e32c
// Address: 0x14e32c - 0x14e34c
void entry_0014e32c_0x14e32c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e32c_0x14e32c");
#endif

    ctx->pc = 0x14e32cu;

    // 0x14e32c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x14e330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e334: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x14e334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x14e338: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x14e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14e33c: 0x2238023  subu        $s0, $s1, $v1
    ctx->pc = 0x14e33cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x14e340: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x14e340u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e344: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x14E344u;
    {
        const bool branch_taken_0x14e344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E344u;
        // 0x14e348: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e344) {
            ctx->pc = 0x14E3BCu;
            return;
        }
    }
    ctx->pc = 0x14E34Cu;
}
