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

// Function: FUN_0020a4c0
// Address: 0x20a4c0 - 0x20a6a4
void FUN_0020a4c0_0x20a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020a4c0_0x20a4c0");
#endif

    switch (ctx->pc) {
        case 0x20a550u: goto label_20a550;
        case 0x20a584u: goto label_20a584;
        default: break;
    }

    ctx->pc = 0x20a4c0u;

    // 0x20a4c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20a4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20a4c4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x20a4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x20a4c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20a4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20a4cc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x20a4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x20a4d0: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x20a4d0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x20a4d4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x20a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x20a4d8: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x20a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x20a4dc: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x20a4dcu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
    // 0x20a4e0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x20a4e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x20a4e4: 0x3283000f  andi        $v1, $s4, 0xF
    ctx->pc = 0x20a4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
    // 0x20a4e8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x20a4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x20a4ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a4f0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x20a4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x20a4f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x20a4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x20a4f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20a4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20a500: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x20a500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x20a504: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x20a504u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x20a508: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x20a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20a50c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x20a50cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x20a510: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20a510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20a514: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x20a514u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x20a518: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20a518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20a51c: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x20a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x20a520: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x20a520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x20a524: 0x78c03  sra         $s1, $a3, 16
    ctx->pc = 0x20a524u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 16));
    // 0x20a528: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x20a528u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x20a52c: 0x99c03  sra         $s3, $t1, 16
    ctx->pc = 0x20a52cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 9), 16));
    // 0x20a530: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x20a530u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x20a534: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x20a534u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x20a538: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x20A538u;
    {
        const bool branch_taken_0x20a538 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A538u;
        // 0x20a53c: 0xfe040018  sd          $a0, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a538) {
            ctx->pc = 0x20A574u;
            goto label_20a574;
        }
    }
    ctx->pc = 0x20A540u;
    // 0x20a540: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20a540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a544: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20a544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a548: 0xc0828fe  jal         func_20A3F8
    ctx->pc = 0x20A548u;
    SET_GPR_U32(ctx, 31, 0x20A550u);
    ctx->pc = 0x20A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A548u;
    // 0x20a54c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A3F8u, 0x20A548u, 0x20A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A550u;
label_20a550:
    // 0x20a550: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20a550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20a554: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x20a554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x20a558: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a558u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a55c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x20a55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x20a560: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20a560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20a564: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x20a564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x20a568: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x20a568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x20a56c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20A56Cu;
    {
        const bool branch_taken_0x20a56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A56Cu;
        // 0x20a570: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a56c) {
            ctx->pc = 0x20A598u;
            goto label_20a598;
        }
    }
    ctx->pc = 0x20A574u;
label_20a574:
    // 0x20a574: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20a574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a578: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20a578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a57c: 0xc0828fe  jal         func_20A3F8
    ctx->pc = 0x20A57Cu;
    SET_GPR_U32(ctx, 31, 0x20A584u);
    ctx->pc = 0x20A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A57Cu;
    // 0x20a580: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A3F8u, 0x20A57Cu, 0x20A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A584u;
label_20a584:
    // 0x20a584: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20a584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20a588: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x20a588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x20a58c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a58cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a590: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x20a590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x20a594: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20a594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20a598:
    // 0x20a598: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x20a598u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x20a59c: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x20a59cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x20a5a0: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x20a5a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x20a5a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20a5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20a5a8: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x20a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x20a5ac: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20a5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20a5b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a5b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a5b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20a5b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20a5b8: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x20a5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x20a5bc: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x20a5bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x20a5c0: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x20a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x20a5c4: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x20a5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x20a5c8: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x20a5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x20a5cc: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x20a5ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x20a5d0: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x20a5d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x20a5d4: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x20a5d4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x20a5d8: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x20a5d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x20a5dc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x20a5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x20a5e0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x20a5e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x20a5e4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x20a5e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a5e8: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x20a5e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x20a5ec: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x20a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x20a5f0: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x20a5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x20a5f4: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x20a5f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x20a5f8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x20a5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x20a5fc: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x20a5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x20a600: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x20a600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x20a604: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x20a604u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x20a608: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x20a608u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x20a60c: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x20a60cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x20a610: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x20a610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x20a614: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x20a614u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x20a618: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x20a618u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x20a61c: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x20a61cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x20a620: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x20a620u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x20a624: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x20a624u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x20a628: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x20a628u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x20a62c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A62Cu;
    {
        const bool branch_taken_0x20a62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A62Cu;
        // 0x20a630: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a62c) {
            ctx->pc = 0x20A640u;
            goto label_20a640;
        }
    }
    ctx->pc = 0x20A634u;
    // 0x20a634: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x20a634u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x20a638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20A638u;
    {
        const bool branch_taken_0x20a638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A638u;
        // 0x20a63c: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a638) {
            ctx->pc = 0x20A64Cu;
            goto label_20a64c;
        }
    }
    ctx->pc = 0x20A640u;
label_20a640:
    // 0x20a640: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x20a640u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x20a644: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x20a644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x20a648: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20a648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20a64c:
    // 0x20a64c: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x20a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x20a650: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x20a650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x20a654: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x20A654u;
    {
        const bool branch_taken_0x20a654 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A654u;
        // 0x20a658: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a654) {
            ctx->pc = 0x20A670u;
            goto label_20a670;
        }
    }
    ctx->pc = 0x20A65Cu;
    // 0x20a65c: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x20a65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x20a660: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x20a660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x20a664: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x20a664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x20a668: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20A668u;
    {
        const bool branch_taken_0x20a668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A668u;
        // 0x20a66c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a668) {
            ctx->pc = 0x20A674u;
            goto label_20a674;
        }
    }
    ctx->pc = 0x20A670u;
label_20a670:
    // 0x20a670: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x20a670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_20a674:
    // 0x20a674: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x20a674u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x20a678: 0xf  sync
    ctx->pc = 0x20a678u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x20a67c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20a67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20a680: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x20a680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20a684: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x20a684u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20a688: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x20a688u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20a68c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x20a68cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a690: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20a690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a694: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20a694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a69c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A69Cu;
        // 0x20a6a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A6A4u;
}
