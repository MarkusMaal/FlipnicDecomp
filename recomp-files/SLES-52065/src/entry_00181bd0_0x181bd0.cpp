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

// Function: entry_00181bd0
// Address: 0x181bd0 - 0x181c00
void entry_00181bd0_0x181bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181bd0_0x181bd0");
#endif

    switch (ctx->pc) {
        case 0x181be4u: goto label_181be4;
        case 0x181bfcu: goto label_181bfc;
        default: break;
    }

    ctx->pc = 0x181bd0u;

label_181bd0:
    // 0x181bd0: 0x8e320058  lw          $s2, 0x58($s1)
    ctx->pc = 0x181bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_181bd4:
    // 0x181bd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181bd8:
    // 0x181bd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181bdc:
    // 0x181bdc: 0xc0495c0  jal         func_125700
label_181be0:
    if (ctx->pc == 0x181BE0u) {
        ctx->pc = 0x181BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BDCu;
        // 0x181be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181BE4u;
        goto label_181be4;
    }
    ctx->pc = 0x181BDCu;
    SET_GPR_U32(ctx, 31, 0x181BE4u);
    ctx->pc = 0x181BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181BDCu;
    // 0x181be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x181BDCu, 0x181BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181BE4u;
label_181be4:
    // 0x181be4: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x181be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_181be8:
    // 0x181be8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181bec:
    // 0x181bec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x181becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_181bf0:
    // 0x181bf0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x181bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_181bf4:
    // 0x181bf4: 0x320f809  jalr        $t9
label_181bf8:
    if (ctx->pc == 0x181BF8u) {
        ctx->pc = 0x181BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BF4u;
        // 0x181bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181BFCu;
        goto label_181bfc;
    }
    ctx->pc = 0x181BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x181BFCu);
        ctx->pc = 0x181BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BF4u;
        // 0x181bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181BF4u, 0x181BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181BFCu;
label_181bfc:
    // 0x181bfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x181bfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x181c00u;
}
