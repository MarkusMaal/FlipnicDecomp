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

// Function: FUN_00207be8
// Address: 0x207be8 - 0x207d14
void FUN_00207be8_0x207be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00207be8_0x207be8");
#endif

    ctx->pc = 0x207be8u;

    // 0x207be8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x207be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207bec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x207becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207bf0: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x207bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x207bf4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x207bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x207bf8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207BF8u;
    {
        const bool branch_taken_0x207bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BF8u;
        // 0x207bfc: 0xdc850010  ld          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207bf8) {
            ctx->pc = 0x207C14u;
            goto label_207c14;
        }
    }
    ctx->pc = 0x207C00u;
    // 0x207c00: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x207c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x207c04: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x207c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x207c08: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x207c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x207c0c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x207C0Cu;
    {
        const bool branch_taken_0x207c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C0Cu;
        // 0x207c10: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c0c) {
            ctx->pc = 0x207CB8u;
            goto label_207cb8;
        }
    }
    ctx->pc = 0x207C14u;
label_207c14:
    // 0x207c14: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x207c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x207c18: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x207C18u;
    {
        const bool branch_taken_0x207c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207c18) {
            ctx->pc = 0x207C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207C18u;
            // 0x207c1c: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207C74u;
            goto label_207c74;
        }
    }
    ctx->pc = 0x207C20u;
    // 0x207c20: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x207c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x207c24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207C24u;
    {
        const bool branch_taken_0x207c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207c24) {
            ctx->pc = 0x207C34u;
            goto label_207c34;
        }
    }
    ctx->pc = 0x207C2Cu;
    // 0x207c2c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x207C2Cu;
    {
        const bool branch_taken_0x207c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C2Cu;
        // 0x207c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c2c) {
            ctx->pc = 0x207CB8u;
            goto label_207cb8;
        }
    }
    ctx->pc = 0x207C34u;
label_207c34:
    // 0x207c34: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x207C34u;
    {
        const bool branch_taken_0x207c34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x207c34) {
            ctx->pc = 0x207CB8u;
            goto label_207cb8;
        }
    }
    ctx->pc = 0x207C3Cu;
    // 0x207c3c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x207c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x207c40: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x207c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x207c44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207C44u;
    {
        const bool branch_taken_0x207c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C44u;
        // 0x207c48: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c44) {
            ctx->pc = 0x207C64u;
            goto label_207c64;
        }
    }
    ctx->pc = 0x207C4Cu;
    // 0x207c4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x207c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207c50: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x207c50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x207c54: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x207C54u;
    {
        const bool branch_taken_0x207c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C54u;
        // 0x207c58: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c54) {
            ctx->pc = 0x207CB4u;
            goto label_207cb4;
        }
    }
    ctx->pc = 0x207C5Cu;
    // 0x207c5c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x207C5Cu;
    {
        const bool branch_taken_0x207c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C5Cu;
        // 0x207c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c5c) {
            ctx->pc = 0x207CB4u;
            goto label_207cb4;
        }
    }
    ctx->pc = 0x207C64u;
label_207c64:
    // 0x207c64: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x207c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x207c68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207C68u;
    {
        const bool branch_taken_0x207c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C68u;
        // 0x207c6c: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c68) {
            ctx->pc = 0x207C7Cu;
            goto label_207c7c;
        }
    }
    ctx->pc = 0x207C70u;
    // 0x207c70: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x207c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_207c74:
    // 0x207c74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x207C74u;
    {
        const bool branch_taken_0x207c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C74u;
        // 0x207c78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c74) {
            ctx->pc = 0x207CB8u;
            goto label_207cb8;
        }
    }
    ctx->pc = 0x207C7Cu;
label_207c7c:
    // 0x207c7c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x207c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x207c80: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x207c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x207c84: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207C84u;
    {
        const bool branch_taken_0x207c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x207c84) {
            ctx->pc = 0x207C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207C84u;
            // 0x207c88: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207C98u;
            goto label_207c98;
        }
    }
    ctx->pc = 0x207C8Cu;
    // 0x207c8c: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x207c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x207c90: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x207c90u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x207c94: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x207c94u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_207c98:
    // 0x207c98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x207c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207c9c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x207c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x207ca0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x207ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x207ca4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x207CA4u;
    {
        const bool branch_taken_0x207ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ca4) {
            ctx->pc = 0x207CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207CA4u;
            // 0x207ca8: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207CB8u;
            goto label_207cb8;
        }
    }
    ctx->pc = 0x207CACu;
    // 0x207cac: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x207cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x207cb0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x207cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_207cb4:
    // 0x207cb4: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x207cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_207cb8:
    // 0x207cb8: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x207cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x207cbc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x207cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x207cc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x207cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207cc4: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x207cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x207cc8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x207cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x207ccc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x207cccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x207cd0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x207cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x207cd4: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x207cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x207cd8: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x207cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x207cdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x207cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x207ce0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x207ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x207ce4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x207ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x207ce8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x207ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x207cec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x207cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x207cf0: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x207cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x207cf4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x207cf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x207cf8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x207cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207cfc: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x207cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x207d00: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x207d00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x207d04: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x207d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x207d08: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x207d08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x207d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x207D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D0Cu;
        // 0x207d10: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207D14u;
}
