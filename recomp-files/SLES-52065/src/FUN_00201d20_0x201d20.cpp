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

// Function: FUN_00201d20
// Address: 0x201d20 - 0x201e58
void FUN_00201d20_0x201d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201d20_0x201d20");
#endif

    switch (ctx->pc) {
        case 0x201d98u: goto label_201d98;
        case 0x201e14u: goto label_201e14;
        case 0x201e34u: goto label_201e34;
        default: break;
    }

    ctx->pc = 0x201d20u;

    // 0x201d20: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x201d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x201d24: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x201D24u;
    {
        const bool branch_taken_0x201d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D24u;
        // 0x201d28: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d24) {
            ctx->pc = 0x201E34u;
            goto label_201e34;
        }
    }
    ctx->pc = 0x201D2Cu;
    // 0x201d2c: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x201d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x201d30: 0x3c020101  lui         $v0, 0x101
    ctx->pc = 0x201d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)257 << 16));
    // 0x201d34: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x201d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x201d38: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x201d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x201d3c: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x201d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x201d40: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x201d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x201d44: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x201d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x201d48: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x201D48u;
    {
        const bool branch_taken_0x201d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D48u;
        // 0x201d4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d48) {
            ctx->pc = 0x201DC4u;
            goto label_201dc4;
        }
    }
    ctx->pc = 0x201D50u;
    // 0x201d50: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x201d50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201d54: 0x70424389  pcpyld      $t0, $v0, $v0
    ctx->pc = 0x201d54u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x201d58: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x201d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x201d5c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x201d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x201d60: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x201d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x201d64: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x201d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x201d68: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x201d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x201d6c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x201d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x201d70: 0x70681248  psubb       $v0, $v1, $t0
    ctx->pc = 0x201d70u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x201d74: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x201d74u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x201d78: 0x70844b89  pcpyld      $t1, $a0, $a0
    ctx->pc = 0x201d78u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x201d7c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x201d7cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201d80: 0x70491489  pand        $v0, $v0, $t1
    ctx->pc = 0x201d80u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x201d84: 0x70481ba9  pcpyud      $v1, $v0, $t0
    ctx->pc = 0x201d84u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x201d88: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x201d88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x201d8c: 0x54c00029  bnel        $a2, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x201D8Cu;
    {
        const bool branch_taken_0x201d8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x201d8c) {
            ctx->pc = 0x201D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201D8Cu;
            // 0x201d90: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201E34u;
            goto label_201e34;
        }
    }
    ctx->pc = 0x201D94u;
    // 0x201d94: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x201d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_201d98:
    // 0x201d98: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x201d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201d9c: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x201d9cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x201da0: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x201da0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x201da4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x201da4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x201da8: 0x70492489  pand        $a0, $v0, $t1
    ctx->pc = 0x201da8u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x201dac: 0x70861ba9  pcpyud      $v1, $a0, $a2
    ctx->pc = 0x201dacu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x201db0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x201db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x201db4: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x201DB4u;
    {
        const bool branch_taken_0x201db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x201db4) {
            ctx->pc = 0x201DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201DB4u;
            // 0x201db8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201d98;
        }
    }
    ctx->pc = 0x201DBCu;
    // 0x201dbc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x201DBCu;
    {
        const bool branch_taken_0x201dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DBCu;
        // 0x201dc0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201dbc) {
            ctx->pc = 0x201E34u;
            goto label_201e34;
        }
    }
    ctx->pc = 0x201DC4u;
label_201dc4:
    // 0x201dc4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x201dc4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201dc8: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x201dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x201dcc: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x201dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x201dd0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x201dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x201dd4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x201dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x201dd8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x201dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x201ddc: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x201ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x201de0: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x201de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x201de4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x201de4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x201de8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x201de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x201dec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x201decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x201df0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x201DF0u;
    {
        const bool branch_taken_0x201df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201df0) {
            ctx->pc = 0x201DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201DF0u;
            // 0x201df4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201E34u;
            goto label_201e34;
        }
    }
    ctx->pc = 0x201DF8u;
    // 0x201df8: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x201df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
    // 0x201dfc: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x201dfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x201e00: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x201e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x201e04: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x201e04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x201e08: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x201e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x201e0c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x201e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x201e10: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x201e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_201e14:
    // 0x201e14: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x201e14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201e18: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x201e18u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x201e1c: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x201e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x201e20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x201e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x201e24: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x201e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x201e28: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x201E28u;
    {
        const bool branch_taken_0x201e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201e28) {
            ctx->pc = 0x201E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201E28u;
            // 0x201e2c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201e14;
        }
    }
    ctx->pc = 0x201E30u;
    // 0x201e30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x201e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201e34:
    // 0x201e34: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x201e34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201e38: 0x0  nop
    ctx->pc = 0x201e38u;
    // NOP
    // 0x201e3c: 0x0  nop
    ctx->pc = 0x201e3cu;
    // NOP
    // 0x201e40: 0x0  nop
    ctx->pc = 0x201e40u;
    // NOP
    // 0x201e44: 0x0  nop
    ctx->pc = 0x201e44u;
    // NOP
    // 0x201e48: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x201E48u;
    {
        const bool branch_taken_0x201e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201e48) {
            ctx->pc = 0x201E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201E48u;
            // 0x201e4c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201E34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201e34;
        }
    }
    ctx->pc = 0x201E50u;
    // 0x201e50: 0x3e00008  jr          $ra
    ctx->pc = 0x201E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E50u;
        // 0x201e54: 0x871023  subu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201E58u;
}
