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

// Function: FUN_001ff9b0
// Address: 0x1ff9b0 - 0x1ffa70
void FUN_001ff9b0_0x1ff9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ff9b0_0x1ff9b0");
#endif

    switch (ctx->pc) {
        case 0x1ff9ecu: goto label_1ff9ec;
        case 0x1ffa10u: goto label_1ffa10;
        case 0x1ffa4cu: goto label_1ffa4c;
        default: break;
    }

    ctx->pc = 0x1ff9b0u;

    // 0x1ff9b0: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1ff9b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ff9b4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FF9B4u;
    {
        const bool branch_taken_0x1ff9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9B4u;
        // 0x1ff9b8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff9b4) {
            ctx->pc = 0x1FFA30u;
            goto label_1ffa30;
        }
    }
    ctx->pc = 0x1FF9BCu;
    // 0x1ff9bc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1ff9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1ff9c0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FF9C0u;
    {
        const bool branch_taken_0x1ff9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9C0u;
        // 0x1ff9c4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff9c0) {
            ctx->pc = 0x1FFA30u;
            goto label_1ffa30;
        }
    }
    ctx->pc = 0x1FF9C8u;
    // 0x1ff9c8: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x1ff9c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff9cc: 0x2cca0020  sltiu       $t2, $a2, 0x20
    ctx->pc = 0x1ff9ccu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff9d0: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1ff9d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff9d4: 0x81a38  dsll        $v1, $t0, 8
    ctx->pc = 0x1ff9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 8);
    // 0x1ff9d8: 0x694025  or          $t0, $v1, $t1
    ctx->pc = 0x1ff9d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x1ff9dc: 0x70081ee9  pcpyh       $v1, $t0
    ctx->pc = 0x1ff9dcu;
    { __m128i src = GPR_VEC(ctx, 8); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 3, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x1ff9e0: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x1FF9E0u;
    {
        const bool branch_taken_0x1ff9e0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9E0u;
        // 0x1ff9e4: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff9e0) {
            ctx->pc = 0x1FFA1Cu;
            goto label_1ffa1c;
        }
    }
    ctx->pc = 0x1FF9E8u;
    // 0x1ff9e8: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x1ff9e8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_1ff9ec:
    // 0x1ff9ec: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x1ff9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x1ff9f0: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1ff9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1ff9f4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1ff9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1ff9f8: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x1ff9f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff9fc: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x1ff9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x1ffa00: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FFA00u;
    {
        const bool branch_taken_0x1ffa00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA00u;
        // 0x1ffa04: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa00) {
            ctx->pc = 0x1FF9ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff9ec;
        }
    }
    ctx->pc = 0x1FFA08u;
    // 0x1ffa08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFA08u;
    {
        const bool branch_taken_0x1ffa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA08u;
        // 0x1ffa0c: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa08) {
            ctx->pc = 0x1FFA1Cu;
            goto label_1ffa1c;
        }
    }
    ctx->pc = 0x1FFA10u;
label_1ffa10:
    // 0x1ffa10: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x1ffa10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1ffa14: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1ffa14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1ffa18: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1ffa18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1ffa1c:
    // 0x1ffa1c: 0x0  nop
    ctx->pc = 0x1ffa1cu;
    // NOP
    // 0x1ffa20: 0x0  nop
    ctx->pc = 0x1ffa20u;
    // NOP
    // 0x1ffa24: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FFA24u;
    {
        const bool branch_taken_0x1ffa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa24) {
            ctx->pc = 0x1FFA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFA24u;
            // 0x1ffa28: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffa10;
        }
    }
    ctx->pc = 0x1FFA2Cu;
    // 0x1ffa2c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1ffa2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa30:
    // 0x1ffa30: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ffa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ffa34: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ffa34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ffa38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ffa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ffa3c: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FFA3Cu;
    {
        const bool branch_taken_0x1ffa3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ffa3c) {
            ctx->pc = 0x1FFA68u;
            goto label_1ffa68;
        }
    }
    ctx->pc = 0x1FFA44u;
    // 0x1ffa44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ffa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ffa48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ffa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ffa4c:
    // 0x1ffa4c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1ffa4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ffa50: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ffa50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ffa54: 0x0  nop
    ctx->pc = 0x1ffa54u;
    // NOP
    // 0x1ffa58: 0x0  nop
    ctx->pc = 0x1ffa58u;
    // NOP
    // 0x1ffa5c: 0x0  nop
    ctx->pc = 0x1ffa5cu;
    // NOP
    // 0x1ffa60: 0x14c2fffa  bne         $a2, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FFA60u;
    {
        const bool branch_taken_0x1ffa60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA60u;
        // 0x1ffa64: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa60) {
            ctx->pc = 0x1FFA4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffa4c;
        }
    }
    ctx->pc = 0x1FFA68u;
label_1ffa68:
    // 0x1ffa68: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA68u;
        // 0x1ffa6c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFA70u;
}
