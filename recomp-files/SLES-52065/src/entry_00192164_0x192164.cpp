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

// Function: entry_00192164
// Address: 0x192164 - 0x192198
void entry_00192164_0x192164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192164_0x192164");
#endif

    ctx->pc = 0x192164u;

    // 0x192164: 0x0  nop
    ctx->pc = 0x192164u;
    // NOP
    // 0x192168: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19216c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x19216cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x192170: 0x848201ec  lh          $v0, 0x1EC($a0)
    ctx->pc = 0x192170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 492)));
    // 0x192174: 0x8c630450  lw          $v1, 0x450($v1)
    ctx->pc = 0x192174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1104)));
    // 0x192178: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x192178u;
    {
        const bool branch_taken_0x192178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x192178) {
            ctx->pc = 0x1921B0u;
            return;
        }
    }
    ctx->pc = 0x192180u;
    // 0x192180: 0x848301e8  lh          $v1, 0x1E8($a0)
    ctx->pc = 0x192180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x192184: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x192184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192188: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192188u;
    {
        const bool branch_taken_0x192188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192188u;
        // 0x19218c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192188) {
            ctx->pc = 0x192198u;
            return;
        }
    }
    ctx->pc = 0x192190u;
    // 0x192190: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192190u;
    {
        const bool branch_taken_0x192190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192190) {
            ctx->pc = 0x19219Cu;
            return;
        }
    }
    ctx->pc = 0x192198u;
}
