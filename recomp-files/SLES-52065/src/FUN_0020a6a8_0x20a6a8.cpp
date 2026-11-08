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

// Function: FUN_0020a6a8
// Address: 0x20a6a8 - 0x20a7ac
void FUN_0020a6a8_0x20a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020a6a8_0x20a6a8");
#endif

    ctx->pc = 0x20a6a8u;

    // 0x20a6a8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x20a6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x20a6ac: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x20a6acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x20a6b0: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x20a6b0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x20a6b4: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x20a6b4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x20a6b8: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x20a6b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x20a6bc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x20a6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x20a6c0: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x20a6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x20a6c4: 0x93ac0000  lbu         $t4, 0x0($sp)
    ctx->pc = 0x20a6c4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a6c8: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x20a6c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x20a6cc: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x20a6ccu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x20a6d0: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x20a6d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x20a6d4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x20a6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x20a6d8: 0x9fa30010  lwu         $v1, 0x10($sp)
    ctx->pc = 0x20a6d8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a6dc: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x20a6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x20a6e0: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x20a6e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x20a6e4: 0x93ad0008  lbu         $t5, 0x8($sp)
    ctx->pc = 0x20a6e4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a6e8: 0xb5a38  dsll        $t3, $t3, 8
    ctx->pc = 0x20a6e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 8);
    // 0x20a6ec: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x20a6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x20a6f0: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x20a6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x20a6f4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x20a6f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x20a6f8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20a6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20a6fc: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x20a6fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x20a700: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x20a700u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x20a704: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x20a704u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x20a708: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x20a708u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x20a70c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20a70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20a710: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x20a710u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x20a714: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x20a714u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x20a718: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x20a718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x20a71c: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x20a71cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x20a720: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x20a720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x20a724: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20a724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a728: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x20a728u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x20a72c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x20a72cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x20a730: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x20a730u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x20a734: 0xd6e38  dsll        $t5, $t5, 24
    ctx->pc = 0x20a734u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 24);
    // 0x20a738: 0x54403  sra         $t0, $a1, 16
    ctx->pc = 0x20a738u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 16));
    // 0x20a73c: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x20a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x20a740: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20a740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20a744: 0x14d5025  or          $t2, $t2, $t5
    ctx->pc = 0x20a744u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
    // 0x20a748: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x20a748u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
    // 0x20a74c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x20a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20a750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a754: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x20a754u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x20a758: 0xfcc30028  sd          $v1, 0x28($a2)
    ctx->pc = 0x20a758u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
    // 0x20a75c: 0xfcca0020  sd          $t2, 0x20($a2)
    ctx->pc = 0x20a75cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 10));
    // 0x20a760: 0xfcc70030  sd          $a3, 0x30($a2)
    ctx->pc = 0x20a760u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 7));
    // 0x20a764: 0xfcc50048  sd          $a1, 0x48($a2)
    ctx->pc = 0x20a764u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 5));
    // 0x20a768: 0xfcc90040  sd          $t1, 0x40($a2)
    ctx->pc = 0x20a768u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 9));
    // 0x20a76c: 0xfcc40058  sd          $a0, 0x58($a2)
    ctx->pc = 0x20a76cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 4));
    // 0x20a770: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x20a770u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x20a774: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x20a774u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x20a778: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x20a778u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x20a77c: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A77Cu;
    {
        const bool branch_taken_0x20a77c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A77Cu;
        // 0x20a780: 0xfcc50038  sd          $a1, 0x38($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a77c) {
            ctx->pc = 0x20A79Cu;
            goto label_20a79c;
        }
    }
    ctx->pc = 0x20A784u;
    // 0x20a784: 0x31020003  andi        $v0, $t0, 0x3
    ctx->pc = 0x20a784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x20a788: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x20a788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x20a78c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x20a78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x20a790: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20a790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20a794: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20A794u;
    {
        const bool branch_taken_0x20a794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A794u;
        // 0x20a798: 0xfcc20050  sd          $v0, 0x50($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a794) {
            ctx->pc = 0x20A7A0u;
            goto label_20a7a0;
        }
    }
    ctx->pc = 0x20A79Cu;
label_20a79c:
    // 0x20a79c: 0xfccb0050  sd          $t3, 0x50($a2)
    ctx->pc = 0x20a79cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 11));
label_20a7a0:
    // 0x20a7a0: 0xf  sync
    ctx->pc = 0x20a7a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x20a7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x20A7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7A4u;
        // 0x20a7a8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A7ACu;
}
