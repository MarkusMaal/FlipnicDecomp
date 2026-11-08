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

// Function: FUN_00201ac0
// Address: 0x201ac0 - 0x201c04
void FUN_00201ac0_0x201ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201ac0_0x201ac0");
#endif

    switch (ctx->pc) {
        case 0x201b38u: goto label_201b38;
        case 0x201b98u: goto label_201b98;
        case 0x201bd0u: goto label_201bd0;
        default: break;
    }

    ctx->pc = 0x201ac0u;

    // 0x201ac0: 0x854025  or          $t0, $a0, $a1
    ctx->pc = 0x201ac0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x201ac4: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x201ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x201ac8: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x201AC8u;
    {
        const bool branch_taken_0x201ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201ac8) {
            ctx->pc = 0x201ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201AC8u;
            // 0x201acc: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201BF0u;
            goto label_201bf0;
        }
    }
    ctx->pc = 0x201AD0u;
    // 0x201ad0: 0x3109000f  andi        $t1, $t0, 0xF
    ctx->pc = 0x201ad0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x201ad4: 0x3c070101  lui         $a3, 0x101
    ctx->pc = 0x201ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)257 << 16));
    // 0x201ad8: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x201ad8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x201adc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x201adcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x201ae0: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x201ae0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x201ae4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x201ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x201ae8: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x201ae8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x201aec: 0x3c068080  lui         $a2, 0x8080
    ctx->pc = 0x201aecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32896 << 16));
    // 0x201af0: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x201af0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x201af4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x201af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x201af8: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x201af8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x201afc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x201afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x201b00: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x201b00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x201b04: 0x1520001f  bnez        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x201B04u;
    {
        const bool branch_taken_0x201b04 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x201B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B04u;
        // 0x201b08: 0xdca20000  ld          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b04) {
            ctx->pc = 0x201B84u;
            goto label_201b84;
        }
    }
    ctx->pc = 0x201B0Cu;
    // 0x201b0c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x201b0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201b10: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x201b10u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x201b14: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x201b14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201b18: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x201b18u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x201b1c: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x201b1cu;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201b20: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x201b20u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x201b24: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x201b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x201b28: 0x54600031  bnel        $v1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x201B28u;
    {
        const bool branch_taken_0x201b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x201b28) {
            ctx->pc = 0x201B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201B28u;
            // 0x201b2c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201BF0u;
            goto label_201bf0;
        }
    }
    ctx->pc = 0x201B30u;
    // 0x201b30: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x201b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201b34: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x201b34u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_201b38:
    // 0x201b38: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x201b38u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x201b3c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x201b3cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201b40: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x201b40u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x201b44: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x201b44u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x201b48: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x201b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x201b4c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x201B4Cu;
    {
        const bool branch_taken_0x201b4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x201B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B4Cu;
        // 0x201b50: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b4c) {
            ctx->pc = 0x201B5Cu;
            goto label_201b5c;
        }
    }
    ctx->pc = 0x201B54u;
    // 0x201b54: 0x3e00008  jr          $ra
    ctx->pc = 0x201B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B54u;
        // 0x201b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201B5Cu;
label_201b5c:
    // 0x201b5c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x201b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x201b60: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x201b60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201b64: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x201b64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201b68: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x201b68u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201b6c: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x201b6cu;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x201b70: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x201b70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x201b74: 0x5120fff0  beql        $t1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x201B74u;
    {
        const bool branch_taken_0x201b74 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b74) {
            ctx->pc = 0x201B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201B74u;
            // 0x201b78: 0x70021ce9  pnor        $v1, $zero, $v0 (Delay Slot)
            SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201b38;
        }
    }
    ctx->pc = 0x201B7Cu;
    // 0x201b7c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x201B7Cu;
    {
        const bool branch_taken_0x201b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B7Cu;
        // 0x201b80: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b7c) {
            ctx->pc = 0x201BF0u;
            goto label_201bf0;
        }
    }
    ctx->pc = 0x201B84u;
label_201b84:
    // 0x201b84: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x201b84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201b88: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x201B88u;
    {
        const bool branch_taken_0x201b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x201b88) {
            ctx->pc = 0x201B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201B88u;
            // 0x201b8c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201BF0u;
            goto label_201bf0;
        }
    }
    ctx->pc = 0x201B90u;
    // 0x201b90: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x201b90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201b94: 0x24027  nor         $t0, $zero, $v0
    ctx->pc = 0x201b94u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_201b98:
    // 0x201b98: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x201b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x201b9c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x201b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x201ba0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x201ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x201ba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201BA4u;
    {
        const bool branch_taken_0x201ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BA4u;
        // 0x201ba8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ba4) {
            ctx->pc = 0x201BB4u;
            goto label_201bb4;
        }
    }
    ctx->pc = 0x201BACu;
    // 0x201bac: 0x3e00008  jr          $ra
    ctx->pc = 0x201BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BACu;
        // 0x201bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201BB4u;
label_201bb4:
    // 0x201bb4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x201bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x201bb8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x201bb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201bbc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x201bbcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201bc0: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x201BC0u;
    {
        const bool branch_taken_0x201bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201bc0) {
            ctx->pc = 0x201BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201BC0u;
            // 0x201bc4: 0x24027  nor         $t0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201b98;
        }
    }
    ctx->pc = 0x201BC8u;
    // 0x201bc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x201BC8u;
    {
        const bool branch_taken_0x201bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BC8u;
        // 0x201bcc: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bc8) {
            ctx->pc = 0x201BF0u;
            goto label_201bf0;
        }
    }
    ctx->pc = 0x201BD0u;
label_201bd0:
    // 0x201bd0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x201bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x201bd4: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x201bd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201bd8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x201bd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x201bdc: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x201BDCu;
    {
        const bool branch_taken_0x201bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x201bdc) {
            ctx->pc = 0x201BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201BDCu;
            // 0x201be0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201BF8u;
            goto label_201bf8;
        }
    }
    ctx->pc = 0x201BE4u;
    // 0x201be4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x201be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x201be8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x201be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x201bec: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x201becu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_201bf0:
    // 0x201bf0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x201BF0u;
    {
        const bool branch_taken_0x201bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BF0u;
        // 0x201bf4: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bf0) {
            ctx->pc = 0x201BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201bd0;
        }
    }
    ctx->pc = 0x201BF8u;
label_201bf8:
    // 0x201bf8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x201bf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x201BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BFCu;
        // 0x201c00: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201C04u;
}
