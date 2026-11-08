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

// Function: FUN_00108b80
// Address: 0x108b80 - 0x108c68
void FUN_00108b80_0x108b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00108b80_0x108b80");
#endif

    switch (ctx->pc) {
        case 0x108bb4u: goto label_108bb4;
        case 0x108bf4u: goto label_108bf4;
        case 0x108c08u: goto label_108c08;
        case 0x108c10u: goto label_108c10;
        case 0x108c30u: goto label_108c30;
        default: break;
    }

    ctx->pc = 0x108b80u;

    // 0x108b80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x108b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x108b84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x108b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x108b88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x108b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x108b8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x108b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x108b90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x108b90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x108b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x108b98: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x108b98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b9c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x108b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ba0: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x108ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
    // 0x108ba4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bac: 0xc0583f0  jal         func_160FC0
    ctx->pc = 0x108BACu;
    SET_GPR_U32(ctx, 31, 0x108BB4u);
    ctx->pc = 0x108BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BACu;
    // 0x108bb0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FC0u, 0x108BACu, 0x108BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BB4u;
label_108bb4:
    // 0x108bb4: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x108bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x108bb8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108BB8u;
    {
        const bool branch_taken_0x108bb8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BB8u;
        // 0x108bbc: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108bb8) {
            ctx->pc = 0x108BC8u;
            goto label_108bc8;
        }
    }
    ctx->pc = 0x108BC0u;
    // 0x108bc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x108BC0u;
    {
        const bool branch_taken_0x108bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BC0u;
        // 0x108bc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108bc0) {
            ctx->pc = 0x108BE0u;
            goto label_108be0;
        }
    }
    ctx->pc = 0x108BC8u;
label_108bc8:
    // 0x108bc8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x108bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108bcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108bd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108bd4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x108bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108bd8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x108bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x108bdc: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x108bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_108be0:
    // 0x108be0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x108be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x108be4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x108be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x108be8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x108be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x108bec: 0xc0564c8  jal         func_159320
    ctx->pc = 0x108BECu;
    SET_GPR_U32(ctx, 31, 0x108BF4u);
    ctx->pc = 0x108BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BECu;
    // 0x108bf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159320u, 0x108BECu, 0x108BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BF4u;
label_108bf4:
    // 0x108bf4: 0x26642c00  addiu       $a0, $s3, 0x2C00
    ctx->pc = 0x108bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
    // 0x108bf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bfc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x108bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c00: 0xc058138  jal         func_1604E0
    ctx->pc = 0x108C00u;
    SET_GPR_U32(ctx, 31, 0x108C08u);
    ctx->pc = 0x108C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C00u;
    // 0x108c04: 0x260702d0  addiu       $a3, $s0, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604E0u, 0x108C00u, 0x108C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C08u;
label_108c08:
    // 0x108c08: 0xc055d4c  jal         func_157530
    ctx->pc = 0x108C08u;
    SET_GPR_U32(ctx, 31, 0x108C10u);
    ctx->pc = 0x108C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C08u;
    // 0x108c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157530u, 0x108C08u, 0x108C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C10u;
label_108c10:
    // 0x108c10: 0x8e622c1c  lw          $v0, 0x2C1C($s3)
    ctx->pc = 0x108c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11292)));
    // 0x108c14: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x108c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x108c18: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x108c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x108c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x108c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x108c24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x108c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108c28: 0xc055dec  jal         func_1577B0
    ctx->pc = 0x108C28u;
    SET_GPR_U32(ctx, 31, 0x108C30u);
    ctx->pc = 0x108C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108C28u;
    // 0x108c2c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577B0u, 0x108C28u, 0x108C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108C30u;
label_108c30:
    // 0x108c30: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x108C30u;
    {
        const bool branch_taken_0x108c30 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x108c30) {
            ctx->pc = 0x108C48u;
            goto label_108c48;
        }
    }
    ctx->pc = 0x108C38u;
    // 0x108c38: 0x860301ec  lh          $v1, 0x1EC($s0)
    ctx->pc = 0x108c38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x108c3c: 0x4600002  bltz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x108C3Cu;
    {
        const bool branch_taken_0x108c3c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x108c3c) {
            ctx->pc = 0x108C48u;
            goto label_108c48;
        }
    }
    ctx->pc = 0x108C44u;
    // 0x108c44: 0xa60301ee  sh          $v1, 0x1EE($s0)
    ctx->pc = 0x108c44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 494), (uint16_t)GPR_U32(ctx, 3));
label_108c48:
    // 0x108c48: 0xa61201ec  sh          $s2, 0x1EC($s0)
    ctx->pc = 0x108c48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 492), (uint16_t)GPR_U32(ctx, 18));
    // 0x108c4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x108c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x108c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x108c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x108c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108c60: 0x3e00008  jr          $ra
    ctx->pc = 0x108C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108C60u;
        // 0x108c64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108C68u;
}
