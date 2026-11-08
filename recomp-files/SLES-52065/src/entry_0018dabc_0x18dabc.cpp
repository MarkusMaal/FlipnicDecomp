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

// Function: entry_0018dabc
// Address: 0x18dabc - 0x18db08
void entry_0018dabc_0x18dabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dabc_0x18dabc");
#endif

    switch (ctx->pc) {
        case 0x18daccu: goto label_18dacc;
        case 0x18dadcu: goto label_18dadc;
        case 0x18db00u: goto label_18db00;
        default: break;
    }

    ctx->pc = 0x18dabcu;

label_18dabc:
    // 0x18dabc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18dabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18dac0:
    // 0x18dac0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18dac4:
    // 0x18dac4: 0xc05f878  jal         func_17E1E0
label_18dac8:
    if (ctx->pc == 0x18DAC8u) {
        ctx->pc = 0x18DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAC4u;
        // 0x18dac8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DACCu;
        goto label_18dacc;
    }
    ctx->pc = 0x18DAC4u;
    SET_GPR_U32(ctx, 31, 0x18DACCu);
    ctx->pc = 0x18DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAC4u;
    // 0x18dac8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18DAC4u, 0x18DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DACCu;
label_18dacc:
    // 0x18dacc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18daccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18dad0:
    // 0x18dad0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18dad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18dad4:
    // 0x18dad4: 0x320f809  jalr        $t9
label_18dad8:
    if (ctx->pc == 0x18DAD8u) {
        ctx->pc = 0x18DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAD4u;
        // 0x18dad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DADCu;
        goto label_18dadc;
    }
    ctx->pc = 0x18DAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18DADCu);
        ctx->pc = 0x18DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAD4u;
        // 0x18dad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DAD4u, 0x18DADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18DADCu;
label_18dadc:
    // 0x18dadc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_18dae0:
    if (ctx->pc == 0x18DAE0u) {
        ctx->pc = 0x18DAE4u;
        goto label_18dae4;
    }
    ctx->pc = 0x18DADCu;
    {
        const bool branch_taken_0x18dadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dadc) {
            ctx->pc = 0x18DB4Cu;
            return;
        }
    }
    ctx->pc = 0x18DAE4u;
label_18dae4:
    // 0x18dae4: 0xae200478  sw          $zero, 0x478($s1)
    ctx->pc = 0x18dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 0));
label_18dae8:
    // 0x18dae8: 0x8e220480  lw          $v0, 0x480($s1)
    ctx->pc = 0x18dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1152)));
label_18daec:
    // 0x18daec: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_18daf0:
    if (ctx->pc == 0x18DAF0u) {
        ctx->pc = 0x18DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAECu;
        // 0x18daf0: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DAF4u;
        goto label_18daf4;
    }
    ctx->pc = 0x18DAECu;
    {
        const bool branch_taken_0x18daec = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x18DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAECu;
        // 0x18daf0: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18daec) {
            ctx->pc = 0x18DB08u;
            return;
        }
    }
    ctx->pc = 0x18DAF4u;
label_18daf4:
    // 0x18daf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18daf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18daf8:
    // 0x18daf8: 0xc063e08  jal         func_18F820
label_18dafc:
    if (ctx->pc == 0x18DAFCu) {
        ctx->pc = 0x18DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DAF8u;
        // 0x18dafc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DB00u;
        goto label_18db00;
    }
    ctx->pc = 0x18DAF8u;
    SET_GPR_U32(ctx, 31, 0x18DB00u);
    ctx->pc = 0x18DAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DAF8u;
    // 0x18dafc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DAF8u, 0x18DB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DB00u;
label_18db00:
    // 0x18db00: 0x10000012  b           . + 4 + (0x12 << 2)
label_18db04:
    if (ctx->pc == 0x18DB04u) {
        ctx->pc = 0x18DB08u;
        goto label_fallthrough_0x18db00;
    }
    ctx->pc = 0x18DB00u;
    {
        const bool branch_taken_0x18db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18db00) {
            ctx->pc = 0x18DB4Cu;
            return;
        }
    }
label_fallthrough_0x18db00:
    ctx->pc = 0x18DB08u;
}
