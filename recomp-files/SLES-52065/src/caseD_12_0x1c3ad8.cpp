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

// Function: caseD_12
// Address: 0x1c3ad8 - 0x1c3b28
void caseD_12_0x1c3ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x1c3ad8");
#endif

    switch (ctx->pc) {
        case 0x1c3ae4u: goto label_1c3ae4;
        case 0x1c3af0u: goto label_1c3af0;
        case 0x1c3afcu: goto label_1c3afc;
        default: break;
    }

    ctx->pc = 0x1c3ad8u;

    // 0x1c3ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3adc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3ADCu;
    SET_GPR_U32(ctx, 31, 0x1C3AE4u);
    ctx->pc = 0x1C3AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3ADCu;
    // 0x1c3ae0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3ADCu, 0x1C3AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AE4u;
label_1c3ae4:
    // 0x1c3ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ae8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3AE8u;
    SET_GPR_U32(ctx, 31, 0x1C3AF0u);
    ctx->pc = 0x1C3AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AE8u;
    // 0x1c3aec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3AE8u, 0x1C3AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AF0u;
label_1c3af0:
    // 0x1c3af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3af4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3AF4u;
    SET_GPR_U32(ctx, 31, 0x1C3AFCu);
    ctx->pc = 0x1C3AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AF4u;
    // 0x1c3af8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3AF4u, 0x1C3AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AFCu;
label_1c3afc:
    // 0x1c3afc: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1c3afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1c3b00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3b04: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3B04u;
    {
        const bool branch_taken_0x1c3b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3b04) {
            ctx->pc = 0x1C3B2Cu;
            return;
        }
    }
    ctx->pc = 0x1C3B0Cu;
    // 0x1c3b0c: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x1c3b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1c3b10: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x1c3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x1c3b14: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3B14u;
    {
        const bool branch_taken_0x1c3b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B14u;
        // 0x1c3b18: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b14) {
            ctx->pc = 0x1C3B28u;
            return;
        }
    }
    ctx->pc = 0x1C3B1Cu;
    // 0x1c3b1c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1c3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c3b20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3B20u;
    {
        const bool branch_taken_0x1c3b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B20u;
        // 0x1c3b24: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b20) {
            ctx->pc = 0x1C3B2Cu;
            return;
        }
    }
    ctx->pc = 0x1C3B28u;
}
