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

// Function: FUN_00118ba0
// Address: 0x118ba0 - 0x118d38
void FUN_00118ba0_0x118ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118ba0_0x118ba0");
#endif

    switch (ctx->pc) {
        case 0x118bb8u: goto label_118bb8;
        case 0x118bc0u: goto label_118bc0;
        case 0x118bc8u: goto label_118bc8;
        case 0x118bd0u: goto label_118bd0;
        case 0x118c0cu: goto label_118c0c;
        case 0x118c14u: goto label_118c14;
        case 0x118c34u: goto label_118c34;
        case 0x118c4cu: goto label_118c4c;
        case 0x118c68u: goto label_118c68;
        case 0x118c70u: goto label_118c70;
        case 0x118c80u: goto label_118c80;
        case 0x118c94u: goto label_118c94;
        case 0x118c9cu: goto label_118c9c;
        case 0x118cacu: goto label_118cac;
        case 0x118cc0u: goto label_118cc0;
        case 0x118cd0u: goto label_118cd0;
        default: break;
    }

    ctx->pc = 0x118ba0u;

    // 0x118ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x118ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x118bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118bb0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x118BB0u;
    SET_GPR_U32(ctx, 31, 0x118BB8u);
    ctx->pc = 0x118BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118BB0u;
    // 0x118bb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x118BB0u, 0x118BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BB8u;
label_118bb8:
    // 0x118bb8: 0xc04a07c  jal         func_1281F0
    ctx->pc = 0x118BB8u;
    SET_GPR_U32(ctx, 31, 0x118BC0u);
    ctx->pc = 0x118BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118BB8u;
    // 0x118bbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1281F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1281F0u, 0x118BB8u, 0x118BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BC0u;
label_118bc0:
    // 0x118bc0: 0xc04c2b4  jal         func_130AD0
    ctx->pc = 0x118BC0u;
    SET_GPR_U32(ctx, 31, 0x118BC8u);
    ctx->pc = 0x130AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130AD0u, 0x118BC0u, 0x118BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BC8u;
label_118bc8:
    // 0x118bc8: 0xc04c2a8  jal         func_130AA0
    ctx->pc = 0x118BC8u;
    SET_GPR_U32(ctx, 31, 0x118BD0u);
    ctx->pc = 0x130AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130AA0u, 0x118BC8u, 0x118BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BD0u;
label_118bd0:
    // 0x118bd0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x118bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x118bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x118bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x118bd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x118bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x118bdc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x118bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x118be0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x118be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x118be4: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x118BE4u;
    {
        const bool branch_taken_0x118be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x118BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BE4u;
        // 0x118be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118be4) {
            ctx->pc = 0x118CB8u;
            goto label_118cb8;
        }
    }
    ctx->pc = 0x118BECu;
    // 0x118bec: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x118BECu;
    {
        const bool branch_taken_0x118bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x118bec) {
            ctx->pc = 0x118C60u;
            goto label_118c60;
        }
    }
    ctx->pc = 0x118BF4u;
    // 0x118bf4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118BF4u;
    {
        const bool branch_taken_0x118bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x118bf4) {
            ctx->pc = 0x118C04u;
            goto label_118c04;
        }
    }
    ctx->pc = 0x118BFCu;
    // 0x118bfc: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x118BFCu;
    {
        const bool branch_taken_0x118bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BFCu;
        // 0x118c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118bfc) {
            ctx->pc = 0x118D24u;
            goto label_118d24;
        }
    }
    ctx->pc = 0x118C04u;
label_118c04:
    // 0x118c04: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x118C04u;
    SET_GPR_U32(ctx, 31, 0x118C0Cu);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x118C04u, 0x118C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C0Cu;
label_118c0c:
    // 0x118c0c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x118C0Cu;
    SET_GPR_U32(ctx, 31, 0x118C14u);
    ctx->pc = 0x118C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C0Cu;
    // 0x118c10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x118C0Cu, 0x118C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C14u;
label_118c14:
    // 0x118c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x118c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118c18: 0x14430041  bne         $v0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x118C18u;
    {
        const bool branch_taken_0x118c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x118c18) {
            ctx->pc = 0x118D20u;
            goto label_118d20;
        }
    }
    ctx->pc = 0x118C20u;
    // 0x118c20: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x118c20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x118c24: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x118C24u;
    {
        const bool branch_taken_0x118c24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C24u;
        // 0x118c28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c24) {
            ctx->pc = 0x118C58u;
            goto label_118c58;
        }
    }
    ctx->pc = 0x118C2Cu;
    // 0x118c2c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118C2Cu;
    SET_GPR_U32(ctx, 31, 0x118C34u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118C2Cu, 0x118C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C34u;
label_118c34:
    // 0x118c34: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x118c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x118c38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x118c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c40: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x118c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x118c44: 0xc062a44  jal         func_18A910
    ctx->pc = 0x118C44u;
    SET_GPR_U32(ctx, 31, 0x118C4Cu);
    ctx->pc = 0x118C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C44u;
    // 0x118c48: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A910u, 0x118C44u, 0x118C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C4Cu;
label_118c4c:
    // 0x118c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118c50: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x118C50u;
    {
        const bool branch_taken_0x118c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C50u;
        // 0x118c54: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c50) {
            ctx->pc = 0x118D20u;
            goto label_118d20;
        }
    }
    ctx->pc = 0x118C58u;
label_118c58:
    // 0x118c58: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x118C58u;
    {
        const bool branch_taken_0x118c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C58u;
        // 0x118c5c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c58) {
            ctx->pc = 0x118D20u;
            goto label_118d20;
        }
    }
    ctx->pc = 0x118C60u;
label_118c60:
    // 0x118c60: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118C60u;
    SET_GPR_U32(ctx, 31, 0x118C68u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118C60u, 0x118C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C68u;
label_118c68:
    // 0x118c68: 0xc062ae0  jal         func_18AB80
    ctx->pc = 0x118C68u;
    SET_GPR_U32(ctx, 31, 0x118C70u);
    ctx->pc = 0x118C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C68u;
    // 0x118c6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AB80u, 0x118C68u, 0x118C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C70u;
label_118c70:
    // 0x118c70: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x118C70u;
    {
        const bool branch_taken_0x118c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118c70) {
            ctx->pc = 0x118D20u;
            goto label_118d20;
        }
    }
    ctx->pc = 0x118C78u;
    // 0x118c78: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118C78u;
    SET_GPR_U32(ctx, 31, 0x118C80u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118C78u, 0x118C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C80u;
label_118c80:
    // 0x118c80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c84: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x118c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x118c88: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x118c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x118c8c: 0xc062ba4  jal         func_18AE90
    ctx->pc = 0x118C8Cu;
    SET_GPR_U32(ctx, 31, 0x118C94u);
    ctx->pc = 0x118C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C8Cu;
    // 0x118c90: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE90u, 0x118C8Cu, 0x118C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C94u;
label_118c94:
    // 0x118c94: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118C94u;
    SET_GPR_U32(ctx, 31, 0x118C9Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118C94u, 0x118C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C9Cu;
label_118c9c:
    // 0x118c9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ca0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x118ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x118ca4: 0xc062b48  jal         func_18AD20
    ctx->pc = 0x118CA4u;
    SET_GPR_U32(ctx, 31, 0x118CACu);
    ctx->pc = 0x118CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118CA4u;
    // 0x118ca8: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD20u, 0x118CA4u, 0x118CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CACu;
label_118cac:
    // 0x118cac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x118cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x118cb0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x118CB0u;
    {
        const bool branch_taken_0x118cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CB0u;
        // 0x118cb4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cb0) {
            ctx->pc = 0x118D20u;
            goto label_118d20;
        }
    }
    ctx->pc = 0x118CB8u;
label_118cb8:
    // 0x118cb8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118CB8u;
    SET_GPR_U32(ctx, 31, 0x118CC0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118CB8u, 0x118CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CC0u;
label_118cc0:
    // 0x118cc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x118cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x118cc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118cc8: 0xc062c88  jal         func_18B220
    ctx->pc = 0x118CC8u;
    SET_GPR_U32(ctx, 31, 0x118CD0u);
    ctx->pc = 0x118CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118CC8u;
    // 0x118ccc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B220u, 0x118CC8u, 0x118CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CD0u;
label_118cd0:
    // 0x118cd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118CD0u;
    {
        const bool branch_taken_0x118cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118cd0) {
            ctx->pc = 0x118CE0u;
            goto label_118ce0;
        }
    }
    ctx->pc = 0x118CD8u;
    // 0x118cd8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x118CD8u;
    {
        const bool branch_taken_0x118cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CD8u;
        // 0x118cdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cd8) {
            ctx->pc = 0x118D24u;
            goto label_118d24;
        }
    }
    ctx->pc = 0x118CE0u;
label_118ce0:
    // 0x118ce0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x118ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118ce4: 0x3c024066  lui         $v0, 0x4066
    ctx->pc = 0x118ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16486 << 16));
    // 0x118ce8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x118ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x118cec: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x118cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x118cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x118cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118cf4: 0x0  nop
    ctx->pc = 0x118cf4u;
    // NOP
    // 0x118cf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x118cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x118cfc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x118cfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x118d00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x118d00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x118d04: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x118d04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x118d08: 0x0  nop
    ctx->pc = 0x118d08u;
    // NOP
    // 0x118d0c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x118d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x118d10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118D10u;
    {
        const bool branch_taken_0x118d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D10u;
        // 0x118d14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d10) {
            ctx->pc = 0x118D20u;
            goto label_118d20;
        }
    }
    ctx->pc = 0x118D18u;
    // 0x118d18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x118D18u;
    {
        const bool branch_taken_0x118d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D18u;
        // 0x118d1c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d18) {
            ctx->pc = 0x118D28u;
            goto label_118d28;
        }
    }
    ctx->pc = 0x118D20u;
label_118d20:
    // 0x118d20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118d24:
    // 0x118d24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_118d28:
    // 0x118d28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118d30: 0x3e00008  jr          $ra
    ctx->pc = 0x118D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D30u;
        // 0x118d34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118D38u;
}
