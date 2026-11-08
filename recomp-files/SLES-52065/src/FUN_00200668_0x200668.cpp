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

// Function: FUN_00200668
// Address: 0x200668 - 0x2007e4
void FUN_00200668_0x200668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00200668_0x200668");
#endif

    switch (ctx->pc) {
        case 0x2006a8u: goto label_2006a8;
        default: break;
    }

    ctx->pc = 0x200668u;

    // 0x200668: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x200668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20066c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x20066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x200670: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x200670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x200674: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x200674u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x200678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20067c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20067cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x200680: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x200680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200684: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x200684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x200688: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x200688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20068c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x20068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x200690: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x200690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x200694: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x200694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x200698: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x200698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x20069c: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x20069cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2006a0: 0xc07ff6e  jal         func_1FFDB8
    ctx->pc = 0x2006A0u;
    SET_GPR_U32(ctx, 31, 0x2006A8u);
    ctx->pc = 0x2006A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2006A0u;
    // 0x2006a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFDB8u, 0x2006A0u, 0x2006A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2006A8u;
label_2006a8:
    // 0x2006a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2006a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2006ac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2006acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2006b0: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x2006b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2006b4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2006b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2006b8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2006B8u;
    {
        const bool branch_taken_0x2006b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2006BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006B8u;
        // 0x2006bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006b8) {
            ctx->pc = 0x200724u;
            goto label_200724;
        }
    }
    ctx->pc = 0x2006C0u;
    // 0x2006c0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2006c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2006c4: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x2006c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x2006c8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2006c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2006cc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2006ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2006d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2006d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2006d4: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x2006d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x2006d8: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x2006d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x2006dc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2006dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2006e0: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x2006e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2006e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2006e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2006e8: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2006e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2006ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2006ECu;
    {
        const bool branch_taken_0x2006ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2006F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006ECu;
        // 0x2006f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006ec) {
            ctx->pc = 0x2006F8u;
            goto label_2006f8;
        }
    }
    ctx->pc = 0x2006F4u;
    // 0x2006f4: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x2006f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_2006f8:
    // 0x2006f8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2006f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2006fc: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x2006fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x200700: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x200700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x200704: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x200704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x200708: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x200708u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x20070c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20070cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x200710: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x200710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200714: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x200714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x200718: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x200718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20071c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x20071Cu;
    {
        const bool branch_taken_0x20071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20071Cu;
        // 0x200720: 0x2248824  and         $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20071c) {
            ctx->pc = 0x20079Cu;
            goto label_20079c;
        }
    }
    ctx->pc = 0x200724u;
label_200724:
    // 0x200724: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x200724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x200728: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x200728u;
    {
        const bool branch_taken_0x200728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200728u;
        // 0x20072c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200728) {
            ctx->pc = 0x200738u;
            goto label_200738;
        }
    }
    ctx->pc = 0x200730u;
    // 0x200730: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x200730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x200734: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x200734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_200738:
    // 0x200738: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x200738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x20073c: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x20073Cu;
    {
        const bool branch_taken_0x20073c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x200740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20073Cu;
        // 0x200740: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20073c) {
            ctx->pc = 0x2007A8u;
            goto label_2007a8;
        }
    }
    ctx->pc = 0x200744u;
    // 0x200744: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x200744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x200748: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x200748u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x20074c: 0xd31804  sllv        $v1, $s3, $a2
    ctx->pc = 0x20074cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x200750: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x200750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x200754: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x200754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x200758: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x200758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x20075c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20075cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x200760: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x200760u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x200764: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x200764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x200768: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x200768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x20076c: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x20076cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x200770: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x200770u;
    {
        const bool branch_taken_0x200770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200770u;
        // 0x200774: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200770) {
            ctx->pc = 0x20077Cu;
            goto label_20077c;
        }
    }
    ctx->pc = 0x200778u;
    // 0x200778: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x200778u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_20077c:
    // 0x20077c: 0x61023  negu        $v0, $a2
    ctx->pc = 0x20077cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x200780: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x200784: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x200784u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x200788: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x200788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20078c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x20078cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x200790: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x200790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x200794: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x200794u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x200798: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x200798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_20079c:
    // 0x20079c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20079cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2007a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2007A0u;
    {
        const bool branch_taken_0x2007a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2007A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A0u;
        // 0x2007a4: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007a0) {
            ctx->pc = 0x2007C0u;
            goto label_2007c0;
        }
    }
    ctx->pc = 0x2007A8u;
label_2007a8:
    // 0x2007a8: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x2007a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x2007ac: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x2007acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x2007b0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2007b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2007b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2007b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2007b8: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x2007b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2007bc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2007bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2007c0:
    // 0x2007c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2007c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2007c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2007c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2007c8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2007c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2007cc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2007ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2007d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2007d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2007d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2007d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2007d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2007d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2007dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2007DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2007E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007DCu;
        // 0x2007e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2007DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2007E4u;
}
