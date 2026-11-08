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

// Function: entry_001cff38
// Address: 0x1cff38 - 0x1cffc0
void entry_001cff38_0x1cff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cff38_0x1cff38");
#endif

    switch (ctx->pc) {
        case 0x1cff40u: goto label_1cff40;
        case 0x1cff58u: goto label_1cff58;
        case 0x1cff68u: goto label_1cff68;
        case 0x1cff78u: goto label_1cff78;
        case 0x1cff88u: goto label_1cff88;
        case 0x1cff94u: goto label_1cff94;
        case 0x1cffa8u: goto label_1cffa8;
        default: break;
    }

    ctx->pc = 0x1cff38u;

    // 0x1cff38: 0xc073038  jal         func_1CC0E0
    ctx->pc = 0x1CFF38u;
    SET_GPR_U32(ctx, 31, 0x1CFF40u);
    ctx->pc = 0x1CFF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF38u;
    // 0x1cff3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC0E0u, 0x1CFF38u, 0x1CFF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF40u;
label_1cff40:
    // 0x1cff40: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x1cff40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1cff44: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CFF44u;
    {
        const bool branch_taken_0x1cff44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff44) {
            ctx->pc = 0x1CFFC0u;
            return;
        }
    }
    ctx->pc = 0x1CFF4Cu;
    // 0x1cff4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff50: 0xc073048  jal         func_1CC120
    ctx->pc = 0x1CFF50u;
    SET_GPR_U32(ctx, 31, 0x1CFF58u);
    ctx->pc = 0x1CFF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF50u;
    // 0x1cff54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC120u, 0x1CFF50u, 0x1CFF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF58u;
label_1cff58:
    // 0x1cff58: 0xde460028  ld          $a2, 0x28($s2)
    ctx->pc = 0x1cff58u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1cff5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff60: 0xc072fec  jal         func_1CBFB0
    ctx->pc = 0x1CFF60u;
    SET_GPR_U32(ctx, 31, 0x1CFF68u);
    ctx->pc = 0x1CFF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF60u;
    // 0x1cff64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFB0u, 0x1CFF60u, 0x1CFF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF68u;
label_1cff68:
    // 0x1cff68: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x1cff68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1cff6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff70: 0xc072fdc  jal         func_1CBF70
    ctx->pc = 0x1CFF70u;
    SET_GPR_U32(ctx, 31, 0x1CFF78u);
    ctx->pc = 0x1CFF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF70u;
    // 0x1cff74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBF70u, 0x1CFF70u, 0x1CFF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF78u;
label_1cff78:
    // 0x1cff78: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x1cff78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1cff7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff80: 0xc072ffc  jal         func_1CBFF0
    ctx->pc = 0x1CFF80u;
    SET_GPR_U32(ctx, 31, 0x1CFF88u);
    ctx->pc = 0x1CFF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF80u;
    // 0x1cff84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFF0u, 0x1CFF80u, 0x1CFF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF88u;
label_1cff88:
    // 0x1cff88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff8c: 0xc07300c  jal         func_1CC030
    ctx->pc = 0x1CFF8Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF94u);
    ctx->pc = 0x1CFF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF8Cu;
    // 0x1cff90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC030u, 0x1CFF8Cu, 0x1CFF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF94u;
label_1cff94:
    // 0x1cff94: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1cff94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1cff98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cff9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffa0: 0xc072fcc  jal         func_1CBF30
    ctx->pc = 0x1CFFA0u;
    SET_GPR_U32(ctx, 31, 0x1CFFA8u);
    ctx->pc = 0x1CFFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFA0u;
    // 0x1cffa4: 0x24c631c8  addiu       $a2, $a2, 0x31C8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBF30u, 0x1CFFA0u, 0x1CFFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFA8u;
label_1cffa8:
    // 0x1cffa8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cffa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cffac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cffacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cffb0: 0xac30fb50  sw          $s0, -0x4B0($at)
    ctx->pc = 0x1cffb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x36FB50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB50u, _value); } while (0);
    // 0x1cffb4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cffb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cffb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFFB8u;
    {
        const bool branch_taken_0x1cffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFB8u;
        // 0x1cffbc: 0xa023fb48  sb          $v1, -0x4B8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294966088), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffb8) {
            ctx->pc = 0x1CFFD0u;
            return;
        }
    }
    ctx->pc = 0x1CFFC0u;
}
