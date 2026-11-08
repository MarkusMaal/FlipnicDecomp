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

// Function: FUN_001885f0
// Address: 0x1885f0 - 0x1886fc
void FUN_001885f0_0x1885f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001885f0_0x1885f0");
#endif

    ctx->pc = 0x1885f0u;

    // 0x1885f0: 0x24c38000  addiu       $v1, $a2, -0x8000
    ctx->pc = 0x1885f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
    // 0x1885f4: 0x9503c  dsll32      $t2, $t1, 0
    ctx->pc = 0x1885f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1885f8: 0x36a40  sll         $t5, $v1, 9
    ctx->pc = 0x1885f8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x1885fc: 0x87a40  sll         $t7, $t0, 9
    ctx->pc = 0x1885fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 9));
    // 0x188600: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x188600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x188604: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188608: 0x346c2493  ori         $t4, $v1, 0x2493
    ctx->pc = 0x188608u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x18860c: 0xa74821  addu        $t1, $a1, $a3
    ctx->pc = 0x18860cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x188610: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x188610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x188614: 0xd5fc2  srl         $t3, $t5, 31
    ctx->pc = 0x188614u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x188618: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x188618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18861c: 0xf77c2  srl         $t6, $t7, 31
    ctx->pc = 0x18861cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x188620: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x188620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x188624: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x188624u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x188628: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x188628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x18862c: 0x24035150  addiu       $v1, $zero, 0x5150
    ctx->pc = 0x18862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20816));
    // 0x188630: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x188630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x188634: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x188634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x188638: 0x18d0018  mult        $zero, $t4, $t5
    ctx->pc = 0x188638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18863c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x18863cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188640: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x188640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x188644: 0x34680003  ori         $t0, $v1, 0x3
    ctx->pc = 0x188644u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x188648: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x188648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x18864c: 0x3010  mfhi        $a2
    ctx->pc = 0x18864cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x188650: 0x18f0018  mult        $zero, $t4, $t7
    ctx->pc = 0x188650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x188654: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x188654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x188658: 0xfce80000  sd          $t0, 0x0($a3)
    ctx->pc = 0x188658u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 8));
    // 0x18865c: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x18865cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x188660: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x188660u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188664: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x188664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x188668: 0x240b0046  addiu       $t3, $zero, 0x46
    ctx->pc = 0x188668u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x18866c: 0x3810  mfhi        $a3
    ctx->pc = 0x18866cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x188670: 0x346c0003  ori         $t4, $v1, 0x3
    ctx->pc = 0x188670u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x188674: 0x24c37fff  addiu       $v1, $a2, 0x7FFF
    ctx->pc = 0x188674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32767));
    // 0x188678: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x188678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18867c: 0xef3821  addu        $a3, $a3, $t7
    ctx->pc = 0x18867cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x188680: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x188680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188684: 0x73a03  sra         $a3, $a3, 8
    ctx->pc = 0x188684u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 8));
    // 0x188688: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x188688u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x18868c: 0xee4021  addu        $t0, $a3, $t6
    ctx->pc = 0x18868cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x188690: 0xc83821  addu        $a3, $a2, $t0
    ctx->pc = 0x188690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x188694: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x188694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188698: 0xad0c000c  sw          $t4, 0xC($t0)
    ctx->pc = 0x188698u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 12));
    // 0x18869c: 0x7bac0000  lq          $t4, 0x0($sp)
    ctx->pc = 0x18869cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1886a0: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1886a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1886a4: 0x7d0c0010  sq          $t4, 0x10($t0)
    ctx->pc = 0x1886a4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 12));
    // 0x1886a8: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1886a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1886ac: 0xfd0b0020  sd          $t3, 0x20($t0)
    ctx->pc = 0x1886acu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 11));
    // 0x1886b0: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1886b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1886b4: 0xa5050028  sh          $a1, 0x28($t0)
    ctx->pc = 0x1886b4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 40), (uint16_t)GPR_U32(ctx, 5));
    // 0x1886b8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1886b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1886bc: 0xa4a6002a  sh          $a2, 0x2A($a1)
    ctx->pc = 0x1886bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 6));
    // 0x1886c0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1886c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1886c4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1886c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x1886c8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1886c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1886cc: 0xfcaa0030  sd          $t2, 0x30($a1)
    ctx->pc = 0x1886ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 10));
    // 0x1886d0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1886d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1886d4: 0xa4a90038  sh          $t1, 0x38($a1)
    ctx->pc = 0x1886d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 9));
    // 0x1886d8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1886d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1886dc: 0xa4a7003a  sh          $a3, 0x3A($a1)
    ctx->pc = 0x1886dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 58), (uint16_t)GPR_U32(ctx, 7));
    // 0x1886e0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1886e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1886e4: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x1886e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x1886e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1886e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1886ec: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1886ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1886f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1886f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1886f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1886F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1886F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886F4u;
        // 0x1886f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1886F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1886FCu;
}
