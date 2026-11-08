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

// Function: FUN_001cf900
// Address: 0x1cf900 - 0x1cfa0c
void FUN_001cf900_0x1cf900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cf900_0x1cf900");
#endif

    switch (ctx->pc) {
        case 0x1cf930u: goto label_1cf930;
        case 0x1cf950u: goto label_1cf950;
        case 0x1cf95cu: goto label_1cf95c;
        case 0x1cf968u: goto label_1cf968;
        case 0x1cf980u: goto label_1cf980;
        case 0x1cf988u: goto label_1cf988;
        case 0x1cf994u: goto label_1cf994;
        case 0x1cf9a0u: goto label_1cf9a0;
        case 0x1cf9ecu: goto label_1cf9ec;
        default: break;
    }

    ctx->pc = 0x1cf900u;

    // 0x1cf900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cf900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cf904: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cf904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cf908: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cf908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cf90c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cf90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cf910: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cf910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cf918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cf91c: 0x8c910034  lw          $s1, 0x34($a0)
    ctx->pc = 0x1cf91cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1cf920: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1cf920u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cf924: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CF924u;
    {
        const bool branch_taken_0x1cf924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF924u;
        // 0x1cf928: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf924) {
            ctx->pc = 0x1CF9C0u;
            goto label_1cf9c0;
        }
    }
    ctx->pc = 0x1CF92Cu;
    // 0x1cf92c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cf92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf930:
    // 0x1cf930: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x1cf930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1cf934: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1cf934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1cf938: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cf938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cf93c: 0x90630014  lbu         $v1, 0x14($v1)
    ctx->pc = 0x1cf93cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1cf940: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CF940u;
    {
        const bool branch_taken_0x1cf940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF940u;
        // 0x1cf944: 0x26640030  addiu       $a0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf940) {
            ctx->pc = 0x1CF9ACu;
            goto label_1cf9ac;
        }
    }
    ctx->pc = 0x1CF948u;
    // 0x1cf948: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1CF948u;
    SET_GPR_U32(ctx, 31, 0x1CF950u);
    ctx->pc = 0x1CF94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF948u;
    // 0x1cf94c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1CF948u, 0x1CF950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF950u;
label_1cf950:
    // 0x1cf950: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cf950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf954: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1CF954u;
    SET_GPR_U32(ctx, 31, 0x1CF95Cu);
    ctx->pc = 0x1CF958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF954u;
    // 0x1cf958: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1CF954u, 0x1CF95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF95Cu;
label_1cf95c:
    // 0x1cf95c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cf95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf960: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CF960u;
    {
        const bool branch_taken_0x1cf960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF960u;
        // 0x1cf964: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf960) {
            ctx->pc = 0x1CF988u;
            goto label_1cf988;
        }
    }
    ctx->pc = 0x1CF968u;
label_1cf968:
    // 0x1cf968: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x1cf968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1cf96c: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x1cf96cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cf970: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF970u;
    {
        const bool branch_taken_0x1cf970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf970) {
            ctx->pc = 0x1CF980u;
            goto label_1cf980;
        }
    }
    ctx->pc = 0x1CF978u;
    // 0x1cf978: 0xc06f8f4  jal         func_1BE3D0
    ctx->pc = 0x1CF978u;
    SET_GPR_U32(ctx, 31, 0x1CF980u);
    ctx->pc = 0x1CF97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF978u;
    // 0x1cf97c: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D0u, 0x1CF978u, 0x1CF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF980u;
label_1cf980:
    // 0x1cf980: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1CF980u;
    SET_GPR_U32(ctx, 31, 0x1CF988u);
    ctx->pc = 0x1CF984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF980u;
    // 0x1cf984: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1CF980u, 0x1CF988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF988u;
label_1cf988:
    // 0x1cf988: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x1cf988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1cf98c: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1CF98Cu;
    SET_GPR_U32(ctx, 31, 0x1CF994u);
    ctx->pc = 0x1CF990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF98Cu;
    // 0x1cf990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1CF98Cu, 0x1CF994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF994u;
label_1cf994:
    // 0x1cf994: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cf994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cf998: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1CF998u;
    SET_GPR_U32(ctx, 31, 0x1CF9A0u);
    ctx->pc = 0x1CF99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF998u;
    // 0x1cf99c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1CF998u, 0x1CF9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF9A0u;
label_1cf9a0:
    // 0x1cf9a0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1cf9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1cf9a4: 0x1462fff0  bne         $v1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CF9A4u;
    {
        const bool branch_taken_0x1cf9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cf9a4) {
            ctx->pc = 0x1CF968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf968;
        }
    }
    ctx->pc = 0x1CF9ACu;
label_1cf9ac:
    // 0x1cf9ac: 0x0  nop
    ctx->pc = 0x1cf9acu;
    // NOP
    // 0x1cf9b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cf9b4: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1cf9b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cf9b8: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1CF9B8u;
    {
        const bool branch_taken_0x1cf9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9B8u;
        // 0x1cf9bc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9b8) {
            ctx->pc = 0x1CF930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf930;
        }
    }
    ctx->pc = 0x1CF9C0u;
label_1cf9c0:
    // 0x1cf9c0: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x1cf9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1cf9c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cf9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cf9c8: 0xae630060  sw          $v1, 0x60($s3)
    ctx->pc = 0x1cf9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 3));
    // 0x1cf9cc: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x1cf9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1cf9d0: 0x28630a00  slti        $v1, $v1, 0xA00
    ctx->pc = 0x1cf9d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2560) ? 1 : 0);
    // 0x1cf9d4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF9D4u;
    {
        const bool branch_taken_0x1cf9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9D4u;
        // 0x1cf9d8: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9d4) {
            ctx->pc = 0x1CF9F0u;
            goto label_1cf9f0;
        }
    }
    ctx->pc = 0x1CF9DCu;
    // 0x1cf9dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cf9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9e0: 0x24a59900  addiu       $a1, $a1, -0x6700
    ctx->pc = 0x1cf9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940928));
    // 0x1cf9e4: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CF9E4u;
    SET_GPR_U32(ctx, 31, 0x1CF9ECu);
    ctx->pc = 0x1CF9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF9E4u;
    // 0x1cf9e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CF9E4u, 0x1CF9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF9ECu;
label_1cf9ec:
    // 0x1cf9ec: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x1cf9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_1cf9f0:
    // 0x1cf9f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cf9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf9f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cf9f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf9f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cf9f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf9fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfa00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cfa00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfa04: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA04u;
        // 0x1cfa08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFA0Cu;
}
