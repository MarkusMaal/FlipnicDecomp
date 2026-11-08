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

// Function: entry_0017fddc
// Address: 0x17fddc - 0x17fe40
void entry_0017fddc_0x17fddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fddc_0x17fddc");
#endif

    switch (ctx->pc) {
        case 0x17fe00u: goto label_17fe00;
        case 0x17fe14u: goto label_17fe14;
        case 0x17fe28u: goto label_17fe28;
        case 0x17fe3cu: goto label_17fe3c;
        default: break;
    }

    ctx->pc = 0x17fddcu;

    // 0x17fddc: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x17fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x17fde0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x17fde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x17fde4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17FDE4u;
    {
        const bool branch_taken_0x17fde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDE4u;
        // 0x17fde8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fde4) {
            ctx->pc = 0x17FE40u;
            return;
        }
    }
    ctx->pc = 0x17FDECu;
    // 0x17fdec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17fdecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fdf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17fdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fdf4: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x17fdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x17fdf8: 0xc05ffac  jal         func_17FEB0
    ctx->pc = 0x17FDF8u;
    SET_GPR_U32(ctx, 31, 0x17FE00u);
    ctx->pc = 0x17FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDF8u;
    // 0x17fdfc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FEB0u, 0x17FDF8u, 0x17FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE00u;
label_17fe00:
    // 0x17fe00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17fe00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe04: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17fe04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe08: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x17fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x17fe0c: 0xc05ffac  jal         func_17FEB0
    ctx->pc = 0x17FE0Cu;
    SET_GPR_U32(ctx, 31, 0x17FE14u);
    ctx->pc = 0x17FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE0Cu;
    // 0x17fe10: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FEB0u, 0x17FE0Cu, 0x17FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE14u;
label_17fe14:
    // 0x17fe14: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x17fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x17fe18: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x17fe18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x17fe1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17fe1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17fe20: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x17FE20u;
    SET_GPR_U32(ctx, 31, 0x17FE28u);
    ctx->pc = 0x17FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE20u;
    // 0x17fe24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x17FE20u, 0x17FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE28u;
label_17fe28:
    // 0x17fe28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17fe2c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x17fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x17fe30: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x17fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x17fe34: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x17FE34u;
    SET_GPR_U32(ctx, 31, 0x17FE3Cu);
    ctx->pc = 0x17FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE34u;
    // 0x17fe38: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17FE34u, 0x17FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE3Cu;
label_17fe3c:
    // 0x17fe3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17fe3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17fe40u;
}
