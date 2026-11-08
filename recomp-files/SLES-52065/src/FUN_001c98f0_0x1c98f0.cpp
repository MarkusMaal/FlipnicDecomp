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

// Function: FUN_001c98f0
// Address: 0x1c98f0 - 0x1c9d54
void FUN_001c98f0_0x1c98f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c98f0_0x1c98f0");
#endif

    switch (ctx->pc) {
        case 0x1c9940u: goto label_1c9940;
        case 0x1c9968u: goto label_1c9968;
        case 0x1c9980u: goto label_1c9980;
        case 0x1c998cu: goto label_1c998c;
        case 0x1c99a4u: goto label_1c99a4;
        case 0x1c99b4u: goto label_1c99b4;
        case 0x1c99c0u: goto label_1c99c0;
        case 0x1c99d4u: goto label_1c99d4;
        case 0x1c99ecu: goto label_1c99ec;
        case 0x1c99f4u: goto label_1c99f4;
        case 0x1c9a00u: goto label_1c9a00;
        case 0x1c9a14u: goto label_1c9a14;
        case 0x1c9a1cu: goto label_1c9a1c;
        case 0x1c9a28u: goto label_1c9a28;
        case 0x1c9a3cu: goto label_1c9a3c;
        case 0x1c9a48u: goto label_1c9a48;
        case 0x1c9a5cu: goto label_1c9a5c;
        case 0x1c9ac0u: goto label_1c9ac0;
        case 0x1c9ad8u: goto label_1c9ad8;
        case 0x1c9ae0u: goto label_1c9ae0;
        case 0x1c9af0u: goto label_1c9af0;
        case 0x1c9b04u: goto label_1c9b04;
        case 0x1c9b98u: goto label_1c9b98;
        case 0x1c9bb8u: goto label_1c9bb8;
        case 0x1c9bccu: goto label_1c9bcc;
        case 0x1c9becu: goto label_1c9bec;
        case 0x1c9cd8u: goto label_1c9cd8;
        case 0x1c9cf8u: goto label_1c9cf8;
        case 0x1c9d10u: goto label_1c9d10;
        case 0x1c9d2cu: goto label_1c9d2c;
        case 0x1c9d34u: goto label_1c9d34;
        default: break;
    }

    ctx->pc = 0x1c98f0u;

    // 0x1c98f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c98f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c98f4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c98f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c98f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c98f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c98fc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1c98fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c9900: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c9900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c9904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9908: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c9908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c990c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c990cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c9910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c9914: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c9914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c9918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c991c: 0x266a0060  addiu       $t2, $s3, 0x60
    ctx->pc = 0x1c991cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x1c9920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c9920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c9924: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x1c9924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1c9928: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x1c9928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x1c992c: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1c992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1c9930: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x1c9930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x1c9934: 0x8c880074  lw          $t0, 0x74($a0)
    ctx->pc = 0x1c9934u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1c9938: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C9938u;
    SET_GPR_U32(ctx, 31, 0x1C9940u);
    ctx->pc = 0x1C993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9938u;
    // 0x1c993c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C9938u, 0x1C9940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9940u;
label_1c9940:
    // 0x1c9940: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x1c9940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x1c9944: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c9944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9948: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c9948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c994c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c994cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c9950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9954: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c9954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9958: 0x266a0068  addiu       $t2, $s3, 0x68
    ctx->pc = 0x1c9958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 104));
    // 0x1c995c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c995cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9960: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1C9960u;
    SET_GPR_U32(ctx, 31, 0x1C9968u);
    ctx->pc = 0x1C9964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9960u;
    // 0x1c9964: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1C9960u, 0x1C9968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9968u;
label_1c9968:
    // 0x1c9968: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x1c9968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c996c: 0x8e650064  lw          $a1, 0x64($s3)
    ctx->pc = 0x1c996cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1c9970: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9970u;
    {
        const bool branch_taken_0x1c9970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9970u;
        // 0x1c9974: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9970) {
            ctx->pc = 0x1C998Cu;
            goto label_1c998c;
        }
    }
    ctx->pc = 0x1C9978u;
    // 0x1c9978: 0xc0728f0  jal         func_1CA3C0
    ctx->pc = 0x1C9978u;
    SET_GPR_U32(ctx, 31, 0x1C9980u);
    ctx->pc = 0x1CA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA3C0u, 0x1C9978u, 0x1C9980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9980u;
label_1c9980:
    // 0x1c9980: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1c9980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c9984: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1C9984u;
    SET_GPR_U32(ctx, 31, 0x1C998Cu);
    ctx->pc = 0x1C9988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9984u;
    // 0x1c9988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA340u, 0x1C9984u, 0x1C998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C998Cu;
label_1c998c:
    // 0x1c998c: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x1c998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c9990: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x1c9990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x1c9994: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C9994u;
    {
        const bool branch_taken_0x1c9994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9994u;
        // 0x1c9998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9994) {
            ctx->pc = 0x1C9A20u;
            goto label_1c9a20;
        }
    }
    ctx->pc = 0x1C999Cu;
    // 0x1c999c: 0xc0727ec  jal         func_1C9FB0
    ctx->pc = 0x1C999Cu;
    SET_GPR_U32(ctx, 31, 0x1C99A4u);
    ctx->pc = 0x1C99A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C999Cu;
    // 0x1c99a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FB0u, 0x1C999Cu, 0x1C99A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99A4u;
label_1c99a4:
    // 0x1c99a4: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x1c99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x1c99a8: 0x8e650064  lw          $a1, 0x64($s3)
    ctx->pc = 0x1c99a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x1c99ac: 0xc0728f0  jal         func_1CA3C0
    ctx->pc = 0x1C99ACu;
    SET_GPR_U32(ctx, 31, 0x1C99B4u);
    ctx->pc = 0x1C99B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99ACu;
    // 0x1c99b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA3C0u, 0x1C99ACu, 0x1C99B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99B4u;
label_1c99b4:
    // 0x1c99b4: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1c99b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c99b8: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1C99B8u;
    SET_GPR_U32(ctx, 31, 0x1C99C0u);
    ctx->pc = 0x1C99BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99B8u;
    // 0x1c99bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA340u, 0x1C99B8u, 0x1C99C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99C0u;
label_1c99c0:
    // 0x1c99c0: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x1c99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c99c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c99c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99c8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c99c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c99cc: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C99CCu;
    SET_GPR_U32(ctx, 31, 0x1C99D4u);
    ctx->pc = 0x1C99D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99CCu;
    // 0x1c99d0: 0xae620064  sw          $v0, 0x64($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C99CCu, 0x1C99D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99D4u;
label_1c99d4:
    // 0x1c99d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C99D4u;
    {
        const bool branch_taken_0x1c99d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99D4u;
        // 0x1c99d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99d4) {
            ctx->pc = 0x1C99F8u;
            goto label_1c99f8;
        }
    }
    ctx->pc = 0x1C99DCu;
    // 0x1c99dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c99dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99e0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c99e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c99e4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C99E4u;
    SET_GPR_U32(ctx, 31, 0x1C99ECu);
    ctx->pc = 0x1C99E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99E4u;
    // 0x1c99e8: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C99E4u, 0x1C99ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99ECu;
label_1c99ec:
    // 0x1c99ec: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C99ECu;
    SET_GPR_U32(ctx, 31, 0x1C99F4u);
    ctx->pc = 0x1C99F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99ECu;
    // 0x1c99f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C99ECu, 0x1C99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99F4u;
label_1c99f4:
    // 0x1c99f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c99f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c99f8:
    // 0x1c99f8: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C99F8u;
    SET_GPR_U32(ctx, 31, 0x1C9A00u);
    ctx->pc = 0x1C99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99F8u;
    // 0x1c99fc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C99F8u, 0x1C9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A00u;
label_1c9a00:
    // 0x1c9a00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9A00u;
    {
        const bool branch_taken_0x1c9a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A00u;
        // 0x1c9a04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a00) {
            ctx->pc = 0x1C9A1Cu;
            goto label_1c9a1c;
        }
    }
    ctx->pc = 0x1C9A08u;
    // 0x1c9a08: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c9a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c9a0c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C9A14u);
    ctx->pc = 0x1C9A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A0Cu;
    // 0x1c9a10: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9A0Cu, 0x1C9A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A14u;
label_1c9a14:
    // 0x1c9a14: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1C9A14u;
    SET_GPR_U32(ctx, 31, 0x1C9A1Cu);
    ctx->pc = 0x1C9A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A14u;
    // 0x1c9a18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1C9A14u, 0x1C9A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A1Cu;
label_1c9a1c:
    // 0x1c9a1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c9a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a20:
    // 0x1c9a20: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C9A20u;
    SET_GPR_U32(ctx, 31, 0x1C9A28u);
    ctx->pc = 0x1C9A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A20u;
    // 0x1c9a24: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C9A20u, 0x1C9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A28u;
label_1c9a28:
    // 0x1c9a28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9A28u;
    {
        const bool branch_taken_0x1c9a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A28u;
        // 0x1c9a2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a28) {
            ctx->pc = 0x1C9A40u;
            goto label_1c9a40;
        }
    }
    ctx->pc = 0x1C9A30u;
    // 0x1c9a30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c9a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a34: 0xc072910  jal         func_1CA440
    ctx->pc = 0x1C9A34u;
    SET_GPR_U32(ctx, 31, 0x1C9A3Cu);
    ctx->pc = 0x1C9A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A34u;
    // 0x1c9a38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA440u, 0x1C9A34u, 0x1C9A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A3Cu;
label_1c9a3c:
    // 0x1c9a3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c9a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a40:
    // 0x1c9a40: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C9A40u;
    SET_GPR_U32(ctx, 31, 0x1C9A48u);
    ctx->pc = 0x1C9A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A40u;
    // 0x1c9a44: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C9A40u, 0x1C9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A48u;
label_1c9a48:
    // 0x1c9a48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9A48u;
    {
        const bool branch_taken_0x1c9a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9a48) {
            ctx->pc = 0x1C9A5Cu;
            goto label_1c9a5c;
        }
    }
    ctx->pc = 0x1C9A50u;
    // 0x1c9a50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c9a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a54: 0xc072910  jal         func_1CA440
    ctx->pc = 0x1C9A54u;
    SET_GPR_U32(ctx, 31, 0x1C9A5Cu);
    ctx->pc = 0x1C9A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A54u;
    // 0x1c9a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA440u, 0x1C9A54u, 0x1C9A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A5Cu;
label_1c9a5c:
    // 0x1c9a5c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9a60: 0x8022f8c8  lb          $v0, -0x738($at)
    ctx->pc = 0x1c9a60u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F8C8u));
    // 0x1c9a64: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9A64u;
    {
        const bool branch_taken_0x1c9a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9a64) {
            ctx->pc = 0x1C9A84u;
            goto label_1c9a84;
        }
    }
    ctx->pc = 0x1C9A6Cu;
    // 0x1c9a6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9a70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9a74: 0xac23f8c0  sw          $v1, -0x740($at)
    ctx->pc = 0x1c9a74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F8C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8C0u, _value); } while (0);
    // 0x1c9a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9a80: 0xa022f8c8  sb          $v0, -0x738($at)
    ctx->pc = 0x1c9a80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F8C8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8C8u, _value); } while (0);
label_1c9a84:
    // 0x1c9a84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9a88: 0x8022f8d8  lb          $v0, -0x728($at)
    ctx->pc = 0x1c9a88u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F8D8u));
    // 0x1c9a8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9A8Cu;
    {
        const bool branch_taken_0x1c9a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A8Cu;
        // 0x1c9a90: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a8c) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C9A94u;
    // 0x1c9a94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9a98: 0xac23f8d0  sw          $v1, -0x730($at)
    ctx->pc = 0x1c9a98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F8D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8D0u, _value); } while (0);
    // 0x1c9a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9aa0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9aa4: 0xa022f8d8  sb          $v0, -0x728($at)
    ctx->pc = 0x1c9aa4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F8D8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8D8u, _value); } while (0);
label_1c9aa8:
    // 0x1c9aa8: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c9aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c9aac: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1c9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1c9ab0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c9ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9ab4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c9ab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c9ab8: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C9AB8u;
    SET_GPR_U32(ctx, 31, 0x1C9AC0u);
    ctx->pc = 0x1C9ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AB8u;
    // 0x1c9abc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C9AB8u, 0x1C9AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AC0u;
label_1c9ac0:
    // 0x1c9ac0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9ac4: 0xc42cf8c0  lwc1        $f12, -0x740($at)
    ctx->pc = 0x1c9ac4u;
    { uint32_t bits = FAST_READ32(0x36F8C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9ac8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9acc: 0xc42df8d0  lwc1        $f13, -0x730($at)
    ctx->pc = 0x1c9accu;
    { uint32_t bits = FAST_READ32(0x36F8D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9ad0: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1C9AD0u;
    SET_GPR_U32(ctx, 31, 0x1C9AD8u);
    ctx->pc = 0x1C9AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AD0u;
    // 0x1c9ad4: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1C9AD0u, 0x1C9AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AD8u;
label_1c9ad8:
    // 0x1c9ad8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1C9AD8u;
    {
        const bool branch_taken_0x1c9ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AD8u;
        // 0x1c9adc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ad8) {
            ctx->pc = 0x1C9BD0u;
            goto label_1c9bd0;
        }
    }
    ctx->pc = 0x1C9AE0u;
label_1c9ae0:
    // 0x1c9ae0: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x1c9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c9ae4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c9ae8: 0xc073150  jal         func_1CC540
    ctx->pc = 0x1C9AE8u;
    SET_GPR_U32(ctx, 31, 0x1C9AF0u);
    ctx->pc = 0x1C9AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AE8u;
    // 0x1c9aec: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC540u, 0x1C9AE8u, 0x1C9AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AF0u;
label_1c9af0:
    // 0x1c9af0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c9af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c9af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c9af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c9afc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9AFCu;
    SET_GPR_U32(ctx, 31, 0x1C9B04u);
    ctx->pc = 0x1C9B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AFCu;
    // 0x1c9b00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9AFCu, 0x1C9B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B04u;
label_1c9b04:
    // 0x1c9b04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b08: 0x8023f8e8  lb          $v1, -0x718($at)
    ctx->pc = 0x1c9b08u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36F8E8u));
    // 0x1c9b0c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9B0Cu;
    {
        const bool branch_taken_0x1c9b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B0Cu;
        // 0x1c9b10: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b0c) {
            ctx->pc = 0x1C9B28u;
            goto label_1c9b28;
        }
    }
    ctx->pc = 0x1C9B14u;
    // 0x1c9b14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b18: 0xac24f8e0  sw          $a0, -0x720($at)
    ctx->pc = 0x1c9b18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F8E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8E0u, _value); } while (0);
    // 0x1c9b1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b24: 0xa023f8e8  sb          $v1, -0x718($at)
    ctx->pc = 0x1c9b24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F8E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8E8u, _value); } while (0);
label_1c9b28:
    // 0x1c9b28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b2c: 0x8023f8f8  lb          $v1, -0x708($at)
    ctx->pc = 0x1c9b2cu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36F8F8u));
    // 0x1c9b30: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9B30u;
    {
        const bool branch_taken_0x1c9b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B30u;
        // 0x1c9b34: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b30) {
            ctx->pc = 0x1C9B4Cu;
            goto label_1c9b4c;
        }
    }
    ctx->pc = 0x1C9B38u;
    // 0x1c9b38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b3c: 0xac24f8f0  sw          $a0, -0x710($at)
    ctx->pc = 0x1c9b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F8F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F8F0u, _value); } while (0);
    // 0x1c9b40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b48: 0xa023f8f8  sb          $v1, -0x708($at)
    ctx->pc = 0x1c9b48u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F8F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8F8u, _value); } while (0);
label_1c9b4c:
    // 0x1c9b4c: 0x0  nop
    ctx->pc = 0x1c9b4cu;
    // NOP
    // 0x1c9b50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b54: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1c9b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9b58: 0x8c25f8e0  lw          $a1, -0x720($at)
    ctx->pc = 0x1c9b58u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36F8E0u));
    // 0x1c9b5c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x1c9b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9b60: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c9b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c9b64: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x1c9b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9b68: 0xc44d0044  lwc1        $f13, 0x44($v0)
    ctx->pc = 0x1c9b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9b6c: 0xc44e0048  lwc1        $f14, 0x48($v0)
    ctx->pc = 0x1c9b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c9b70: 0xc44f004c  lwc1        $f15, 0x4C($v0)
    ctx->pc = 0x1c9b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c9b74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c9b74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c9b78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b7c: 0x8c23f8f0  lw          $v1, -0x710($at)
    ctx->pc = 0x1c9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8F0u));
    // 0x1c9b80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c9b80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c9b84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c9b84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c9b88: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x1c9b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c9b8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c9b8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c9b90: 0xc062860  jal         func_18A180
    ctx->pc = 0x1C9B90u;
    SET_GPR_U32(ctx, 31, 0x1C9B98u);
    ctx->pc = 0x1C9B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B90u;
    // 0x1c9b94: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1C9B90u, 0x1C9B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B98u;
label_1c9b98:
    // 0x1c9b98: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1c9b98u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9b9c: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c9b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c9ba0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1c9ba0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ba4: 0x0  nop
    ctx->pc = 0x1c9ba4u;
    // NOP
    // 0x1c9ba8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c9ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c9bac: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c9bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c9bb0: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C9BB0u;
    SET_GPR_U32(ctx, 31, 0x1C9BB8u);
    ctx->pc = 0x1C9BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BB0u;
    // 0x1c9bb4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C9BB0u, 0x1C9BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BB8u;
label_1c9bb8:
    // 0x1c9bb8: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c9bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c9bbc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c9bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c9bc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c9bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bc4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1C9BC4u;
    SET_GPR_U32(ctx, 31, 0x1C9BCCu);
    ctx->pc = 0x1C9BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BC4u;
    // 0x1c9bc8: 0x24a52740  addiu       $a1, $a1, 0x2740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1C9BC4u, 0x1C9BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BCCu;
label_1c9bcc:
    // 0x1c9bcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c9bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c9bd0:
    // 0x1c9bd0: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x1c9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1c9bd4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c9bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c9bd8: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1C9BD8u;
    {
        const bool branch_taken_0x1c9bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BD8u;
        // 0x1c9bdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bd8) {
            ctx->pc = 0x1C9AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9ae0;
        }
    }
    ctx->pc = 0x1C9BE0u;
    // 0x1c9be0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c9be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c9be4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9BE4u;
    SET_GPR_U32(ctx, 31, 0x1C9BECu);
    ctx->pc = 0x1C9BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BE4u;
    // 0x1c9be8: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9BE4u, 0x1C9BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BECu;
label_1c9bec:
    // 0x1c9bec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bf0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9bf4: 0x8022f908  lb          $v0, -0x6F8($at)
    ctx->pc = 0x1c9bf4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F908u));
    // 0x1c9bf8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9BF8u;
    {
        const bool branch_taken_0x1c9bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9bf8) {
            ctx->pc = 0x1C9C18u;
            goto label_1c9c18;
        }
    }
    ctx->pc = 0x1C9C00u;
    // 0x1c9c00: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1c9c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c9c04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c08: 0xac23f900  sw          $v1, -0x700($at)
    ctx->pc = 0x1c9c08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F900u, _value); } while (0);
    // 0x1c9c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9c10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c14: 0xa022f908  sb          $v0, -0x6F8($at)
    ctx->pc = 0x1c9c14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F908u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F908u, _value); } while (0);
label_1c9c18:
    // 0x1c9c18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c1c: 0x8022f918  lb          $v0, -0x6E8($at)
    ctx->pc = 0x1c9c1cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F918u));
    // 0x1c9c20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9C20u;
    {
        const bool branch_taken_0x1c9c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9c20) {
            ctx->pc = 0x1C9C40u;
            goto label_1c9c40;
        }
    }
    ctx->pc = 0x1C9C28u;
    // 0x1c9c28: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1c9c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c9c2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c30: 0xac23f910  sw          $v1, -0x6F0($at)
    ctx->pc = 0x1c9c30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F910u, _value); } while (0);
    // 0x1c9c34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9c38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c3c: 0xa022f918  sb          $v0, -0x6E8($at)
    ctx->pc = 0x1c9c3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F918u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F918u, _value); } while (0);
label_1c9c40:
    // 0x1c9c40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c44: 0x8c24f900  lw          $a0, -0x700($at)
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F900u));
    // 0x1c9c48: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1c9c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9c4c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1c9c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9c50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c54: 0x8c23f910  lw          $v1, -0x6F0($at)
    ctx->pc = 0x1c9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F910u));
    // 0x1c9c58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c9c58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c9c5c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c60: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c9c60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c9c64: 0x8022f928  lb          $v0, -0x6D8($at)
    ctx->pc = 0x1c9c64u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F928u));
    // 0x1c9c68: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1c9c68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c9c6c: 0x0  nop
    ctx->pc = 0x1c9c6cu;
    // NOP
    // 0x1c9c70: 0xa48821  addu        $s1, $a1, $a0
    ctx->pc = 0x1c9c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c9c74: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c9c74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c9c78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9C78u;
    {
        const bool branch_taken_0x1c9c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C78u;
        // 0x1c9c7c: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c78) {
            ctx->pc = 0x1C9C98u;
            goto label_1c9c98;
        }
    }
    ctx->pc = 0x1C9C80u;
    // 0x1c9c80: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1c9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1c9c84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c88: 0xac23f920  sw          $v1, -0x6E0($at)
    ctx->pc = 0x1c9c88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F920u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F920u, _value); } while (0);
    // 0x1c9c8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9c90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c94: 0xa022f928  sb          $v0, -0x6D8($at)
    ctx->pc = 0x1c9c94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F928u, _value); } while (0);
label_1c9c98:
    // 0x1c9c98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c9c: 0x8022f938  lb          $v0, -0x6C8($at)
    ctx->pc = 0x1c9c9cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F938u));
    // 0x1c9ca0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9CA0u;
    {
        const bool branch_taken_0x1c9ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ca0) {
            ctx->pc = 0x1C9CC0u;
            goto label_1c9cc0;
        }
    }
    ctx->pc = 0x1C9CA8u;
    // 0x1c9ca8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9cac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9cb0: 0xac23f930  sw          $v1, -0x6D0($at)
    ctx->pc = 0x1c9cb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F930u, _value); } while (0);
    // 0x1c9cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9cb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9cbc: 0xa022f938  sb          $v0, -0x6C8($at)
    ctx->pc = 0x1c9cbcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F938u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F938u, _value); } while (0);
label_1c9cc0:
    // 0x1c9cc0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9cc4: 0xc42cf920  lwc1        $f12, -0x6E0($at)
    ctx->pc = 0x1c9cc4u;
    { uint32_t bits = FAST_READ32(0x36F920u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9cc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9ccc: 0xc42df930  lwc1        $f13, -0x6D0($at)
    ctx->pc = 0x1c9cccu;
    { uint32_t bits = FAST_READ32(0x36F930u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9cd0: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1C9CD0u;
    SET_GPR_U32(ctx, 31, 0x1C9CD8u);
    ctx->pc = 0x1C9CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9CD0u;
    // 0x1c9cd4: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1C9CD0u, 0x1C9CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CD8u;
label_1c9cd8:
    // 0x1c9cd8: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1c9cd8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9cdc: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c9cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c9ce0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1c9ce0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ce4: 0x0  nop
    ctx->pc = 0x1c9ce4u;
    // NOP
    // 0x1c9ce8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c9ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c9cec: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c9cecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c9cf0: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C9CF0u;
    SET_GPR_U32(ctx, 31, 0x1C9CF8u);
    ctx->pc = 0x1C9CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9CF0u;
    // 0x1c9cf4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C9CF0u, 0x1C9CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CF8u;
label_1c9cf8:
    // 0x1c9cf8: 0xc60c0040  lwc1        $f12, 0x40($s0)
    ctx->pc = 0x1c9cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9cfc: 0xc60d0044  lwc1        $f13, 0x44($s0)
    ctx->pc = 0x1c9cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9d00: 0xc60e0048  lwc1        $f14, 0x48($s0)
    ctx->pc = 0x1c9d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c9d04: 0xc60f004c  lwc1        $f15, 0x4C($s0)
    ctx->pc = 0x1c9d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c9d08: 0xc062860  jal         func_18A180
    ctx->pc = 0x1C9D08u;
    SET_GPR_U32(ctx, 31, 0x1C9D10u);
    ctx->pc = 0x1C9D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D08u;
    // 0x1c9d0c: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1C9D08u, 0x1C9D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D10u;
label_1c9d10:
    // 0x1c9d10: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x1c9d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x1c9d14: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c9d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c9d18: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c9d1c: 0x24a52748  addiu       $a1, $a1, 0x2748
    ctx->pc = 0x1c9d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10056));
    // 0x1c9d20: 0x8e670070  lw          $a3, 0x70($s3)
    ctx->pc = 0x1c9d20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x1c9d24: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1C9D24u;
    SET_GPR_U32(ctx, 31, 0x1C9D2Cu);
    ctx->pc = 0x1C9D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D24u;
    // 0x1c9d28: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1C9D24u, 0x1C9D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D2Cu;
label_1c9d2c:
    // 0x1c9d2c: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1C9D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D34u);
    ctx->pc = 0x1C9D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D2Cu;
    // 0x1c9d30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1C9D2Cu, 0x1C9D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D34u;
label_1c9d34:
    // 0x1c9d34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c9d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c9d38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c9d38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9d3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c9d3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9d40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c9d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D4Cu;
        // 0x1c9d50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9D54u;
}
