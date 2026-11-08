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

// Function: caseD_0
// Address: 0x191240 - 0x191264
void caseD_0_0x191240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x191240");
#endif

    ctx->pc = 0x191240u;

    // 0x191240: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19124c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x19124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x191250: 0x8c4201fc  lw          $v0, 0x1FC($v0)
    ctx->pc = 0x191250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x191254: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x191254u;
    {
        const bool branch_taken_0x191254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191254) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x19125Cu;
    // 0x19125c: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x19125Cu;
    {
        const bool branch_taken_0x19125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19125Cu;
        // 0x191260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19125c) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x191264u;
}
