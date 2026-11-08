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

// Function: FUN_001fa6a0
// Address: 0x1fa6a0 - 0x1fafec
void FUN_001fa6a0_0x1fa6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fa6a0_0x1fa6a0");
#endif

    switch (ctx->pc) {
        case 0x1fa750u: goto label_1fa750;
        case 0x1fa7c0u: goto label_1fa7c0;
        case 0x1fa7e0u: goto label_1fa7e0;
        case 0x1fa83cu: goto label_1fa83c;
        case 0x1fa870u: goto label_1fa870;
        case 0x1fa8b8u: goto label_1fa8b8;
        case 0x1fa8d0u: goto label_1fa8d0;
        case 0x1fa9a0u: goto label_1fa9a0;
        case 0x1faa44u: goto label_1faa44;
        case 0x1faa70u: goto label_1faa70;
        case 0x1faab0u: goto label_1faab0;
        case 0x1faaf8u: goto label_1faaf8;
        case 0x1fab38u: goto label_1fab38;
        case 0x1fabc8u: goto label_1fabc8;
        case 0x1fabf4u: goto label_1fabf4;
        case 0x1fac84u: goto label_1fac84;
        case 0x1faca8u: goto label_1faca8;
        case 0x1face0u: goto label_1face0;
        case 0x1fad08u: goto label_1fad08;
        case 0x1fadc0u: goto label_1fadc0;
        case 0x1fae10u: goto label_1fae10;
        case 0x1fae60u: goto label_1fae60;
        case 0x1faeb0u: goto label_1faeb0;
        case 0x1faf00u: goto label_1faf00;
        case 0x1faf58u: goto label_1faf58;
        default: break;
    }

    ctx->pc = 0x1fa6a0u;

    // 0x1fa6a0: 0x24ccfffd  addiu       $t4, $a2, -0x3
    ctx->pc = 0x1fa6a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x1fa6a4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1fa6a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fa6a8: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x1fa6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x1fa6ac: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x1fa6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1fa6b0: 0x16c502a  slt         $t2, $t3, $t4
    ctx->pc = 0x1fa6b0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1fa6b4: 0xffb601c0  sd          $s6, 0x1C0($sp)
    ctx->pc = 0x1fa6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 22));
    // 0x1fa6b8: 0x18a100b  movn        $v0, $t4, $t2
    ctx->pc = 0x1fa6b8u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x1fa6bc: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x1fa6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x1fa6c0: 0x2b0c3  sra         $s6, $v0, 3
    ctx->pc = 0x1fa6c0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1fa6c4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fa6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fa6c8: 0x24634cc0  addiu       $v1, $v1, 0x4CC0
    ctx->pc = 0x1fa6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19648));
    // 0x1fa6cc: 0x176582a  slt         $t3, $t3, $s6
    ctx->pc = 0x1fa6ccu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1fa6d0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1fa6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1fa6d4: 0xffb701d0  sd          $s7, 0x1D0($sp)
    ctx->pc = 0x1fa6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 23));
    // 0x1fa6d8: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x1fa6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x1fa6dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fa6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa6e0: 0xffb10170  sd          $s1, 0x170($sp)
    ctx->pc = 0x1fa6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 17));
    // 0x1fa6e4: 0xbb00a  movz        $s6, $zero, $t3
    ctx->pc = 0x1fa6e4u;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
    // 0x1fa6e8: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x1fa6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x1fa6ec: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x1fa6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1fa6f0: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x1fa6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x1fa6f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1fa6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fa6f8: 0xffb501b0  sd          $s5, 0x1B0($sp)
    ctx->pc = 0x1fa6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 21));
    // 0x1fa6fc: 0x24f1ffff  addiu       $s1, $a3, -0x1
    ctx->pc = 0x1fa6fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1fa700: 0xffb30190  sd          $s3, 0x190($sp)
    ctx->pc = 0x1fa700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 19));
    // 0x1fa704: 0xc39023  subu        $s2, $a2, $v1
    ctx->pc = 0x1fa704u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1fa708: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x1fa708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x1fa70c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1fa70cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa710: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x1fa710u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x1fa714: 0x2d12823  subu        $a1, $s6, $s1
    ctx->pc = 0x1fa714u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1fa718: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x1fa718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
    // 0x1fa71c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fa71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa720: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1fa720u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa724: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x1fa724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x1fa728: 0x2343821  addu        $a3, $s1, $s4
    ctx->pc = 0x1fa728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1fa72c: 0x4e00019  bltz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FA72Cu;
    {
        const bool branch_taken_0x1fa72c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1FA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA72Cu;
        // 0x1fa730: 0xafa90148  sw          $t1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa72c) {
            ctx->pc = 0x1FA794u;
            goto label_1fa794;
        }
    }
    ctx->pc = 0x1FA734u;
    // 0x1fa734: 0x2a820000  slti        $v0, $s4, 0x0
    ctx->pc = 0x1fa734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fa738: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x1fa738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fa73c: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1fa73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1fa740: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x1fa740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fa744: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x1fa744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x1fa748: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x1fa748u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1fa74c: 0x0  nop
    ctx->pc = 0x1fa74cu;
    // NOP
label_1fa750:
    // 0x1fa750: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fa750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fa754: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA754u;
    {
        const bool branch_taken_0x1fa754 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA754u;
        // 0x1fa758: 0x1221821  addu        $v1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa754) {
            ctx->pc = 0x1FA778u;
            goto label_1fa778;
        }
    }
    ctx->pc = 0x1FA75Cu;
    // 0x1fa75c: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x1fa75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1fa760: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1fa760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fa764: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fa764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fa768: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fa768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa76c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa76cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fa770: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA770u;
    {
        const bool branch_taken_0x1fa770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA770u;
        // 0x1fa774: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa770) {
            ctx->pc = 0x1FA77Cu;
            goto label_1fa77c;
        }
    }
    ctx->pc = 0x1FA778u;
label_1fa778:
    // 0x1fa778: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fa778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1fa77c:
    // 0x1fa77c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fa77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fa780: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x1fa780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fa784: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FA784u;
    {
        const bool branch_taken_0x1fa784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA784u;
        // 0x1fa788: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa784) {
            ctx->pc = 0x1FA750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa750;
        }
    }
    ctx->pc = 0x1FA78Cu;
    // 0x1fa78c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA78Cu;
    {
        const bool branch_taken_0x1fa78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA78Cu;
        // 0x1fa790: 0x8fa80154  lw          $t0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa78c) {
            ctx->pc = 0x1FA7B0u;
            goto label_1fa7b0;
        }
    }
    ctx->pc = 0x1FA794u;
label_1fa794:
    // 0x1fa794: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x1fa794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1fa798: 0x2a850000  slti        $a1, $s4, 0x0
    ctx->pc = 0x1fa798u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fa79c: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x1fa79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
    // 0x1fa7a0: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x1fa7a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1fa7a4: 0x28c60003  slti        $a2, $a2, 0x3
    ctx->pc = 0x1fa7a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fa7a8: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x1fa7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x1fa7ac: 0x8fa80154  lw          $t0, 0x154($sp)
    ctx->pc = 0x1fa7acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_1fa7b0:
    // 0x1fa7b0: 0x15000021  bnez        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FA7B0u;
    {
        const bool branch_taken_0x1fa7b0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7B0u;
        // 0x1fa7b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7b0) {
            ctx->pc = 0x1FA838u;
            goto label_1fa838;
        }
    }
    ctx->pc = 0x1FA7B8u;
    // 0x1fa7b8: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x1fa7b8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fa7bc: 0x0  nop
    ctx->pc = 0x1fa7bcu;
    // NOP
label_1fa7c0:
    // 0x1fa7c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fa7c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa7c4: 0x15600015  bnez        $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FA7C4u;
    {
        const bool branch_taken_0x1fa7c4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7C4u;
        // 0x1fa7c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7c4) {
            ctx->pc = 0x1FA81Cu;
            goto label_1fa81c;
        }
    }
    ctx->pc = 0x1FA7CCu;
    // 0x1fa7cc: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x1fa7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1fa7d0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1fa7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fa7d4: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x1fa7d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fa7d8: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x1fa7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fa7dc: 0x0  nop
    ctx->pc = 0x1fa7dcu;
    // NOP
label_1fa7e0:
    // 0x1fa7e0: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x1fa7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fa7e4: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x1fa7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1fa7e8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1fa7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fa7ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa7f0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1fa7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1fa7f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1fa7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fa7f8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1fa7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa7fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fa7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fa800: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1fa800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa804: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x1fa804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fa808: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fa808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fa80c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FA80Cu;
    {
        const bool branch_taken_0x1fa80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA80Cu;
        // 0x1fa810: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa80c) {
            ctx->pc = 0x1FA7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa7e0;
        }
    }
    ctx->pc = 0x1FA814u;
    // 0x1fa814: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA814u;
    {
        const bool branch_taken_0x1fa814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA814u;
        // 0x1fa818: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa814) {
            ctx->pc = 0x1FA828u;
            goto label_1fa828;
        }
    }
    ctx->pc = 0x1FA81Cu;
label_1fa81c:
    // 0x1fa81c: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x1fa81cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fa820: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1fa820u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fa824: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x1fa824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_1fa828:
    // 0x1fa828: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1fa828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa82c: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x1fa82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fa830: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1FA830u;
    {
        const bool branch_taken_0x1fa830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA830u;
        // 0x1fa834: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa830) {
            ctx->pc = 0x1FA7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa7c0;
        }
    }
    ctx->pc = 0x1FA838u;
label_1fa838:
    // 0x1fa838: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1fa838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fa83c:
    // 0x1fa83c: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x1fa83cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fa840: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fa840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa844: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x1fa844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x1fa848: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FA848u;
    {
        const bool branch_taken_0x1fa848 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1FA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA848u;
        // 0x1fa84c: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa848) {
            ctx->pc = 0x1FA8ACu;
            goto label_1fa8ac;
        }
    }
    ctx->pc = 0x1FA850u;
    // 0x1fa850: 0x27c2fffc  addiu       $v0, $fp, -0x4
    ctx->pc = 0x1fa850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x1fa854: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1fa854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1fa858: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1fa858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fa85c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1fa85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1fa860: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fa860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fa864: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x1fa864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1fa868: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1fa868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa86c: 0x0  nop
    ctx->pc = 0x1fa86cu;
    // NOP
label_1fa870:
    // 0x1fa870: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x1fa870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x1fa874: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1fa874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa878: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fa878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fa87c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1fa87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1fa880: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1fa884: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1fa884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fa888: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1fa888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa88c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1fa88cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1fa890: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x1fa890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1fa894: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1fa894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1fa898: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x1fa898u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1fa89c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa89cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1fa8a0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1fa8a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1fa8a4: 0x1ca0fff2  bgtz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FA8A4u;
    {
        const bool branch_taken_0x1fa8a4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1FA8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8A4u;
        // 0x1fa8a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8a4) {
            ctx->pc = 0x1FA870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa870;
        }
    }
    ctx->pc = 0x1FA8ACu;
label_1fa8ac:
    // 0x1fa8ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fa8acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1fa8b0: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x1FA8B0u;
    SET_GPR_U32(ctx, 31, 0x1FA8B8u);
    ctx->pc = 0x1FA8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA8B0u;
    // 0x1fa8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1FA8B0u, 0x1FA8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8B8u;
label_1fa8b8:
    // 0x1fa8b8: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1fa8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x1fa8bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fa8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fa8c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1fa8c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1fa8c4: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x1fa8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x1fa8c8: 0xc07ee06  jal         func_1FB818
    ctx->pc = 0x1FA8C8u;
    SET_GPR_U32(ctx, 31, 0x1FA8D0u);
    ctx->pc = 0x1FA8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA8C8u;
    // 0x1fa8cc: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB818u, 0x1FA8C8u, 0x1FA8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8D0u;
label_1fa8d0:
    // 0x1fa8d0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1fa8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1fa8d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa8d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fa8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fa8dc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1fa8dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1fa8e0: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa8e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fa8e4: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x1fa8e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x1fa8e8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1fa8e8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa8ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa8ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fa8f0: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FA8F0u;
    {
        const bool branch_taken_0x1fa8f0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1FA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8F0u;
        // 0x1fa8f4: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8f0) {
            ctx->pc = 0x1FA938u;
            goto label_1fa938;
        }
    }
    ctx->pc = 0x1FA8F8u;
    // 0x1fa8f8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fa8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fa8fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1fa8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fa900: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa904: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1fa904u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1fa908: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x1fa908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fa90c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1fa90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fa910: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fa910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fa914: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x1fa914u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1fa918: 0x623007  srav        $a2, $v0, $v1
    ctx->pc = 0x1fa918u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1fa91c: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x1fa91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x1fa920: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x1fa920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x1fa924: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fa924u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa928: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x1fa928u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1fa92c: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x1fa92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
    // 0x1fa930: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FA930u;
    {
        const bool branch_taken_0x1fa930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA930u;
        // 0x1fa934: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa930) {
            ctx->pc = 0x1FA974u;
            goto label_1fa974;
        }
    }
    ctx->pc = 0x1FA938u;
label_1fa938:
    // 0x1fa938: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA938u;
    {
        const bool branch_taken_0x1fa938 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA938u;
        // 0x1fa93c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa938) {
            ctx->pc = 0x1FA958u;
            goto label_1fa958;
        }
    }
    ctx->pc = 0x1FA940u;
    // 0x1fa940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa944: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1fa944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fa948: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fa948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa94c: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x1fa94cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x1fa950: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA950u;
    {
        const bool branch_taken_0x1fa950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA950u;
        // 0x1fa954: 0xafa4014c  sw          $a0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa950) {
            ctx->pc = 0x1FA974u;
            goto label_1fa974;
        }
    }
    ctx->pc = 0x1FA958u;
label_1fa958:
    // 0x1fa958: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fa958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fa95c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa960: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1fa960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa964: 0x0  nop
    ctx->pc = 0x1fa964u;
    // NOP
    // 0x1fa968: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA968u;
    {
        const bool branch_taken_0x1fa968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA968u;
        // 0x1fa96c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa968) {
            ctx->pc = 0x1FA974u;
            goto label_1fa974;
        }
    }
    ctx->pc = 0x1FA970u;
    // 0x1fa970: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1fa970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_1fa974:
    // 0x1fa974: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1fa974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1fa978: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1FA978u;
    {
        const bool branch_taken_0x1fa978 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1fa978) {
            ctx->pc = 0x1FAA48u;
            goto label_1faa48;
        }
    }
    ctx->pc = 0x1FA980u;
    // 0x1fa980: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fa980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1fa984: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FA984u;
    {
        const bool branch_taken_0x1fa984 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1FA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA984u;
        // 0x1fa988: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa984) {
            ctx->pc = 0x1FA9CCu;
            goto label_1fa9cc;
        }
    }
    ctx->pc = 0x1FA98Cu;
    // 0x1fa98c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1fa98cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1fa990: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1fa990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa994: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1fa994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa998: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fa998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa99c: 0x0  nop
    ctx->pc = 0x1fa99cu;
    // NOP
label_1fa9a0:
    // 0x1fa9a0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA9A0u;
    {
        const bool branch_taken_0x1fa9a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9A0u;
        // 0x1fa9a4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9a0) {
            ctx->pc = 0x1FA9B8u;
            goto label_1fa9b8;
        }
    }
    ctx->pc = 0x1FA9A8u;
    // 0x1fa9a8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA9A8u;
    {
        const bool branch_taken_0x1fa9a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9A8u;
        // 0x1fa9ac: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9a8) {
            ctx->pc = 0x1FA9C0u;
            goto label_1fa9c0;
        }
    }
    ctx->pc = 0x1FA9B0u;
    // 0x1fa9b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA9B0u;
    {
        const bool branch_taken_0x1fa9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9B0u;
        // 0x1fa9b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9b0) {
            ctx->pc = 0x1FA9BCu;
            goto label_1fa9bc;
        }
    }
    ctx->pc = 0x1FA9B8u;
label_1fa9b8:
    // 0x1fa9b8: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x1fa9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1fa9bc:
    // 0x1fa9bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fa9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1fa9c0:
    // 0x1fa9c0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fa9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fa9c4: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FA9C4u;
    {
        const bool branch_taken_0x1fa9c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9C4u;
        // 0x1fa9c8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9c4) {
            ctx->pc = 0x1FA9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa9a0;
        }
    }
    ctx->pc = 0x1FA9CCu;
label_1fa9cc:
    // 0x1fa9cc: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FA9CCu;
    {
        const bool branch_taken_0x1fa9cc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1FA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9CCu;
        // 0x1fa9d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9cc) {
            ctx->pc = 0x1FAA1Cu;
            goto label_1faa1c;
        }
    }
    ctx->pc = 0x1FA9D4u;
    // 0x1fa9d4: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA9D4u;
    {
        const bool branch_taken_0x1fa9d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9D4u;
        // 0x1fa9d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9d4) {
            ctx->pc = 0x1FA9ECu;
            goto label_1fa9ec;
        }
    }
    ctx->pc = 0x1FA9DCu;
    // 0x1fa9dc: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA9DCu;
    {
        const bool branch_taken_0x1fa9dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9DCu;
        // 0x1fa9e0: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9dc) {
            ctx->pc = 0x1FAA04u;
            goto label_1faa04;
        }
    }
    ctx->pc = 0x1FA9E4u;
    // 0x1fa9e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FA9E4u;
    {
        const bool branch_taken_0x1fa9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa9e4) {
            ctx->pc = 0x1FAA24u;
            goto label_1faa24;
        }
    }
    ctx->pc = 0x1FA9ECu;
label_1fa9ec:
    // 0x1fa9ec: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fa9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fa9f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa9f4: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1fa9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fa9f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fa9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa9fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA9FCu;
    {
        const bool branch_taken_0x1fa9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9FCu;
        // 0x1faa00: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9fc) {
            ctx->pc = 0x1FAA18u;
            goto label_1faa18;
        }
    }
    ctx->pc = 0x1FAA04u;
label_1faa04:
    // 0x1faa04: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1faa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1faa08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1faa08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1faa0c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1faa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1faa10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1faa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1faa14: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1faa14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_1faa18:
    // 0x1faa18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1faa18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1faa1c:
    // 0x1faa1c: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x1faa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1faa20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1faa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1faa24:
    // 0x1faa24: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAA24u;
    {
        const bool branch_taken_0x1faa24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1faa24) {
            ctx->pc = 0x1FAA48u;
            goto label_1faa48;
        }
    }
    ctx->pc = 0x1FAA2Cu;
    // 0x1faa2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1faa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1faa30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1faa30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1faa34: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAA34u;
    {
        const bool branch_taken_0x1faa34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA34u;
        // 0x1faa38: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa34) {
            ctx->pc = 0x1FAA48u;
            goto label_1faa48;
        }
    }
    ctx->pc = 0x1FAA3Cu;
    // 0x1faa3c: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x1FAA3Cu;
    SET_GPR_U32(ctx, 31, 0x1FAA44u);
    ctx->pc = 0x1FAA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAA3Cu;
    // 0x1faa40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1FAA3Cu, 0x1FAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAA44u;
label_1faa44:
    // 0x1faa44: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1faa44u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1faa48:
    // 0x1faa48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1faa48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faa4c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1faa4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1faa50: 0x0  nop
    ctx->pc = 0x1faa50u;
    // NOP
    // 0x1faa54: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x1FAA54u;
    {
        const bool branch_taken_0x1faa54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA54u;
        // 0x1faa58: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa54) {
            ctx->pc = 0x1FABA4u;
            goto label_1faba4;
        }
    }
    ctx->pc = 0x1FAA5Cu;
    // 0x1faa5c: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x1faa5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1faa60: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FAA60u;
    {
        const bool branch_taken_0x1faa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA60u;
        // 0x1faa64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa60) {
            ctx->pc = 0x1FAA8Cu;
            goto label_1faa8c;
        }
    }
    ctx->pc = 0x1FAA68u;
    // 0x1faa68: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1faa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1faa6c: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1faa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1faa70:
    // 0x1faa70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1faa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1faa74: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1faa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1faa78: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1faa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1faa7c: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x1faa7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1faa80: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1faa80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1faa84: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FAA84u;
    {
        const bool branch_taken_0x1faa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faa84) {
            ctx->pc = 0x1FAA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faa70;
        }
    }
    ctx->pc = 0x1FAA8Cu;
label_1faa8c:
    // 0x1faa8c: 0x14a00042  bnez        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1FAA8Cu;
    {
        const bool branch_taken_0x1faa8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA8Cu;
        // 0x1faa90: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa8c) {
            ctx->pc = 0x1FAB98u;
            goto label_1fab98;
        }
    }
    ctx->pc = 0x1FAA94u;
    // 0x1faa94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1faa94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1faa98: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1faa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1faa9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1faa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1faaa0: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FAAA0u;
    {
        const bool branch_taken_0x1faaa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAA0u;
        // 0x1faaa4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faaa0) {
            ctx->pc = 0x1FAAD4u;
            goto label_1faad4;
        }
    }
    ctx->pc = 0x1FAAA8u;
    // 0x1faaa8: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1faaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1faaac: 0x0  nop
    ctx->pc = 0x1faaacu;
    // NOP
label_1faab0:
    // 0x1faab0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1faab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1faab4: 0x2881023  subu        $v0, $s4, $t0
    ctx->pc = 0x1faab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x1faab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1faab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1faabc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1faabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1faac0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1faac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1faac4: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FAAC4u;
    {
        const bool branch_taken_0x1faac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faac4) {
            ctx->pc = 0x1FAAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faab0;
        }
    }
    ctx->pc = 0x1FAACCu;
    // 0x1faacc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAACCu;
    {
        const bool branch_taken_0x1faacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAACCu;
        // 0x1faad0: 0x2082021  addu        $a0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faacc) {
            ctx->pc = 0x1FAADCu;
            goto label_1faadc;
        }
    }
    ctx->pc = 0x1FAAD4u;
label_1faad4:
    // 0x1faad4: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1faad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1faad8: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x1faad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_1faadc:
    // 0x1faadc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1faadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faae0: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1faae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1faae4: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x1FAAE4u;
    {
        const bool branch_taken_0x1faae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAE4u;
        // 0x1faae8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faae4) {
            ctx->pc = 0x1FA83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa83c;
        }
    }
    ctx->pc = 0x1FAAECu;
    // 0x1faaec: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x1faaecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1faaf0: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x1faaf0u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1faaf4: 0x0  nop
    ctx->pc = 0x1faaf4u;
    // NOP
label_1faaf8:
    // 0x1faaf8: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x1faaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1faafc: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x1faafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x1fab00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fab00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fab04: 0x2265021  addu        $t2, $s1, $a2
    ctx->pc = 0x1fab04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1fab08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fab0c: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x1fab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1fab10: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fab14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fab14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fab18: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1fab18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1fab1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fab1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab20: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fab20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fab24: 0x15600013  bnez        $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FAB24u;
    {
        const bool branch_taken_0x1fab24 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB24u;
        // 0x1fab28: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab24) {
            ctx->pc = 0x1FAB74u;
            goto label_1fab74;
        }
    }
    ctx->pc = 0x1FAB2Cu;
    // 0x1fab2c: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x1fab2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fab30: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1fab30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fab34: 0x0  nop
    ctx->pc = 0x1fab34u;
    // NOP
label_1fab38:
    // 0x1fab38: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x1fab38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1fab3c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x1fab3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1fab40: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1fab40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fab44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fab44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fab48: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1fab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1fab4c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1fab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1fab50: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1fab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fab54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fab54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fab58: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1fab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fab5c: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x1fab5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fab60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fab60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fab64: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FAB64u;
    {
        const bool branch_taken_0x1fab64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB64u;
        // 0x1fab68: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab64) {
            ctx->pc = 0x1FAB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fab38;
        }
    }
    ctx->pc = 0x1FAB6Cu;
    // 0x1fab6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAB6Cu;
    {
        const bool branch_taken_0x1fab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB6Cu;
        // 0x1fab70: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab6c) {
            ctx->pc = 0x1FAB80u;
            goto label_1fab80;
        }
    }
    ctx->pc = 0x1FAB74u;
label_1fab74:
    // 0x1fab74: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x1fab74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fab78: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x1fab78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fab7c: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x1fab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_1fab80:
    // 0x1fab80: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1fab80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fab84: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1fab84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fab88: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1FAB88u;
    {
        const bool branch_taken_0x1fab88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB88u;
        // 0x1fab8c: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab88) {
            ctx->pc = 0x1FAAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faaf8;
        }
    }
    ctx->pc = 0x1FAB90u;
    // 0x1fab90: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
    ctx->pc = 0x1FAB90u;
    {
        const bool branch_taken_0x1fab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB90u;
        // 0x1fab94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab90) {
            ctx->pc = 0x1FA83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa83c;
        }
    }
    ctx->pc = 0x1FAB98u;
label_1fab98:
    // 0x1fab98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fab98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fab9c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1fab9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1faba0: 0x0  nop
    ctx->pc = 0x1faba0u;
    // NOP
label_1faba4:
    // 0x1faba4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1FABA4u;
    {
        const bool branch_taken_0x1faba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABA4u;
        // 0x1faba8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faba4) {
            ctx->pc = 0x1FABECu;
            goto label_1fabec;
        }
    }
    ctx->pc = 0x1FABACu;
    // 0x1fabac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fabacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fabb0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1fabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fabb4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1fabb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fabb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fabb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fabbc: 0x1480002c  bnez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1FABBCu;
    {
        const bool branch_taken_0x1fabbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABBCu;
        // 0x1fabc0: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fabbc) {
            ctx->pc = 0x1FAC70u;
            goto label_1fac70;
        }
    }
    ctx->pc = 0x1FABC4u;
    // 0x1fabc4: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x1fabc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_1fabc8:
    // 0x1fabc8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fabc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fabcc: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x1fabccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x1fabd0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1fabd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fabd4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1fabd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fabd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fabd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fabdc: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FABDCu;
    {
        const bool branch_taken_0x1fabdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fabdc) {
            ctx->pc = 0x1FABC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fabc8;
        }
    }
    ctx->pc = 0x1FABE4u;
    // 0x1fabe4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1FABE4u;
    {
        const bool branch_taken_0x1fabe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fabe4) {
            ctx->pc = 0x1FAC74u;
            goto label_1fac74;
        }
    }
    ctx->pc = 0x1FABECu;
label_1fabec:
    // 0x1fabec: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x1FABECu;
    SET_GPR_U32(ctx, 31, 0x1FABF4u);
    ctx->pc = 0x1FABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FABECu;
    // 0x1fabf0: 0x122023  negu        $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1FABECu, 0x1FABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FABF4u;
label_1fabf4:
    // 0x1fabf4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1fabf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1fabf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fabf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fabfc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1fabfcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1fac00: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x1fac00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fac04: 0x0  nop
    ctx->pc = 0x1fac04u;
    // NOP
    // 0x1fac08: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1FAC08u;
    {
        const bool branch_taken_0x1fac08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC08u;
        // 0x1fac0c: 0x3be2021  addu        $a0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac08) {
            ctx->pc = 0x1FAC5Cu;
            goto label_1fac5c;
        }
    }
    ctx->pc = 0x1FAC10u;
    // 0x1fac10: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1fac10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1fac14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fac14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fac18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fac18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fac1c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1fac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fac20: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fac20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1fac24: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1fac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fac28: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x1fac28u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1fac2c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fac2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1fac30: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1fac30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fac34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1fac34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fac38: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1fac38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1fac3c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x1fac3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1fac40: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1fac40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1fac44: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fac44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1fac48: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1fac48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1fac4c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fac4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fac50: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1fac50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1fac54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAC54u;
    {
        const bool branch_taken_0x1fac54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC54u;
        // 0x1fac58: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac54) {
            ctx->pc = 0x1FAC74u;
            goto label_1fac74;
        }
    }
    ctx->pc = 0x1FAC5Cu;
label_1fac5c:
    // 0x1fac5c: 0x3be1021  addu        $v0, $sp, $fp
    ctx->pc = 0x1fac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
    // 0x1fac60: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fac60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fac64: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1fac64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1fac68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAC68u;
    {
        const bool branch_taken_0x1fac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC68u;
        // 0x1fac6c: 0x32710007  andi        $s1, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac68) {
            ctx->pc = 0x1FAC74u;
            goto label_1fac74;
        }
    }
    ctx->pc = 0x1FAC70u;
label_1fac70:
    // 0x1fac70: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x1fac70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_1fac74:
    // 0x1fac74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fac74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fac78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1fac78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fac7c: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x1FAC7Cu;
    SET_GPR_U32(ctx, 31, 0x1FAC84u);
    ctx->pc = 0x1FAC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAC7Cu;
    // 0x1fac80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1FAC7Cu, 0x1FAC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC84u;
label_1fac84:
    // 0x1fac84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fac84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac88: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FAC88u;
    {
        const bool branch_taken_0x1fac88 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1FAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC88u;
        // 0x1fac8c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac88) {
            ctx->pc = 0x1FACD0u;
            goto label_1facd0;
        }
    }
    ctx->pc = 0x1FAC90u;
    // 0x1fac90: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fac90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fac94: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1fac94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1fac98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fac98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fac9c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1fac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1faca0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1faca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1faca4: 0x0  nop
    ctx->pc = 0x1faca4u;
    // NOP
label_1faca8:
    // 0x1faca8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1faca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1facac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1facacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1facb0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1facb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1facb4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1facb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1facb8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1facb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1facbc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1facbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1facc0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1facc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1facc4: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FACC4u;
    {
        const bool branch_taken_0x1facc4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACC4u;
        // 0x1facc8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facc4) {
            ctx->pc = 0x1FACA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faca8;
        }
    }
    ctx->pc = 0x1FACCCu;
    // 0x1faccc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1facccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1facd0:
    // 0x1facd0: 0x4c20027  bltzl       $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FACD0u;
    {
        const bool branch_taken_0x1facd0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1facd0) {
            ctx->pc = 0x1FACD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FACD0u;
            // 0x1facd4: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAD70u;
            goto label_1fad70;
        }
    }
    ctx->pc = 0x1FACD8u;
    // 0x1facd8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1facd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1facdc: 0x0  nop
    ctx->pc = 0x1facdcu;
    // NOP
label_1face0:
    // 0x1face0: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1face0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1face4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1face4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1face8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FACE8u;
    {
        const bool branch_taken_0x1face8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACE8u;
        // 0x1facec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1face8) {
            ctx->pc = 0x1FAD50u;
            goto label_1fad50;
        }
    }
    ctx->pc = 0x1FACF0u;
    // 0x1facf0: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x1facf0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1facf4: 0x5200017  bltz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FACF4u;
    {
        const bool branch_taken_0x1facf4 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x1FACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACF4u;
        // 0x1facf8: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facf4) {
            ctx->pc = 0x1FAD54u;
            goto label_1fad54;
        }
    }
    ctx->pc = 0x1FACFCu;
    // 0x1facfc: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x1facfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fad00: 0x3c0b0022  lui         $t3, 0x22
    ctx->pc = 0x1fad00u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)34 << 16));
    // 0x1fad04: 0x0  nop
    ctx->pc = 0x1fad04u;
    // NOP
label_1fad08:
    // 0x1fad08: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x1fad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1fad0c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1fad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1fad10: 0x25624cd0  addiu       $v0, $t3, 0x4CD0
    ctx->pc = 0x1fad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 19664));
    // 0x1fad14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fad14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fad18: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fad1c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1fad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1fad20: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1fad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fad24: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fad24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fad28: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1fad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fad2c: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x1fad2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1fad30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fad30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fad34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAD34u;
    {
        const bool branch_taken_0x1fad34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD34u;
        // 0x1fad38: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad34) {
            ctx->pc = 0x1FAD58u;
            goto label_1fad58;
        }
    }
    ctx->pc = 0x1FAD3Cu;
    // 0x1fad3c: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x1fad3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1fad40: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FAD40u;
    {
        const bool branch_taken_0x1fad40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD40u;
        // 0x1fad44: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad40) {
            ctx->pc = 0x1FAD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fad08;
        }
    }
    ctx->pc = 0x1FAD48u;
    // 0x1fad48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FAD48u;
    {
        const bool branch_taken_0x1fad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD48u;
        // 0x1fad4c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad48) {
            ctx->pc = 0x1FAD60u;
            goto label_1fad60;
        }
    }
    ctx->pc = 0x1FAD50u;
label_1fad50:
    // 0x1fad50: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x1fad50u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1fad54:
    // 0x1fad54: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x1fad54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1fad58:
    // 0x1fad58: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1fad58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1fad5c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1fad5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fad60:
    // 0x1fad60: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1fad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1fad64: 0x4c1ffde  bgez        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1FAD64u;
    {
        const bool branch_taken_0x1fad64 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FAD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD64u;
        // 0x1fad68: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad64) {
            ctx->pc = 0x1FACE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1face0;
        }
    }
    ctx->pc = 0x1FAD6Cu;
    // 0x1fad6c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1fad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1fad70:
    // 0x1fad70: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAD70u;
    {
        const bool branch_taken_0x1fad70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD70u;
        // 0x1fad74: 0x8fa40144  lw          $a0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad70) {
            ctx->pc = 0x1FAD90u;
            goto label_1fad90;
        }
    }
    ctx->pc = 0x1FAD78u;
    // 0x1fad78: 0x5c80001f  bgtzl       $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FAD78u;
    {
        const bool branch_taken_0x1fad78 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1fad78) {
            ctx->pc = 0x1FAD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAD78u;
            // 0x1fad7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FADF8u;
            goto label_1fadf8;
        }
    }
    ctx->pc = 0x1FAD80u;
    // 0x1fad80: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FAD80u;
    {
        const bool branch_taken_0x1fad80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD80u;
        // 0x1fad84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad80) {
            ctx->pc = 0x1FADA8u;
            goto label_1fada8;
        }
    }
    ctx->pc = 0x1FAD88u;
    // 0x1fad88: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1FAD88u;
    {
        const bool branch_taken_0x1fad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD88u;
        // 0x1fad8c: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad88) {
            ctx->pc = 0x1FAFBCu;
            goto label_1fafbc;
        }
    }
    ctx->pc = 0x1FAD90u;
label_1fad90:
    // 0x1fad90: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x1fad90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1fad94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fad98: 0x10a20040  beq         $a1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1FAD98u;
    {
        const bool branch_taken_0x1fad98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD98u;
        // 0x1fad9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad98) {
            ctx->pc = 0x1FAE9Cu;
            goto label_1fae9c;
        }
    }
    ctx->pc = 0x1FADA0u;
    // 0x1fada0: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1FADA0u;
    {
        const bool branch_taken_0x1fada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADA0u;
        // 0x1fada4: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fada0) {
            ctx->pc = 0x1FAFBCu;
            goto label_1fafbc;
        }
    }
    ctx->pc = 0x1FADA8u;
label_1fada8:
    // 0x1fada8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fada8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fadac: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fadacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fadb0: 0x4c2000b  bltzl       $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1FADB0u;
    {
        const bool branch_taken_0x1fadb0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1fadb0) {
            ctx->pc = 0x1FADB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FADB0u;
            // 0x1fadb4: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FADE0u;
            goto label_1fade0;
        }
    }
    ctx->pc = 0x1FADB8u;
    // 0x1fadb8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1fadb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fadbc: 0x0  nop
    ctx->pc = 0x1fadbcu;
    // NOP
label_1fadc0:
    // 0x1fadc0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fadc4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1fadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1fadc8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fadc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fadcc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fadccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fadd0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1fadd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fadd4: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FADD4u;
    {
        const bool branch_taken_0x1fadd4 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1fadd4) {
            ctx->pc = 0x1FADC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fadc0;
        }
    }
    ctx->pc = 0x1FADDCu;
    // 0x1faddc: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x1faddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_1fade0:
    // 0x1fade0: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x1fade0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1fade4: 0x10c00074  beqz        $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x1FADE4u;
    {
        const bool branch_taken_0x1fade4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADE4u;
        // 0x1fade8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fade4) {
            ctx->pc = 0x1FAFB8u;
            goto label_1fafb8;
        }
    }
    ctx->pc = 0x1FADECu;
    // 0x1fadec: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1fadecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1fadf0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1FADF0u;
    {
        const bool branch_taken_0x1fadf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADF0u;
        // 0x1fadf4: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fadf0) {
            ctx->pc = 0x1FAFB8u;
            goto label_1fafb8;
        }
    }
    ctx->pc = 0x1FADF8u;
label_1fadf8:
    // 0x1fadf8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fadf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fadfc: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1FADFCu;
    {
        const bool branch_taken_0x1fadfc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1FAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADFCu;
        // 0x1fae00: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fadfc) {
            ctx->pc = 0x1FAE34u;
            goto label_1fae34;
        }
    }
    ctx->pc = 0x1FAE04u;
    // 0x1fae04: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1fae04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fae08: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x1fae08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fae0c: 0x0  nop
    ctx->pc = 0x1fae0cu;
    // NOP
label_1fae10:
    // 0x1fae10: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fae10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fae14: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1fae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1fae18: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fae18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fae1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fae20: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1fae20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fae24: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FAE24u;
    {
        const bool branch_taken_0x1fae24 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1fae24) {
            ctx->pc = 0x1FAE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fae10;
        }
    }
    ctx->pc = 0x1FAE2Cu;
    // 0x1fae2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAE2Cu;
    {
        const bool branch_taken_0x1fae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE2Cu;
        // 0x1fae30: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae2c) {
            ctx->pc = 0x1FAE3Cu;
            goto label_1fae3c;
        }
    }
    ctx->pc = 0x1FAE34u;
label_1fae34:
    // 0x1fae34: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x1fae34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fae38: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x1fae38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_1fae3c:
    // 0x1fae3c: 0x8fa8014c  lw          $t0, 0x14C($sp)
    ctx->pc = 0x1fae3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1fae40: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAE40u;
    {
        const bool branch_taken_0x1fae40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae40) {
            ctx->pc = 0x1FAE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAE40u;
            // 0x1fae44: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAE54u;
            goto label_1fae54;
        }
    }
    ctx->pc = 0x1FAE48u;
    // 0x1fae48: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1fae48u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1fae4c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x1fae4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x1fae50: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1fae50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1fae54:
    // 0x1fae54: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FAE54u;
    {
        const bool branch_taken_0x1fae54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE54u;
        // 0x1fae58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae54) {
            ctx->pc = 0x1FAE80u;
            goto label_1fae80;
        }
    }
    ctx->pc = 0x1FAE5Cu;
    // 0x1fae5c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1fae5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1fae60:
    // 0x1fae60: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fae60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fae64: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1fae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1fae68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fae68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fae6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fae70: 0x206182a  slt         $v1, $s0, $a2
    ctx->pc = 0x1fae70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fae74: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1fae74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fae78: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FAE78u;
    {
        const bool branch_taken_0x1fae78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae78) {
            ctx->pc = 0x1FAE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fae60;
        }
    }
    ctx->pc = 0x1FAE80u;
label_1fae80:
    // 0x1fae80: 0xe6e20004  swc1        $f2, 0x4($s7)
    ctx->pc = 0x1fae80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x1fae84: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x1fae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1fae88: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1FAE88u;
    {
        const bool branch_taken_0x1fae88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE88u;
        // 0x1fae8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae88) {
            ctx->pc = 0x1FAFB8u;
            goto label_1fafb8;
        }
    }
    ctx->pc = 0x1FAE90u;
    // 0x1fae90: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1fae90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1fae94: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1FAE94u;
    {
        const bool branch_taken_0x1fae94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE94u;
        // 0x1fae98: 0xe6e00004  swc1        $f0, 0x4($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae94) {
            ctx->pc = 0x1FAFB8u;
            goto label_1fafb8;
        }
    }
    ctx->pc = 0x1FAE9Cu;
label_1fae9c:
    // 0x1fae9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fae9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faea0: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FAEA0u;
    {
        const bool branch_taken_0x1faea0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1FAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEA0u;
        // 0x1faea4: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faea0) {
            ctx->pc = 0x1FAEF0u;
            goto label_1faef0;
        }
    }
    ctx->pc = 0x1FAEA8u;
    // 0x1faea8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1faea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1faeac: 0x0  nop
    ctx->pc = 0x1faeacu;
    // NOP
label_1faeb0:
    // 0x1faeb0: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x1faeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1faeb4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1faeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1faeb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1faeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1faebc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1faebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1faec0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1faec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1faec4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1faec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1faec8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1faec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1faecc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1faeccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faed0: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1faed0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1faed4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1faed4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1faed8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1faed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1faedc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1faedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1faee0: 0x1cc0fff3  bgtz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x1FAEE0u;
    {
        const bool branch_taken_0x1faee0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1FAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEE0u;
        // 0x1faee4: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faee0) {
            ctx->pc = 0x1FAEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faeb0;
        }
    }
    ctx->pc = 0x1FAEE8u;
    // 0x1faee8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1faee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faeec: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1faeecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1faef0:
    // 0x1faef0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FAEF0u;
    {
        const bool branch_taken_0x1faef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faef0) {
            ctx->pc = 0x1FAEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAEF0u;
            // 0x1faef4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAF40u;
            goto label_1faf40;
        }
    }
    ctx->pc = 0x1FAEF8u;
    // 0x1faef8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1faef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1faefc: 0x0  nop
    ctx->pc = 0x1faefcu;
    // NOP
label_1faf00:
    // 0x1faf00: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x1faf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1faf04: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1faf04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1faf08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1faf08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1faf0c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1faf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1faf10: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1faf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1faf14: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1faf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1faf18: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1faf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1faf1c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1faf1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf20: 0x28c50002  slti        $a1, $a2, 0x2
    ctx->pc = 0x1faf20u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1faf24: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1faf24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1faf28: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1faf28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1faf2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1faf2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1faf30: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1faf30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1faf34: 0x10a0fff2  beqz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FAF34u;
    {
        const bool branch_taken_0x1faf34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF34u;
        // 0x1faf38: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf34) {
            ctx->pc = 0x1FAF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faf00;
        }
    }
    ctx->pc = 0x1FAF3Cu;
    // 0x1faf3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1faf3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1faf40:
    // 0x1faf40: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1faf40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1faf44: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1faf44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1faf48: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FAF48u;
    {
        const bool branch_taken_0x1faf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF48u;
        // 0x1faf4c: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf48) {
            ctx->pc = 0x1FAF80u;
            goto label_1faf80;
        }
    }
    ctx->pc = 0x1FAF50u;
    // 0x1faf50: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1faf50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1faf54: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1faf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1faf58:
    // 0x1faf58: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1faf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1faf5c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1faf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1faf60: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1faf60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1faf64: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1faf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1faf68: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x1faf68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1faf6c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1faf6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1faf70: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FAF70u;
    {
        const bool branch_taken_0x1faf70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faf70) {
            ctx->pc = 0x1FAF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faf58;
        }
    }
    ctx->pc = 0x1FAF78u;
    // 0x1faf78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAF78u;
    {
        const bool branch_taken_0x1faf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF78u;
        // 0x1faf7c: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf78) {
            ctx->pc = 0x1FAF88u;
            goto label_1faf88;
        }
    }
    ctx->pc = 0x1FAF80u;
label_1faf80:
    // 0x1faf80: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1faf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1faf84: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1faf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_1faf88:
    // 0x1faf88: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FAF88u;
    {
        const bool branch_taken_0x1faf88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faf88) {
            ctx->pc = 0x1FAF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAF88u;
            // 0x1faf8c: 0x46001807  neg.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAFA0u;
            goto label_1fafa0;
        }
    }
    ctx->pc = 0x1FAF90u;
    // 0x1faf90: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1faf90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x1faf94: 0xe6e30000  swc1        $f3, 0x0($s7)
    ctx->pc = 0x1faf94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x1faf98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAF98u;
    {
        const bool branch_taken_0x1faf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF98u;
        // 0x1faf9c: 0xe6e10004  swc1        $f1, 0x4($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf98) {
            ctx->pc = 0x1FAFB4u;
            goto label_1fafb4;
        }
    }
    ctx->pc = 0x1FAFA0u;
label_1fafa0:
    // 0x1fafa0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1fafa0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1fafa4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1fafa4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1fafa8: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x1fafa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x1fafac: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x1fafacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x1fafb0: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1fafb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1fafb4:
    // 0x1fafb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fafb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fafb8:
    // 0x1fafb8: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x1fafb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
label_1fafbc:
    // 0x1fafbc: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x1fafbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1fafc0: 0xdfb701d0  ld          $s7, 0x1D0($sp)
    ctx->pc = 0x1fafc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1fafc4: 0xdfb601c0  ld          $s6, 0x1C0($sp)
    ctx->pc = 0x1fafc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1fafc8: 0xdfb501b0  ld          $s5, 0x1B0($sp)
    ctx->pc = 0x1fafc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1fafcc: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x1fafccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1fafd0: 0xdfb30190  ld          $s3, 0x190($sp)
    ctx->pc = 0x1fafd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1fafd4: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x1fafd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1fafd8: 0xdfb10170  ld          $s1, 0x170($sp)
    ctx->pc = 0x1fafd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1fafdc: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x1fafdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1fafe0: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x1fafe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fafe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFE4u;
        // 0x1fafe8: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAFECu;
}
