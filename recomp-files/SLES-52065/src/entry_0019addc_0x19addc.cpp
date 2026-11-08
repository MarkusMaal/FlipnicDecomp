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

// Function: entry_0019addc
// Address: 0x19addc - 0x19ae14
void entry_0019addc_0x19addc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019addc_0x19addc");
#endif

    switch (ctx->pc) {
        case 0x19adecu: goto label_19adec;
        case 0x19adf8u: goto label_19adf8;
        case 0x19ae0cu: goto label_19ae0c;
        default: break;
    }

    ctx->pc = 0x19addcu;

    // 0x19addc: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x19addcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x19ade0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x19ade0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19ade4: 0xc06cdb8  jal         func_1B36E0
    ctx->pc = 0x19ADE4u;
    SET_GPR_U32(ctx, 31, 0x19ADECu);
    ctx->pc = 0x19ADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ADE4u;
    // 0x19ade8: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36E0u, 0x19ADE4u, 0x19ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADECu;
label_19adec:
    // 0x19adec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19adecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adf0: 0xc0667e0  jal         func_199F80
    ctx->pc = 0x19ADF0u;
    SET_GPR_U32(ctx, 31, 0x19ADF8u);
    ctx->pc = 0x19ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ADF0u;
    // 0x19adf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F80u, 0x19ADF0u, 0x19ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADF8u;
label_19adf8:
    // 0x19adf8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19ADF8u;
    {
        const bool branch_taken_0x19adf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19adf8) {
            ctx->pc = 0x19AE28u;
            return;
        }
    }
    ctx->pc = 0x19AE00u;
    // 0x19ae00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ae00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae04: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19AE04u;
    SET_GPR_U32(ctx, 31, 0x19AE0Cu);
    ctx->pc = 0x19AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE04u;
    // 0x19ae08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19AE04u, 0x19AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE0Cu;
label_19ae0c:
    // 0x19ae0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19AE0Cu;
    {
        const bool branch_taken_0x19ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ae0c) {
            ctx->pc = 0x19AE28u;
            return;
        }
    }
    ctx->pc = 0x19AE14u;
}
