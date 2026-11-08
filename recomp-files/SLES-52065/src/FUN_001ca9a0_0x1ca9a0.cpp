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

// Function: FUN_001ca9a0
// Address: 0x1ca9a0 - 0x1cab68
void FUN_001ca9a0_0x1ca9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ca9a0_0x1ca9a0");
#endif

    switch (ctx->pc) {
        case 0x1ca9c0u: goto label_1ca9c0;
        case 0x1ca9d0u: goto label_1ca9d0;
        case 0x1ca9e4u: goto label_1ca9e4;
        case 0x1ca9f4u: goto label_1ca9f4;
        case 0x1ca9fcu: goto label_1ca9fc;
        case 0x1caa3cu: goto label_1caa3c;
        case 0x1caa44u: goto label_1caa44;
        case 0x1caa50u: goto label_1caa50;
        case 0x1caa60u: goto label_1caa60;
        case 0x1caa70u: goto label_1caa70;
        case 0x1caa84u: goto label_1caa84;
        case 0x1caa98u: goto label_1caa98;
        case 0x1caab0u: goto label_1caab0;
        case 0x1caab4u: goto label_1caab4;
        case 0x1caac4u: goto label_1caac4;
        case 0x1caaccu: goto label_1caacc;
        case 0x1caaecu: goto label_1caaec;
        case 0x1caaf4u: goto label_1caaf4;
        case 0x1cab00u: goto label_1cab00;
        case 0x1cab14u: goto label_1cab14;
        case 0x1cab28u: goto label_1cab28;
        case 0x1cab3cu: goto label_1cab3c;
        case 0x1cab50u: goto label_1cab50;
        default: break;
    }

    ctx->pc = 0x1ca9a0u;

    // 0x1ca9a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ca9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ca9a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ca9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ca9a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ca9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ca9ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca9b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ca9b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca9b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ca9b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ca9c0:
    // 0x1ca9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ca9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca9c8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA9C8u;
    SET_GPR_U32(ctx, 31, 0x1CA9D0u);
    ctx->pc = 0x1CA9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA9C8u;
    // 0x1ca9cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA9C8u, 0x1CA9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9D0u;
label_1ca9d0:
    // 0x1ca9d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9d4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1ca9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1ca9d8: 0x24427920  addiu       $v0, $v0, 0x7920
    ctx->pc = 0x1ca9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31008));
    // 0x1ca9dc: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA9DCu;
    SET_GPR_U32(ctx, 31, 0x1CA9E4u);
    ctx->pc = 0x1CA9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA9DCu;
    // 0x1ca9e0: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA9DCu, 0x1CA9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9E4u;
label_1ca9e4:
    // 0x1ca9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ca9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca9ec: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA9ECu;
    SET_GPR_U32(ctx, 31, 0x1CA9F4u);
    ctx->pc = 0x1CA9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA9ECu;
    // 0x1ca9f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA9ECu, 0x1CA9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9F4u;
label_1ca9f4:
    // 0x1ca9f4: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA9F4u;
    SET_GPR_U32(ctx, 31, 0x1CA9FCu);
    ctx->pc = 0x1CA9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA9F4u;
    // 0x1ca9f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA9F4u, 0x1CA9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9FCu;
label_1ca9fc:
    // 0x1ca9fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ca9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1caa00: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1caa00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1caa04: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CAA04u;
    {
        const bool branch_taken_0x1caa04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA04u;
        // 0x1caa08: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa04) {
            ctx->pc = 0x1CA9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca9c0;
        }
    }
    ctx->pc = 0x1CAA0Cu;
    // 0x1caa0c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1caa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1caa10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1caa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caa14: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CAA14u;
    {
        const bool branch_taken_0x1caa14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1caa14) {
            ctx->pc = 0x1CAA20u;
            goto label_1caa20;
        }
    }
    ctx->pc = 0x1CAA1Cu;
    // 0x1caa1c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1caa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_1caa20:
    // 0x1caa20: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1caa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1caa24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1caa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1caa2c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1caa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1caa30: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1caa30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1caa34: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAA34u;
    SET_GPR_U32(ctx, 31, 0x1CAA3Cu);
    ctx->pc = 0x1CAA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA34u;
    // 0x1caa38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAA34u, 0x1CAA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA3Cu;
label_1caa3c:
    // 0x1caa3c: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CAA3Cu;
    SET_GPR_U32(ctx, 31, 0x1CAA44u);
    ctx->pc = 0x1CAA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA3Cu;
    // 0x1caa40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CAA3Cu, 0x1CAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA44u;
label_1caa44:
    // 0x1caa44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1caa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caa48: 0xc060894  jal         func_182250
    ctx->pc = 0x1CAA48u;
    SET_GPR_U32(ctx, 31, 0x1CAA50u);
    ctx->pc = 0x1CAA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA48u;
    // 0x1caa4c: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182250u, 0x1CAA48u, 0x1CAA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA50u;
label_1caa50:
    // 0x1caa50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1caa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1caa58: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CAA58u;
    SET_GPR_U32(ctx, 31, 0x1CAA60u);
    ctx->pc = 0x1CAA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA58u;
    // 0x1caa5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CAA58u, 0x1CAA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA60u;
label_1caa60:
    // 0x1caa60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa64: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1caa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1caa68: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CAA68u;
    SET_GPR_U32(ctx, 31, 0x1CAA70u);
    ctx->pc = 0x1CAA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA68u;
    // 0x1caa6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CAA68u, 0x1CAA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA70u;
label_1caa70:
    // 0x1caa70: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1caa70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1caa74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1caa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1caa7c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAA7Cu;
    SET_GPR_U32(ctx, 31, 0x1CAA84u);
    ctx->pc = 0x1CAA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA7Cu;
    // 0x1caa80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAA7Cu, 0x1CAA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA84u;
label_1caa84:
    // 0x1caa84: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1caa84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1caa88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caa8c: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1caa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1caa90: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAA90u;
    SET_GPR_U32(ctx, 31, 0x1CAA98u);
    ctx->pc = 0x1CAA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAA90u;
    // 0x1caa94: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAA90u, 0x1CAA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA98u;
label_1caa98:
    // 0x1caa98: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1caa98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1caa9c: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1caa9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1caaa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caaa4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1caaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1caaa8: 0xc06dfa0  jal         func_1B7E80
    ctx->pc = 0x1CAAA8u;
    SET_GPR_U32(ctx, 31, 0x1CAAB0u);
    ctx->pc = 0x1CAAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAAA8u;
    // 0x1caaac: 0x24c67540  addiu       $a2, $a2, 0x7540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7E80u, 0x1CAAA8u, 0x1CAAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAAB0u;
label_1caab0:
    // 0x1caab0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1caab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1caab4:
    // 0x1caab4: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1caab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1caab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caabc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAABCu;
    SET_GPR_U32(ctx, 31, 0x1CAAC4u);
    ctx->pc = 0x1CAAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAABCu;
    // 0x1caac0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAABCu, 0x1CAAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAAC4u;
label_1caac4:
    // 0x1caac4: 0xc06e47c  jal         func_1B91F0
    ctx->pc = 0x1CAAC4u;
    SET_GPR_U32(ctx, 31, 0x1CAACCu);
    ctx->pc = 0x1CAAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAAC4u;
    // 0x1caac8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91F0u, 0x1CAAC4u, 0x1CAACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAACCu;
label_1caacc:
    // 0x1caacc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1caaccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1caad0: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x1caad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1caad4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CAAD4u;
    {
        const bool branch_taken_0x1caad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caad4) {
            ctx->pc = 0x1CAAB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caab4;
        }
    }
    ctx->pc = 0x1CAADCu;
    // 0x1caadc: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1caadcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1caae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caae4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CAAE4u;
    SET_GPR_U32(ctx, 31, 0x1CAAECu);
    ctx->pc = 0x1CAAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAAE4u;
    // 0x1caae8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CAAE4u, 0x1CAAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAAECu;
label_1caaec:
    // 0x1caaec: 0xc06e474  jal         func_1B91D0
    ctx->pc = 0x1CAAECu;
    SET_GPR_U32(ctx, 31, 0x1CAAF4u);
    ctx->pc = 0x1CAAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAAECu;
    // 0x1caaf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91D0u, 0x1CAAECu, 0x1CAAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAAF4u;
label_1caaf4:
    // 0x1caaf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caaf8: 0xc06e040  jal         func_1B8100
    ctx->pc = 0x1CAAF8u;
    SET_GPR_U32(ctx, 31, 0x1CAB00u);
    ctx->pc = 0x1CAAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAAF8u;
    // 0x1caafc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8100u, 0x1CAAF8u, 0x1CAB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB00u;
label_1cab00:
    // 0x1cab00: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cab00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cab04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cab04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab08: 0x24a57520  addiu       $a1, $a1, 0x7520
    ctx->pc = 0x1cab08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29984));
    // 0x1cab0c: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CAB0Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB14u);
    ctx->pc = 0x1CAB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB0Cu;
    // 0x1cab10: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CAB0Cu, 0x1CAB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB14u;
label_1cab14:
    // 0x1cab14: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cab14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cab18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cab18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab1c: 0x24a57560  addiu       $a1, $a1, 0x7560
    ctx->pc = 0x1cab1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30048));
    // 0x1cab20: 0xc06de04  jal         func_1B7810
    ctx->pc = 0x1CAB20u;
    SET_GPR_U32(ctx, 31, 0x1CAB28u);
    ctx->pc = 0x1CAB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB20u;
    // 0x1cab24: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7810u, 0x1CAB20u, 0x1CAB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB28u;
label_1cab28:
    // 0x1cab28: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cab28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cab2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab30: 0x24a576c0  addiu       $a1, $a1, 0x76C0
    ctx->pc = 0x1cab30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30400));
    // 0x1cab34: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CAB34u;
    SET_GPR_U32(ctx, 31, 0x1CAB3Cu);
    ctx->pc = 0x1CAB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB34u;
    // 0x1cab38: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CAB34u, 0x1CAB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB3Cu;
label_1cab3c:
    // 0x1cab3c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1cab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1cab40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cab44: 0x24a57780  addiu       $a1, $a1, 0x7780
    ctx->pc = 0x1cab44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30592));
    // 0x1cab48: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CAB48u;
    SET_GPR_U32(ctx, 31, 0x1CAB50u);
    ctx->pc = 0x1CAB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB48u;
    // 0x1cab4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CAB48u, 0x1CAB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB50u;
label_1cab50:
    // 0x1cab50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cab50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cab54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cab54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cab58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cab58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cab5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cab5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cab60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB60u;
        // 0x1cab64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAB68u;
}
