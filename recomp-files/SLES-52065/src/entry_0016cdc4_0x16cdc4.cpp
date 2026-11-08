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

// Function: entry_0016cdc4
// Address: 0x16cdc4 - 0x16cdf4
void entry_0016cdc4_0x16cdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cdc4_0x16cdc4");
#endif

    switch (ctx->pc) {
        case 0x16cdecu: goto label_16cdec;
        default: break;
    }

    ctx->pc = 0x16cdc4u;

label_16cdc4:
    // 0x16cdc4: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_16cdc8:
    if (ctx->pc == 0x16CDC8u) {
        ctx->pc = 0x16CDCCu;
        goto label_16cdcc;
    }
    ctx->pc = 0x16CDC4u;
    {
        const bool branch_taken_0x16cdc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16cdc4) {
            ctx->pc = 0x16CE08u;
            return;
        }
    }
    ctx->pc = 0x16CDCCu;
label_16cdcc:
    // 0x16cdcc: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x16cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16cdd0:
    // 0x16cdd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_16cdd4:
    if (ctx->pc == 0x16CDD4u) {
        ctx->pc = 0x16CDD8u;
        goto label_16cdd8;
    }
    ctx->pc = 0x16CDD0u;
    {
        const bool branch_taken_0x16cdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cdd0) {
            ctx->pc = 0x16CDF4u;
            return;
        }
    }
    ctx->pc = 0x16CDD8u;
label_16cdd8:
    // 0x16cdd8: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16cdd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16cddc:
    // 0x16cddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cde0:
    // 0x16cde0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16cde0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16cde4:
    // 0x16cde4: 0x320f809  jalr        $t9
label_16cde8:
    if (ctx->pc == 0x16CDE8u) {
        ctx->pc = 0x16CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDE4u;
        // 0x16cde8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CDECu;
        goto label_16cdec;
    }
    ctx->pc = 0x16CDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CDECu);
        ctx->pc = 0x16CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CDE4u;
        // 0x16cde8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CDE4u, 0x16CDECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CDECu;
label_16cdec:
    // 0x16cdec: 0x10000006  b           . + 4 + (0x6 << 2)
label_16cdf0:
    if (ctx->pc == 0x16CDF0u) {
        ctx->pc = 0x16CDF4u;
        goto label_fallthrough_0x16cdec;
    }
    ctx->pc = 0x16CDECu;
    {
        const bool branch_taken_0x16cdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cdec) {
            ctx->pc = 0x16CE08u;
            return;
        }
    }
label_fallthrough_0x16cdec:
    ctx->pc = 0x16CDF4u;
}
