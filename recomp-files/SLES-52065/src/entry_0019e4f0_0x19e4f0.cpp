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

// Function: entry_0019e4f0
// Address: 0x19e4f0 - 0x19e528
void entry_0019e4f0_0x19e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e4f0_0x19e4f0");
#endif

    switch (ctx->pc) {
        case 0x19e510u: goto label_19e510;
        default: break;
    }

    ctx->pc = 0x19e4f0u;

    // 0x19e4f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x19e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x19e4f4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19e4f8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19E4F8u;
    {
        const bool branch_taken_0x19e4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e4f8) {
            ctx->pc = 0x19E528u;
            return;
        }
    }
    ctx->pc = 0x19E500u;
    // 0x19e500: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x19e500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x19e504: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x19e504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x19e508: 0xc057040  jal         func_15C100
    ctx->pc = 0x19E508u;
    SET_GPR_U32(ctx, 31, 0x19E510u);
    ctx->pc = 0x19E50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E508u;
    // 0x19e50c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19E508u, 0x19E510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E510u;
label_19e510:
    // 0x19e510: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x19e510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x19e514: 0xac620674  sw          $v0, 0x674($v1)
    ctx->pc = 0x19e514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1652), GPR_U32(ctx, 2));
    // 0x19e518: 0xac730974  sw          $s3, 0x974($v1)
    ctx->pc = 0x19e518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2420), GPR_U32(ctx, 19));
    // 0x19e51c: 0xac600774  sw          $zero, 0x774($v1)
    ctx->pc = 0x19e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1908), GPR_U32(ctx, 0));
    // 0x19e520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19E520u;
    {
        const bool branch_taken_0x19e520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E520u;
        // 0x19e524: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e520) {
            ctx->pc = 0x19E530u;
            return;
        }
    }
    ctx->pc = 0x19E528u;
}
