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

// Function: FUN_001d8ad8
// Address: 0x1d8ad8 - 0x1d8bb8
void FUN_001d8ad8_0x1d8ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d8ad8_0x1d8ad8");
#endif

    switch (ctx->pc) {
        case 0x1d8b70u: goto label_1d8b70;
        case 0x1d8b98u: goto label_1d8b98;
        default: break;
    }

    ctx->pc = 0x1d8ad8u;

    // 0x1d8ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8adc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8ae4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1d8ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d8ae8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8aec: 0x8c43054c  lw          $v1, 0x54C($v0)
    ctx->pc = 0x1d8aecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d8af0: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1d8af0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1d8af4: 0x1064001a  beq         $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D8AF4u;
    {
        const bool branch_taken_0x1d8af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AF4u;
        // 0x1d8af8: 0x28620041  slti        $v0, $v1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8af4) {
            ctx->pc = 0x1D8B60u;
            goto label_1d8b60;
        }
    }
    ctx->pc = 0x1D8AFCu;
    // 0x1d8afc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8AFCu;
    {
        const bool branch_taken_0x1d8afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AFCu;
        // 0x1d8b00: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8afc) {
            ctx->pc = 0x1D8B20u;
            goto label_1d8b20;
        }
    }
    ctx->pc = 0x1D8B04u;
    // 0x1d8b04: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1d8b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1d8b08: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D8B08u;
    {
        const bool branch_taken_0x1d8b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B08u;
        // 0x1d8b0c: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b08) {
            ctx->pc = 0x1D8B30u;
            goto label_1d8b30;
        }
    }
    ctx->pc = 0x1D8B10u;
    // 0x1d8b10: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8B10u;
    {
        const bool branch_taken_0x1d8b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B10u;
        // 0x1d8b14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b10) {
            ctx->pc = 0x1D8B48u;
            goto label_1d8b48;
        }
    }
    ctx->pc = 0x1D8B18u;
    // 0x1d8b18: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D8B18u;
    {
        const bool branch_taken_0x1d8b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B18u;
        // 0x1d8b1c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b18) {
            ctx->pc = 0x1D8BB0u;
            goto label_1d8bb0;
        }
    }
    ctx->pc = 0x1D8B20u;
label_1d8b20:
    // 0x1d8b20: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D8B20u;
    {
        const bool branch_taken_0x1d8b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B20u;
        // 0x1d8b24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b20) {
            ctx->pc = 0x1D8B88u;
            goto label_1d8b88;
        }
    }
    ctx->pc = 0x1D8B28u;
    // 0x1d8b28: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D8B28u;
    {
        const bool branch_taken_0x1d8b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B28u;
        // 0x1d8b2c: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b28) {
            ctx->pc = 0x1D8BB0u;
            goto label_1d8bb0;
        }
    }
    ctx->pc = 0x1D8B30u;
label_1d8b30:
    // 0x1d8b30: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8b38: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d8b38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d8b3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8b40: 0x80753be  j           func_1D4EF8
    ctx->pc = 0x1D8B40u;
    ctx->pc = 0x1D8B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B40u;
    // 0x1d8b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4EF8u;
    FUN_001d4ef8_0x1d4ef8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8B48u;
label_1d8b48:
    // 0x1d8b48: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8b4c: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d8b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d8b50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8b54: 0x807566a  j           func_1D59A8
    ctx->pc = 0x1D8B54u;
    ctx->pc = 0x1D8B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B54u;
    // 0x1d8b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59A8u;
    FUN_001d59a8_0x1d59a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8B5Cu;
    // 0x1d8b5c: 0x0  nop
    ctx->pc = 0x1d8b5cu;
    // NOP
label_1d8b60:
    // 0x1d8b60: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1d8b60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1d8b64: 0x26100548  addiu       $s0, $s0, 0x548
    ctx->pc = 0x1d8b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1352));
    // 0x1d8b68: 0xc0753be  jal         func_1D4EF8
    ctx->pc = 0x1D8B68u;
    SET_GPR_U32(ctx, 31, 0x1D8B70u);
    ctx->pc = 0x1D8B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B68u;
    // 0x1d8b6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4EF8u, 0x1D8B68u, 0x1D8B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B70u;
label_1d8b70:
    // 0x1d8b70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8b74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8b7c: 0x807566a  j           func_1D59A8
    ctx->pc = 0x1D8B7Cu;
    ctx->pc = 0x1D8B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B7Cu;
    // 0x1d8b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59A8u;
    FUN_001d59a8_0x1d59a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8B84u;
    // 0x1d8b84: 0x0  nop
    ctx->pc = 0x1d8b84u;
    // NOP
label_1d8b88:
    // 0x1d8b88: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1d8b88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1d8b8c: 0x26100548  addiu       $s0, $s0, 0x548
    ctx->pc = 0x1d8b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1352));
    // 0x1d8b90: 0xc0753e2  jal         func_1D4F88
    ctx->pc = 0x1D8B90u;
    SET_GPR_U32(ctx, 31, 0x1D8B98u);
    ctx->pc = 0x1D8B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B90u;
    // 0x1d8b94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F88u, 0x1D8B90u, 0x1D8B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B98u;
label_1d8b98:
    // 0x1d8b98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d8b9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8ba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ba4: 0x807566a  j           func_1D59A8
    ctx->pc = 0x1D8BA4u;
    ctx->pc = 0x1D8BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BA4u;
    // 0x1d8ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59A8u;
    FUN_001d59a8_0x1d59a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8BACu;
    // 0x1d8bac: 0x0  nop
    ctx->pc = 0x1d8bacu;
    // NOP
label_1d8bb0:
    // 0x1d8bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BB0u;
        // 0x1d8bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8BB8u;
}
