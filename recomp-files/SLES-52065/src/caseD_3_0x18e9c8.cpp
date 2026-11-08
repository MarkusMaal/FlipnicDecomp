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

// Function: caseD_3
// Address: 0x18e9c8 - 0x18ea60
void caseD_3_0x18e9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x18e9c8");
#endif

    switch (ctx->pc) {
        case 0x18e9c8u: goto label_18e9c8;
        case 0x18e9ccu: goto label_18e9cc;
        case 0x18e9d0u: goto label_18e9d0;
        case 0x18e9d4u: goto label_18e9d4;
        case 0x18e9d8u: goto label_18e9d8;
        case 0x18e9dcu: goto label_18e9dc;
        case 0x18e9e0u: goto label_18e9e0;
        case 0x18e9e4u: goto label_18e9e4;
        case 0x18e9e8u: goto label_18e9e8;
        case 0x18e9ecu: goto label_18e9ec;
        case 0x18e9f0u: goto label_18e9f0;
        case 0x18e9f4u: goto label_18e9f4;
        case 0x18e9f8u: goto label_18e9f8;
        case 0x18e9fcu: goto label_18e9fc;
        case 0x18ea00u: goto label_18ea00;
        case 0x18ea04u: goto label_18ea04;
        case 0x18ea08u: goto label_18ea08;
        case 0x18ea0cu: goto label_18ea0c;
        case 0x18ea10u: goto label_18ea10;
        case 0x18ea14u: goto label_18ea14;
        case 0x18ea18u: goto label_18ea18;
        case 0x18ea1cu: goto label_18ea1c;
        case 0x18ea20u: goto label_18ea20;
        case 0x18ea24u: goto label_18ea24;
        case 0x18ea28u: goto label_18ea28;
        case 0x18ea2cu: goto label_18ea2c;
        case 0x18ea30u: goto label_18ea30;
        case 0x18ea34u: goto label_18ea34;
        case 0x18ea38u: goto label_18ea38;
        case 0x18ea3cu: goto label_18ea3c;
        case 0x18ea40u: goto label_18ea40;
        case 0x18ea44u: goto label_18ea44;
        case 0x18ea48u: goto label_18ea48;
        case 0x18ea4cu: goto label_18ea4c;
        case 0x18ea50u: goto label_18ea50;
        case 0x18ea54u: goto label_18ea54;
        case 0x18ea58u: goto label_18ea58;
        case 0x18ea5cu: goto label_18ea5c;
        default: break;
    }

    ctx->pc = 0x18e9c8u;

label_18e9c8:
    // 0x18e9c8: 0x8e240484  lw          $a0, 0x484($s1)
    ctx->pc = 0x18e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18e9cc:
    // 0x18e9cc: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18e9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18e9d0:
    // 0x18e9d0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_18e9d4:
    // 0x18e9d4: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e9d8:
    // 0x18e9d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18e9dc:
    // 0x18e9dc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e9e0:
    // 0x18e9e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18e9e4:
    // 0x18e9e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_18e9e8:
    // 0x18e9e8: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x18e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_18e9ec:
    // 0x18e9ec: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_18e9f0:
    if (ctx->pc == 0x18E9F0u) {
        ctx->pc = 0x18E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9ECu;
        // 0x18e9f0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9F4u;
        goto label_18e9f4;
    }
    ctx->pc = 0x18E9ECu;
    {
        const bool branch_taken_0x18e9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9ECu;
        // 0x18e9f0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9ec) {
            ctx->pc = 0x18EA64u;
            return;
        }
    }
    ctx->pc = 0x18E9F4u;
label_18e9f4:
    // 0x18e9f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18e9f8:
    // 0x18e9f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e9fc:
    // 0x18e9fc: 0xc05f878  jal         func_17E1E0
label_18ea00:
    if (ctx->pc == 0x18EA00u) {
        ctx->pc = 0x18EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9FCu;
        // 0x18ea00: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA04u;
        goto label_18ea04;
    }
    ctx->pc = 0x18E9FCu;
    SET_GPR_U32(ctx, 31, 0x18EA04u);
    ctx->pc = 0x18EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E9FCu;
    // 0x18ea00: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E9FCu, 0x18EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA04u;
label_18ea04:
    // 0x18ea04: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18ea04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18ea08:
    // 0x18ea08: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18ea08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18ea0c:
    // 0x18ea0c: 0x320f809  jalr        $t9
label_18ea10:
    if (ctx->pc == 0x18EA10u) {
        ctx->pc = 0x18EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA0Cu;
        // 0x18ea10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA14u;
        goto label_18ea14;
    }
    ctx->pc = 0x18EA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18EA14u);
        ctx->pc = 0x18EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA0Cu;
        // 0x18ea10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EA0Cu, 0x18EA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18EA14u;
label_18ea14:
    // 0x18ea14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_18ea18:
    if (ctx->pc == 0x18EA18u) {
        ctx->pc = 0x18EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA14u;
        // 0x18ea18: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA1Cu;
        goto label_18ea1c;
    }
    ctx->pc = 0x18EA14u;
    {
        const bool branch_taken_0x18ea14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA14u;
        // 0x18ea18: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea14) {
            ctx->pc = 0x18EA60u;
            return;
        }
    }
    ctx->pc = 0x18EA1Cu;
label_18ea1c:
    // 0x18ea1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18ea20:
    // 0x18ea20: 0xc05f878  jal         func_17E1E0
label_18ea24:
    if (ctx->pc == 0x18EA24u) {
        ctx->pc = 0x18EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA20u;
        // 0x18ea24: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA28u;
        goto label_18ea28;
    }
    ctx->pc = 0x18EA20u;
    SET_GPR_U32(ctx, 31, 0x18EA28u);
    ctx->pc = 0x18EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA20u;
    // 0x18ea24: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18EA20u, 0x18EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA28u;
label_18ea28:
    // 0x18ea28: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18ea2c:
    // 0x18ea2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ea2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18ea30:
    // 0x18ea30: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18ea30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18ea34:
    // 0x18ea34: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18ea38:
    // 0x18ea38: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ea3c:
    // 0x18ea3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18ea40:
    // 0x18ea40: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ea44:
    // 0x18ea44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18ea48:
    // 0x18ea48: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18ea4c:
    // 0x18ea4c: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x18ea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_18ea50:
    // 0x18ea50: 0xc0532f4  jal         func_14CBD0
label_18ea54:
    if (ctx->pc == 0x18EA54u) {
        ctx->pc = 0x18EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA50u;
        // 0x18ea54: 0x8e260450  lw          $a2, 0x450($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA58u;
        goto label_18ea58;
    }
    ctx->pc = 0x18EA50u;
    SET_GPR_U32(ctx, 31, 0x18EA58u);
    ctx->pc = 0x18EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA50u;
    // 0x18ea54: 0x8e260450  lw          $a2, 0x450($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18EA50u, 0x18EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA58u;
label_18ea58:
    // 0x18ea58: 0x10000002  b           . + 4 + (0x2 << 2)
label_18ea5c:
    if (ctx->pc == 0x18EA5Cu) {
        ctx->pc = 0x18EA60u;
        goto label_fallthrough_0x18ea58;
    }
    ctx->pc = 0x18EA58u;
    {
        const bool branch_taken_0x18ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea58) {
            ctx->pc = 0x18EA64u;
            return;
        }
    }
label_fallthrough_0x18ea58:
    ctx->pc = 0x18EA60u;
}
