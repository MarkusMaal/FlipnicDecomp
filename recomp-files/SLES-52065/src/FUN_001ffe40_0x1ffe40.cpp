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

// Function: FUN_001ffe40
// Address: 0x1ffe40 - 0x1fff00
void FUN_001ffe40_0x1ffe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ffe40_0x1ffe40");
#endif

    ctx->pc = 0x1ffe40u;

    // 0x1ffe40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ffe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ffe44: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1ffe44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1ffe48: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FFE48u;
    {
        const bool branch_taken_0x1ffe48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE48u;
        // 0x1ffe4c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe48) {
            ctx->pc = 0x1FFE84u;
            goto label_1ffe84;
        }
    }
    ctx->pc = 0x1FFE50u;
    // 0x1ffe50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFE50u;
    {
        const bool branch_taken_0x1ffe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE50u;
        // 0x1ffe54: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe50) {
            ctx->pc = 0x1FFE60u;
            goto label_1ffe60;
        }
    }
    ctx->pc = 0x1FFE58u;
    // 0x1ffe58: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE58u;
        // 0x1ffe5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFE60u;
label_1ffe60:
    // 0x1ffe60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFE60u;
    {
        const bool branch_taken_0x1ffe60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe60) {
            ctx->pc = 0x1FFE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFE60u;
            // 0x1ffe64: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFE78u;
            goto label_1ffe78;
        }
    }
    ctx->pc = 0x1FFE68u;
    // 0x1ffe68: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1ffe68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ffe6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffe70: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE70u;
        // 0x1ffe74: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFE78u;
label_1ffe78:
    // 0x1ffe78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ffe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffe7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE7Cu;
        // 0x1ffe80: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFE84u;
label_1ffe84:
    // 0x1ffe84: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1ffe84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ffe88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFE88u;
    {
        const bool branch_taken_0x1ffe88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE88u;
        // 0x1ffe8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe88) {
            ctx->pc = 0x1FFE98u;
            goto label_1ffe98;
        }
    }
    ctx->pc = 0x1FFE90u;
    // 0x1ffe90: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ffe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ffe94: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1ffe94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_1ffe98:
    // 0x1ffe98: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ffe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffe9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFE9Cu;
    {
        const bool branch_taken_0x1ffe9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFE9Cu;
        // 0x1ffea0: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffe9c) {
            ctx->pc = 0x1FFEB0u;
            goto label_1ffeb0;
        }
    }
    ctx->pc = 0x1FFEA4u;
    // 0x1ffea4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1ffea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1ffea8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1ffea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1ffeac: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1ffeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1ffeb0:
    // 0x1ffeb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFEB0u;
    {
        const bool branch_taken_0x1ffeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEB0u;
        // 0x1ffeb4: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffeb0) {
            ctx->pc = 0x1FFEC4u;
            goto label_1ffec4;
        }
    }
    ctx->pc = 0x1FFEB8u;
    // 0x1ffeb8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1ffeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1ffebc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1ffebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1ffec0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1ffec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1ffec4:
    // 0x1ffec4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFEC4u;
    {
        const bool branch_taken_0x1ffec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEC4u;
        // 0x1ffec8: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffec4) {
            ctx->pc = 0x1FFED8u;
            goto label_1ffed8;
        }
    }
    ctx->pc = 0x1FFECCu;
    // 0x1ffecc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1ffeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1ffed0: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x1ffed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1ffed4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1ffed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1ffed8:
    // 0x1ffed8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FFED8u;
    {
        const bool branch_taken_0x1ffed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffed8) {
            ctx->pc = 0x1FFEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFED8u;
            // 0x1ffedc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFEF8u;
            goto label_1ffef8;
        }
    }
    ctx->pc = 0x1FFEE0u;
    // 0x1ffee0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1ffee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ffee4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFEE4u;
    {
        const bool branch_taken_0x1ffee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEE4u;
        // 0x1ffee8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffee4) {
            ctx->pc = 0x1FFEF4u;
            goto label_1ffef4;
        }
    }
    ctx->pc = 0x1FFEECu;
    // 0x1ffeec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEECu;
        // 0x1ffef0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFEF4u;
label_1ffef4:
    // 0x1ffef4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ffef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1ffef8:
    // 0x1ffef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFEF8u;
        // 0x1ffefc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFF00u;
}
