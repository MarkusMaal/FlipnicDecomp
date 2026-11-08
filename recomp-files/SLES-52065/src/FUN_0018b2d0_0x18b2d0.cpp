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

// Function: FUN_0018b2d0
// Address: 0x18b2d0 - 0x18b3bc
void FUN_0018b2d0_0x18b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018b2d0_0x18b2d0");
#endif

    switch (ctx->pc) {
        case 0x18b300u: goto label_18b300;
        case 0x18b308u: goto label_18b308;
        case 0x18b31cu: goto label_18b31c;
        case 0x18b33cu: goto label_18b33c;
        case 0x18b360u: goto label_18b360;
        default: break;
    }

    ctx->pc = 0x18b2d0u;

    // 0x18b2d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18b2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18b2d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18b2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18b2d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18b2dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18b2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18b2e0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x18b2e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18b2e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18b2e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b2f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b2f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b2f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b2f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b300:
    // 0x18b300: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18b300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b304: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18b304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b308:
    // 0x18b308: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x18b308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x18b30c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18b310: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18b310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b314: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x18B314u;
    SET_GPR_U32(ctx, 31, 0x18B31Cu);
    ctx->pc = 0x18B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B314u;
    // 0x18b318: 0x24440acc  addiu       $a0, $v0, 0xACC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2764));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x18B314u, 0x18B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B31Cu;
label_18b31c:
    // 0x18b31c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18B31Cu;
    {
        const bool branch_taken_0x18b31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b31c) {
            ctx->pc = 0x18B374u;
            goto label_18b374;
        }
    }
    ctx->pc = 0x18B324u;
    // 0x18b324: 0x11a140  sll         $s4, $s1, 5
    ctx->pc = 0x18b324u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x18b328: 0x129880  sll         $s3, $s2, 2
    ctx->pc = 0x18b328u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18b32c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x18b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x18b330: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x18b330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18b334: 0xc077ca6  jal         func_1DF298
    ctx->pc = 0x18B334u;
    SET_GPR_U32(ctx, 31, 0x18B33Cu);
    ctx->pc = 0x18B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B334u;
    // 0x18b338: 0x8c442acc  lw          $a0, 0x2ACC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF298u, 0x18B334u, 0x18B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B33Cu;
label_18b33c:
    // 0x18b33c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x18b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x18b340: 0x118a40  sll         $s1, $s1, 9
    ctx->pc = 0x18b340u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x18b344: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x18b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18b348: 0x129180  sll         $s2, $s2, 6
    ctx->pc = 0x18b348u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x18b34c: 0x8c4408cc  lw          $a0, 0x8CC($v0)
    ctx->pc = 0x18b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2252)));
    // 0x18b350: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x18b350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x18b354: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18b358: 0xc046c14  jal         func_11B050
    ctx->pc = 0x18B358u;
    SET_GPR_U32(ctx, 31, 0x18B360u);
    ctx->pc = 0x18B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B358u;
    // 0x18b35c: 0x24450acc  addiu       $a1, $v0, 0xACC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2764));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x18B358u, 0x18B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B360u;
label_18b360:
    // 0x18b360: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x18b360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x18b364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b368: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x18b368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x18b36c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18B36Cu;
    {
        const bool branch_taken_0x18b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B36Cu;
        // 0x18b370: 0xa0600acc  sb          $zero, 0xACC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b36c) {
            ctx->pc = 0x18B398u;
            goto label_18b398;
        }
    }
    ctx->pc = 0x18B374u;
label_18b374:
    // 0x18b374: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18b374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18b378: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x18b378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b37c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x18B37Cu;
    {
        const bool branch_taken_0x18b37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B37Cu;
        // 0x18b380: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b37c) {
            ctx->pc = 0x18B308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b308;
        }
    }
    ctx->pc = 0x18B384u;
    // 0x18b384: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18b384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18b388: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x18b388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18b38c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x18B38Cu;
    {
        const bool branch_taken_0x18b38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B38Cu;
        // 0x18b390: 0x26940200  addiu       $s4, $s4, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b38c) {
            ctx->pc = 0x18B300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b300;
        }
    }
    ctx->pc = 0x18B394u;
    // 0x18b394: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b398:
    // 0x18b398: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18b398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b39c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18b39cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b3a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b3a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b3a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b3a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b3a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b3a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b3ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b3b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18B3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3B4u;
        // 0x18b3b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B3BCu;
}
