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

// Function: FUN_00201990
// Address: 0x201990 - 0x201abc
void FUN_00201990_0x201990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201990_0x201990");
#endif

    switch (ctx->pc) {
        case 0x201a14u: goto label_201a14;
        case 0x201a64u: goto label_201a64;
        case 0x201a84u: goto label_201a84;
        case 0x201aa8u: goto label_201aa8;
        default: break;
    }

    ctx->pc = 0x201990u;

    // 0x201990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x201998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20199c: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x20199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2019a0: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2019A0u;
    {
        const bool branch_taken_0x2019a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2019A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019A0u;
        // 0x2019a4: 0x7fbf0010  sq          $ra, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019a0) {
            ctx->pc = 0x201A84u;
            goto label_201a84;
        }
    }
    ctx->pc = 0x2019A8u;
    // 0x2019a8: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x2019a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2019ac: 0x3c030101  lui         $v1, 0x101
    ctx->pc = 0x2019acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)257 << 16));
    // 0x2019b0: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x2019b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x2019b4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2019b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2019b8: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x2019b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x2019bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2019bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2019c0: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x2019c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x2019c4: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x2019c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x2019c8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x2019c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x2019cc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2019ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2019d0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x2019d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x2019d4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2019d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2019d8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x2019d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x2019dc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2019DCu;
    {
        const bool branch_taken_0x2019dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2019E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019DCu;
        // 0x2019e0: 0xde060000  ld          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019dc) {
            ctx->pc = 0x201A40u;
            goto label_201a40;
        }
    }
    ctx->pc = 0x2019E4u;
    // 0x2019e4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2019e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2019e8: 0x70633b89  pcpyld      $a3, $v1, $v1
    ctx->pc = 0x2019e8u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x2019ec: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x2019ecu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x2019f0: 0x70471a48  psubb       $v1, $v0, $a3
    ctx->pc = 0x2019f0u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x2019f4: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x2019f4u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2019f8: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x2019f8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2019fc: 0x70681c89  pand        $v1, $v1, $t0
    ctx->pc = 0x2019fcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x201a00: 0x706313a9  pcpyud      $v0, $v1, $v1
    ctx->pc = 0x201a00u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x201a04: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x201a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201a08: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x201A08u;
    {
        const bool branch_taken_0x201a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A08u;
        // 0x201a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a08) {
            ctx->pc = 0x201A84u;
            goto label_201a84;
        }
    }
    ctx->pc = 0x201A10u;
    // 0x201a10: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x201a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_201a14:
    // 0x201a14: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x201a14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x201a18: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x201a18u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x201a1c: 0x70471248  psubb       $v0, $v0, $a3
    ctx->pc = 0x201a1cu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x201a20: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x201a20u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201a24: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x201a24u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x201a28: 0x70421ba9  pcpyud      $v1, $v0, $v0
    ctx->pc = 0x201a28u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x201a2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201a30: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x201A30u;
    {
        const bool branch_taken_0x201a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201a30) {
            ctx->pc = 0x201A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201A30u;
            // 0x201a34: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201A14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201a14;
        }
    }
    ctx->pc = 0x201A38u;
    // 0x201a38: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x201A38u;
    {
        const bool branch_taken_0x201a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A38u;
        // 0x201a3c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a38) {
            ctx->pc = 0x201A84u;
            goto label_201a84;
        }
    }
    ctx->pc = 0x201A40u;
label_201a40:
    // 0x201a40: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x201a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a44: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x201a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a48: 0xc3182f  dsubu       $v1, $a2, $v1
    ctx->pc = 0x201a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
    // 0x201a4c: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x201a4cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x201a50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x201a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x201a54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x201a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x201a58: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x201A58u;
    {
        const bool branch_taken_0x201a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A58u;
        // 0x201a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a58) {
            ctx->pc = 0x201A84u;
            goto label_201a84;
        }
    }
    ctx->pc = 0x201A60u;
    // 0x201a60: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x201a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_201a64:
    // 0x201a64: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x201a64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x201a68: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x201a68u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x201a6c: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x201a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x201a70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x201a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x201a74: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x201a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x201a78: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x201A78u;
    {
        const bool branch_taken_0x201a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201a78) {
            ctx->pc = 0x201A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201A78u;
            // 0x201a7c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201A64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201a64;
        }
    }
    ctx->pc = 0x201A80u;
    // 0x201a80: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x201a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_201a84:
    // 0x201a84: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x201a84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201a88: 0x0  nop
    ctx->pc = 0x201a88u;
    // NOP
    // 0x201a8c: 0x0  nop
    ctx->pc = 0x201a8cu;
    // NOP
    // 0x201a90: 0x0  nop
    ctx->pc = 0x201a90u;
    // NOP
    // 0x201a94: 0x0  nop
    ctx->pc = 0x201a94u;
    // NOP
    // 0x201a98: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x201A98u;
    {
        const bool branch_taken_0x201a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201a98) {
            ctx->pc = 0x201A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201A98u;
            // 0x201a9c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201a84;
        }
    }
    ctx->pc = 0x201AA0u;
    // 0x201aa0: 0xc080702  jal         func_201C08
    ctx->pc = 0x201AA0u;
    SET_GPR_U32(ctx, 31, 0x201AA8u);
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x201AA0u, 0x201AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201AA8u;
label_201aa8:
    // 0x201aa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x201aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201aac: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x201aacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x201AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AB4u;
        // 0x201ab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201ABCu;
}
