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

// Function: entry_0018fda8
// Address: 0x18fda8 - 0x18fdcc
void entry_0018fda8_0x18fda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fda8_0x18fda8");
#endif

    ctx->pc = 0x18fda8u;

label_18fda8:
    // 0x18fda8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x18fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18fdac:
    // 0x18fdac: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_18fdb0:
    if (ctx->pc == 0x18FDB0u) {
        ctx->pc = 0x18FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDACu;
        // 0x18fdb0: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FDB4u;
        goto label_18fdb4;
    }
    ctx->pc = 0x18FDACu;
    {
        const bool branch_taken_0x18fdac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDACu;
        // 0x18fdb0: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdac) {
            ctx->pc = 0x18FDCCu;
            return;
        }
    }
    ctx->pc = 0x18FDB4u;
label_18fdb4:
    // 0x18fdb4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_18fdb8:
    if (ctx->pc == 0x18FDB8u) {
        ctx->pc = 0x18FDBCu;
        goto label_18fdbc;
    }
    ctx->pc = 0x18FDB4u;
    {
        const bool branch_taken_0x18fdb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fdb4) {
            ctx->pc = 0x18FDCCu;
            return;
        }
    }
    ctx->pc = 0x18FDBCu;
label_18fdbc:
    // 0x18fdbc: 0x8c99031c  lw          $t9, 0x31C($a0)
    ctx->pc = 0x18fdbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 796)));
label_18fdc0:
    // 0x18fdc0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x18fdc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_18fdc4:
    // 0x18fdc4: 0x320f809  jalr        $t9
label_18fdc8:
    if (ctx->pc == 0x18FDC8u) {
        ctx->pc = 0x18FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDC4u;
        // 0x18fdc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FDCCu;
        goto label_fallthrough_0x18fdc4;
    }
    ctx->pc = 0x18FDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FDCCu);
        ctx->pc = 0x18FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FDC4u;
        // 0x18fdc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FDC4u, 0x18FDCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x18fdc4:
    ctx->pc = 0x18FDCCu;
}
