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

// Function: FUN_00201c08
// Address: 0x201c08 - 0x201d1c
void FUN_00201c08_0x201c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201c08_0x201c08");
#endif

    switch (ctx->pc) {
        case 0x201c84u: goto label_201c84;
        case 0x201cd0u: goto label_201cd0;
        case 0x201cf8u: goto label_201cf8;
        default: break;
    }

    ctx->pc = 0x201c08u;

    // 0x201c08: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x201c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201c0c: 0xa74025  or          $t0, $a1, $a3
    ctx->pc = 0x201c0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x201c10: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x201c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x201c14: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x201C14u;
    {
        const bool branch_taken_0x201c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C14u;
        // 0x201c18: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c14) {
            ctx->pc = 0x201CF8u;
            goto label_201cf8;
        }
    }
    ctx->pc = 0x201C1Cu;
    // 0x201c1c: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x201c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x201c20: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x201c20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x201c24: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x201c24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x201c28: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x201c28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x201c2c: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x201c2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x201c30: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x201c30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x201c34: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x201c34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x201c38: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x201c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x201c3c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x201c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x201c40: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x201c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x201c44: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x201c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x201c48: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x201c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x201c4c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x201c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x201c50: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x201C50u;
    {
        const bool branch_taken_0x201c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201c50) {
            ctx->pc = 0x201C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201C50u;
            // 0x201c54: 0xdcaa0000  ld          $t2, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201CB8u;
            goto label_201cb8;
        }
    }
    ctx->pc = 0x201C58u;
    // 0x201c58: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x201c58u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x201c5c: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x201c5cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201c60: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x201c60u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x201c64: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x201c64u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x201c68: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x201c68u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x201c6c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x201c6cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201c70: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x201c70u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x201c74: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x201c74u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x201c78: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x201c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x201c7c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x201C7Cu;
    {
        const bool branch_taken_0x201c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C7Cu;
        // 0x201c80: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c7c) {
            ctx->pc = 0x201CF4u;
            goto label_201cf4;
        }
    }
    ctx->pc = 0x201C84u;
label_201c84:
    // 0x201c84: 0x7cc90000  sq          $t1, 0x0($a2)
    ctx->pc = 0x201c84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
    // 0x201c88: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x201c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x201c8c: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x201c8cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201c90: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x201c90u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x201c94: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x201c94u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x201c98: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x201c98u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201c9c: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x201c9cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x201ca0: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x201ca0u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x201ca4: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x201ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x201ca8: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x201CA8u;
    {
        const bool branch_taken_0x201ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CA8u;
        // 0x201cac: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ca8) {
            ctx->pc = 0x201C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201c84;
        }
    }
    ctx->pc = 0x201CB0u;
    // 0x201cb0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x201CB0u;
    {
        const bool branch_taken_0x201cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CB0u;
        // 0x201cb4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cb0) {
            ctx->pc = 0x201CF8u;
            goto label_201cf8;
        }
    }
    ctx->pc = 0x201CB8u;
label_201cb8:
    // 0x201cb8: 0x149102f  dsubu       $v0, $t2, $t1
    ctx->pc = 0x201cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x201cbc: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x201cbcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x201cc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x201cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x201cc4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x201cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x201cc8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x201CC8u;
    {
        const bool branch_taken_0x201cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CC8u;
        // 0x201ccc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cc8) {
            ctx->pc = 0x201CF4u;
            goto label_201cf4;
        }
    }
    ctx->pc = 0x201CD0u;
label_201cd0:
    // 0x201cd0: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x201cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x201cd4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x201cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x201cd8: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x201cd8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201cdc: 0xa1027  nor         $v0, $zero, $t2
    ctx->pc = 0x201cdcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x201ce0: 0x149182f  dsubu       $v1, $t2, $t1
    ctx->pc = 0x201ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x201ce4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x201ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x201ce8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x201ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x201cec: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x201CECu;
    {
        const bool branch_taken_0x201cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CECu;
        // 0x201cf0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cec) {
            ctx->pc = 0x201CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201cd0;
        }
    }
    ctx->pc = 0x201CF4u;
label_201cf4:
    // 0x201cf4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x201cf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_201cf8:
    // 0x201cf8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x201cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201cfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x201cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x201d00: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x201d00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x201d04: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x201d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x201d08: 0x0  nop
    ctx->pc = 0x201d08u;
    // NOP
    // 0x201d0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x201D0Cu;
    {
        const bool branch_taken_0x201d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D0Cu;
        // 0x201d10: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d0c) {
            ctx->pc = 0x201CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201cf8;
        }
    }
    ctx->pc = 0x201D14u;
    // 0x201d14: 0x3e00008  jr          $ra
    ctx->pc = 0x201D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D14u;
        // 0x201d18: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201D1Cu;
}
