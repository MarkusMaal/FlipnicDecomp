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

// Function: FUN_001f4ab0
// Address: 0x1f4ab0 - 0x1f4b84
void FUN_001f4ab0_0x1f4ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f4ab0_0x1f4ab0");
#endif

    switch (ctx->pc) {
        case 0x1f4af8u: goto label_1f4af8;
        case 0x1f4b10u: goto label_1f4b10;
        case 0x1f4b28u: goto label_1f4b28;
        case 0x1f4b30u: goto label_1f4b30;
        case 0x1f4b38u: goto label_1f4b38;
        case 0x1f4b44u: goto label_1f4b44;
        case 0x1f4b48u: goto label_1f4b48;
        case 0x1f4b50u: goto label_1f4b50;
        case 0x1f4b60u: goto label_1f4b60;
        default: break;
    }

    ctx->pc = 0x1f4ab0u;

    // 0x1f4ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f4ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f4ab4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1f4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1f4ab8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f4ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f4abc: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x1f4abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x1f4ac0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f4ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f4ac4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f4ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f4ac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4acc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f4accu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10001810u));
    // 0x1f4ad0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1f4ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1f4ad4: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F4AD4u;
    {
        const bool branch_taken_0x1f4ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4AD4u;
        // 0x1f4ad8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ad4) {
            ctx->pc = 0x1F4B70u;
            goto label_1f4b70;
        }
    }
    ctx->pc = 0x1F4ADCu;
    // 0x1f4adc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f4ae0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1f4ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4ae4: 0x2450ba28  addiu       $s0, $v0, -0x45D8
    ctx->pc = 0x1f4ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949416));
    // 0x1f4ae8: 0x8c44ba28  lw          $a0, -0x45D8($v0)
    ctx->pc = 0x1f4ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21BA28u));
    // 0x1f4aec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1f4aecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x21BA2Cu));
    // 0x1f4af0: 0xc07d292  jal         func_1F4A48
    ctx->pc = 0x1F4AF0u;
    SET_GPR_U32(ctx, 31, 0x1F4AF8u);
    ctx->pc = 0x1F4AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4AF0u;
    // 0x1f4af4: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4A48u, 0x1F4AF0u, 0x1F4AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4AF8u;
label_1f4af8:
    // 0x1f4af8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1f4af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1f4afc: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1f4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1f4b00: 0x24a5b2c0  addiu       $a1, $a1, -0x4D40
    ctx->pc = 0x1f4b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947520));
    // 0x1f4b04: 0x34846000  ori         $a0, $a0, 0x6000
    ctx->pc = 0x1f4b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24576);
    // 0x1f4b08: 0xc07d296  jal         func_1F4A58
    ctx->pc = 0x1F4B08u;
    SET_GPR_U32(ctx, 31, 0x1F4B10u);
    ctx->pc = 0x1F4B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B08u;
    // 0x1f4b0c: 0x24060740  addiu       $a2, $zero, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4A58u, 0x1F4B08u, 0x1F4B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B10u;
label_1f4b10:
    // 0x1f4b10: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1f4b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1f4b14: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1f4b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1f4b18: 0x24a5ba00  addiu       $a1, $a1, -0x4600
    ctx->pc = 0x1f4b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949376));
    // 0x1f4b1c: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x1f4b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x1f4b20: 0xc07d296  jal         func_1F4A58
    ctx->pc = 0x1F4B20u;
    SET_GPR_U32(ctx, 31, 0x1F4B28u);
    ctx->pc = 0x1F4B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B20u;
    // 0x1f4b24: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4A58u, 0x1F4B20u, 0x1F4B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B28u;
label_1f4b28:
    // 0x1f4b28: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1F4B28u;
    SET_GPR_U32(ctx, 31, 0x1F4B30u);
    ctx->pc = 0x1F4B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B28u;
    // 0x1f4b2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1F4B28u, 0x1F4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B30u;
label_1f4b30:
    // 0x1f4b30: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1F4B30u;
    SET_GPR_U32(ctx, 31, 0x1F4B38u);
    ctx->pc = 0x1F4B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B30u;
    // 0x1f4b34: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1F4B30u, 0x1F4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B38u;
label_1f4b38:
    // 0x1f4b38: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1f4b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f4b3c: 0xc07d292  jal         func_1F4A48
    ctx->pc = 0x1F4B3Cu;
    SET_GPR_U32(ctx, 31, 0x1F4B44u);
    ctx->pc = 0x1F4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B3Cu;
    // 0x1f4b40: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4A48u, 0x1F4B3Cu, 0x1F4B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B44u;
label_1f4b44:
    // 0x1f4b44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f4b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f4b48:
    // 0x1f4b48: 0xc07d2a8  jal         func_1F4AA0
    ctx->pc = 0x1F4B48u;
    SET_GPR_U32(ctx, 31, 0x1F4B50u);
    ctx->pc = 0x1F4B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B48u;
    // 0x1f4b4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4AA0u, 0x1F4B48u, 0x1F4B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B50u;
label_1f4b50:
    // 0x1f4b50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f4b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f4b54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f4b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b58: 0xc07d292  jal         func_1F4A48
    ctx->pc = 0x1F4B58u;
    SET_GPR_U32(ctx, 31, 0x1F4B60u);
    ctx->pc = 0x1F4B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B58u;
    // 0x1f4b5c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4A48u, 0x1F4B58u, 0x1F4B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B60u;
label_1f4b60:
    // 0x1f4b60: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1f4b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f4b64: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F4B64u;
    {
        const bool branch_taken_0x1f4b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4b64) {
            ctx->pc = 0x1F4B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4B64u;
            // 0x1f4b68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4b48;
        }
    }
    ctx->pc = 0x1F4B6Cu;
    // 0x1f4b6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f4b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f4b70:
    // 0x1f4b70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f4b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4b74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f4b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B7Cu;
        // 0x1f4b80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4B84u;
}
