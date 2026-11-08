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

// Function: FUN_00201e58
// Address: 0x201e58 - 0x202010
void FUN_00201e58_0x201e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201e58_0x201e58");
#endif

    switch (ctx->pc) {
        case 0x201e60u: goto label_201e60;
        case 0x201ee4u: goto label_201ee4;
        case 0x201f78u: goto label_201f78;
        case 0x201fd8u: goto label_201fd8;
        default: break;
    }

    ctx->pc = 0x201e58u;

    // 0x201e58: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x201E58u;
    {
        const bool branch_taken_0x201e58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x201E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E58u;
        // 0x201e5c: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e58) {
            ctx->pc = 0x201E68u;
            goto label_201e68;
        }
    }
    ctx->pc = 0x201E60u;
label_201e60:
    // 0x201e60: 0x3e00008  jr          $ra
    ctx->pc = 0x201E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E60u;
        // 0x201e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201E68u;
label_201e68:
    // 0x201e68: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x201e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x201e6c: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x201E6Cu;
    {
        const bool branch_taken_0x201e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E6Cu;
        // 0x201e70: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e6c) {
            ctx->pc = 0x201FC4u;
            goto label_201fc4;
        }
    }
    ctx->pc = 0x201E74u;
    // 0x201e74: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x201e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x201e78: 0x2cc70010  sltiu       $a3, $a2, 0x10
    ctx->pc = 0x201e78u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x201e7c: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x201e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x201e80: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x201e80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x201e84: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x201e84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x201e88: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x201e88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x201e8c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x201e8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x201e90: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x201e90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x201e94: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x201e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x201e98: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x201E98u;
    {
        const bool branch_taken_0x201e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E98u;
        // 0x201e9c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e98) {
            ctx->pc = 0x201F40u;
            goto label_201f40;
        }
    }
    ctx->pc = 0x201EA0u;
    // 0x201ea0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x201ea0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201ea4: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x201ea4u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x201ea8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x201ea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201eac: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x201eacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x201eb0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x201eb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x201eb4: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x201eb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x201eb8: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x201eb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x201ebc: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x201ebcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x201ec0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x201ec0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x201ec4: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x201ec4u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x201ec8: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x201ec8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x201ecc: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x201eccu;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x201ed0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x201ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ed4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x201ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201ed8: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x201ED8u;
    {
        const bool branch_taken_0x201ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201ED8u;
        // 0x201edc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ed8) {
            ctx->pc = 0x201FC4u;
            goto label_201fc4;
        }
    }
    ctx->pc = 0x201EE0u;
    // 0x201ee0: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x201ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_201ee4:
    // 0x201ee4: 0x10c0ffde  beqz        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x201EE4u;
    {
        const bool branch_taken_0x201ee4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x201ee4) {
            ctx->pc = 0x201E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201e60;
        }
    }
    ctx->pc = 0x201EECu;
    // 0x201eec: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x201eecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x201ef0: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x201ef0u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x201ef4: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x201ef4u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x201ef8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x201ef8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201efc: 0x70491c89  pand        $v1, $v0, $t1
    ctx->pc = 0x201efcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x201f00: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x201f00u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x201f04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201f08: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x201F08u;
    {
        const bool branch_taken_0x201f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F08u;
        // 0x201f0c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f08) {
            ctx->pc = 0x201E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201e60;
        }
    }
    ctx->pc = 0x201F10u;
    // 0x201f10: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x201f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x201f14: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x201f14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x201f18: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x201F18u;
    {
        const bool branch_taken_0x201f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F18u;
        // 0x201f1c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f18) {
            ctx->pc = 0x201FB8u;
            goto label_201fb8;
        }
    }
    ctx->pc = 0x201F20u;
    // 0x201f20: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x201f20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x201f24: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x201f24u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x201f28: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x201f28u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x201f2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201f30: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x201F30u;
    {
        const bool branch_taken_0x201f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201f30) {
            ctx->pc = 0x201F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201F30u;
            // 0x201f34: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201ee4;
        }
    }
    ctx->pc = 0x201F38u;
    // 0x201f38: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x201F38u;
    {
        const bool branch_taken_0x201f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F38u;
        // 0x201f3c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f38) {
            ctx->pc = 0x201FBCu;
            goto label_201fbc;
        }
    }
    ctx->pc = 0x201F40u;
label_201f40:
    // 0x201f40: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x201f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x201f44: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x201F44u;
    {
        const bool branch_taken_0x201f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F44u;
        // 0x201f48: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f44) {
            ctx->pc = 0x201FB8u;
            goto label_201fb8;
        }
    }
    ctx->pc = 0x201F4Cu;
    // 0x201f4c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x201f4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201f50: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x201f50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201f54: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x201F54u;
    {
        const bool branch_taken_0x201f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F54u;
        // 0x201f58: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f54) {
            ctx->pc = 0x201FC4u;
            goto label_201fc4;
        }
    }
    ctx->pc = 0x201F5Cu;
    // 0x201f5c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x201f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x201f60: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x201f60u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
    // 0x201f64: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x201f64u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x201f68: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x201f68u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x201f6c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x201f6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x201f70: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x201f70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x201f74: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x201f74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
label_201f78:
    // 0x201f78: 0x10c0ffb9  beqz        $a2, . + 4 + (-0x47 << 2)
    ctx->pc = 0x201F78u;
    {
        const bool branch_taken_0x201f78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x201f78) {
            ctx->pc = 0x201E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201e60;
        }
    }
    ctx->pc = 0x201F80u;
    // 0x201f80: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x201f80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x201f84: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x201f84u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x201f88: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x201f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x201f8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x201f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x201f90: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x201f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x201f94: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x201F94u;
    {
        const bool branch_taken_0x201f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F94u;
        // 0x201f98: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f94) {
            ctx->pc = 0x201E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201e60;
        }
    }
    ctx->pc = 0x201F9Cu;
    // 0x201f9c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x201f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x201fa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201FA0u;
    {
        const bool branch_taken_0x201fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FA0u;
        // 0x201fa4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fa0) {
            ctx->pc = 0x201FB8u;
            goto label_201fb8;
        }
    }
    ctx->pc = 0x201FA8u;
    // 0x201fa8: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x201fa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x201fac: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x201facu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x201fb0: 0x5062fff1  beql        $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x201FB0u;
    {
        const bool branch_taken_0x201fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201fb0) {
            ctx->pc = 0x201FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201FB0u;
            // 0x201fb4: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201f78;
        }
    }
    ctx->pc = 0x201FB8u;
label_201fb8:
    // 0x201fb8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x201fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_201fbc:
    // 0x201fbc: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x201fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fc0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x201fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_201fc4:
    // 0x201fc4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x201FC4u;
    {
        const bool branch_taken_0x201fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FC4u;
        // 0x201fc8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fc4) {
            ctx->pc = 0x202000u;
            goto label_202000;
        }
    }
    ctx->pc = 0x201FCCu;
    // 0x201fcc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x201FCCu;
    {
        const bool branch_taken_0x201fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FCCu;
        // 0x201fd0: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fcc) {
            ctx->pc = 0x201FF4u;
            goto label_201ff4;
        }
    }
    ctx->pc = 0x201FD4u;
    // 0x201fd4: 0x0  nop
    ctx->pc = 0x201fd4u;
    // NOP
label_201fd8:
    // 0x201fd8: 0x10c0ffa1  beqz        $a2, . + 4 + (-0x5F << 2)
    ctx->pc = 0x201FD8u;
    {
        const bool branch_taken_0x201fd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x201fd8) {
            ctx->pc = 0x201E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201e60;
        }
    }
    ctx->pc = 0x201FE0u;
    // 0x201fe0: 0x10e0ff9f  beqz        $a3, . + 4 + (-0x61 << 2)
    ctx->pc = 0x201FE0u;
    {
        const bool branch_taken_0x201fe0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x201FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FE0u;
        // 0x201fe4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fe0) {
            ctx->pc = 0x201E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201e60;
        }
    }
    ctx->pc = 0x201FE8u;
    // 0x201fe8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x201fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x201fec: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x201fecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201ff0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x201ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_201ff4:
    // 0x201ff4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x201ff4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201ff8: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x201FF8u;
    {
        const bool branch_taken_0x201ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FF8u;
        // 0x201ffc: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ff8) {
            ctx->pc = 0x201FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201fd8;
        }
    }
    ctx->pc = 0x202000u;
label_202000:
    // 0x202000: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x202000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x202004: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x202004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202008: 0x3e00008  jr          $ra
    ctx->pc = 0x202008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202008u;
        // 0x20200c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202010u;
}
