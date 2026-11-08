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

// Function: entry_001a4928
// Address: 0x1a4928 - 0x1a4954
void entry_001a4928_0x1a4928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4928_0x1a4928");
#endif

    ctx->pc = 0x1a4928u;

    // 0x1a4928: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a492c: 0x8c830450  lw          $v1, 0x450($a0)
    ctx->pc = 0x1a492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
    // 0x1a4930: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a4930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a4938: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1a4938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1a493c: 0x8c4201fc  lw          $v0, 0x1FC($v0)
    ctx->pc = 0x1a493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x1a4940: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4940u;
    {
        const bool branch_taken_0x1a4940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4940u;
        // 0x1a4944: 0x24920450  addiu       $s2, $a0, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4940) {
            ctx->pc = 0x1A4954u;
            return;
        }
    }
    ctx->pc = 0x1A4948u;
    // 0x1a4948: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a4948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1a494c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A494Cu;
    {
        const bool branch_taken_0x1a494c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a494c) {
            ctx->pc = 0x1A49B0u;
            return;
        }
    }
    ctx->pc = 0x1A4954u;
}
