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

// Function: entry_001fa938
// Address: 0x1fa938 - 0x1fa958
void entry_001fa938_0x1fa938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa938_0x1fa938");
#endif

    ctx->pc = 0x1fa938u;

    // 0x1fa938: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA938u;
    {
        const bool branch_taken_0x1fa938 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA938u;
        // 0x1fa93c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa938) {
            ctx->pc = 0x1FA958u;
            return;
        }
    }
    ctx->pc = 0x1FA940u;
    // 0x1fa940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa944: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1fa944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fa948: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fa948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa94c: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x1fa94cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x1fa950: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA950u;
    {
        const bool branch_taken_0x1fa950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA950u;
        // 0x1fa954: 0xafa4014c  sw          $a0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa950) {
            ctx->pc = 0x1FA974u;
            return;
        }
    }
    ctx->pc = 0x1FA958u;
}
