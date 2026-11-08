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

// Function: FUN_0016e2f0
// Address: 0x16e2f0 - 0x16e3dc
void FUN_0016e2f0_0x16e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016e2f0_0x16e2f0");
#endif

    switch (ctx->pc) {
        case 0x16e328u: goto label_16e328;
        case 0x16e350u: goto label_16e350;
        case 0x16e3c4u: goto label_16e3c4;
        default: break;
    }

    ctx->pc = 0x16e2f0u;

    // 0x16e2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16e2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16e2f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16e2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e2f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16e2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16e2fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16e300: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16e300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16e304: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16e304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e308: 0x10a60022  beq         $a1, $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x16E308u;
    {
        const bool branch_taken_0x16e308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x16E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E308u;
        // 0x16e30c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e308) {
            ctx->pc = 0x16E394u;
            goto label_16e394;
        }
    }
    ctx->pc = 0x16E310u;
    // 0x16e310: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E310u;
    {
        const bool branch_taken_0x16e310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E310u;
        // 0x16e314: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e310) {
            ctx->pc = 0x16E320u;
            goto label_16e320;
        }
    }
    ctx->pc = 0x16E318u;
    // 0x16e318: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x16E318u;
    {
        const bool branch_taken_0x16e318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E318u;
        // 0x16e31c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e318) {
            ctx->pc = 0x16E3C8u;
            goto label_16e3c8;
        }
    }
    ctx->pc = 0x16E320u;
label_16e320:
    // 0x16e320: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16E320u;
    {
        const bool branch_taken_0x16e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E320u;
        // 0x16e324: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e320) {
            ctx->pc = 0x16E378u;
            goto label_16e378;
        }
    }
    ctx->pc = 0x16E328u;
label_16e328:
    // 0x16e328: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x16e328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
    // 0x16e32c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16e330: 0x84650080  lh          $a1, 0x80($v1)
    ctx->pc = 0x16e330u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x16e334: 0x4a0000d  bltz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x16E334u;
    {
        const bool branch_taken_0x16e334 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x16e334) {
            ctx->pc = 0x16E36Cu;
            goto label_16e36c;
        }
    }
    ctx->pc = 0x16E33Cu;
    // 0x16e33c: 0x8f838608  lw          $v1, -0x79F8($gp)
    ctx->pc = 0x16e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
    // 0x16e340: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16e340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x16e344: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16e348: 0xc046744  jal         func_119D10
    ctx->pc = 0x16E348u;
    SET_GPR_U32(ctx, 31, 0x16E350u);
    ctx->pc = 0x16E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E348u;
    // 0x16e34c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x16E348u, 0x16E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E350u;
label_16e350:
    // 0x16e350: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x16e350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
    // 0x16e354: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16e354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e358: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16e358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16e35c: 0xa4600082  sh          $zero, 0x82($v1)
    ctx->pc = 0x16e35cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 0));
    // 0x16e360: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x16e360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
    // 0x16e364: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16e364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16e368: 0xa4640080  sh          $a0, 0x80($v1)
    ctx->pc = 0x16e368u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 4));
label_16e36c:
    // 0x16e36c: 0x0  nop
    ctx->pc = 0x16e36cu;
    // NOP
    // 0x16e370: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x16e370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x16e374: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16e374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16e378:
    // 0x16e378: 0x86430214  lh          $v1, 0x214($s2)
    ctx->pc = 0x16e378u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x16e37c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x16e37cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16e380: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x16E380u;
    {
        const bool branch_taken_0x16e380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E380u;
        // 0x16e384: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e380) {
            ctx->pc = 0x16E328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e328;
        }
    }
    ctx->pc = 0x16E388u;
    // 0x16e388: 0xa24301d3  sb          $v1, 0x1D3($s2)
    ctx->pc = 0x16e388u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 3));
    // 0x16e38c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16E38Cu;
    {
        const bool branch_taken_0x16e38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E38Cu;
        // 0x16e390: 0xa6400216  sh          $zero, 0x216($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 534), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e38c) {
            ctx->pc = 0x16E3C4u;
            goto label_16e3c4;
        }
    }
    ctx->pc = 0x16E394u;
label_16e394:
    // 0x16e394: 0x8e4301d8  lw          $v1, 0x1D8($s2)
    ctx->pc = 0x16e394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
    // 0x16e398: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x16e398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16e39c: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x16e39cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x16e3a0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E3A0u;
    {
        const bool branch_taken_0x16e3a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16e3a0) {
            ctx->pc = 0x16E3B0u;
            goto label_16e3b0;
        }
    }
    ctx->pc = 0x16E3A8u;
    // 0x16e3a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E3A8u;
    {
        const bool branch_taken_0x16e3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e3a8) {
            ctx->pc = 0x16E3B4u;
            goto label_16e3b4;
        }
    }
    ctx->pc = 0x16E3B0u;
label_16e3b0:
    // 0x16e3b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e3b4:
    // 0x16e3b4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E3B4u;
    {
        const bool branch_taken_0x16e3b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3B4u;
        // 0x16e3b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e3b4) {
            ctx->pc = 0x16E3C4u;
            goto label_16e3c4;
        }
    }
    ctx->pc = 0x16E3BCu;
    // 0x16e3bc: 0xc05b734  jal         func_16DCD0
    ctx->pc = 0x16E3BCu;
    SET_GPR_U32(ctx, 31, 0x16E3C4u);
    ctx->pc = 0x16DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DCD0u, 0x16E3BCu, 0x16E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E3C4u;
label_16e3c4:
    // 0x16e3c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16e3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16e3c8:
    // 0x16e3c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16e3c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e3cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16e3ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e3d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x16E3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3D4u;
        // 0x16e3d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E3DCu;
}
