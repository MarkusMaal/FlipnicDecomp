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

// Function: FUN_0011f650
// Address: 0x11f650 - 0x11f77c
void FUN_0011f650_0x11f650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011f650_0x11f650");
#endif

    switch (ctx->pc) {
        case 0x11f678u: goto label_11f678;
        default: break;
    }

    ctx->pc = 0x11f650u;

    // 0x11f650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11f650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11f654: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11f654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11f658: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11f658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11f65c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11f65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11f660: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11f660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f664: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11f664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11f668: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11f668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f66c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11f66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f670: 0xc047d50  jal         func_11F540
    ctx->pc = 0x11F670u;
    SET_GPR_U32(ctx, 31, 0x11F678u);
    ctx->pc = 0x11F674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F670u;
    // 0x11f674: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F540u, 0x11F670u, 0x11F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F678u;
label_11f678:
    // 0x11f678: 0x8e422024  lw          $v0, 0x2024($s2)
    ctx->pc = 0x11f678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8228)));
    // 0x11f67c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f680: 0x8e43201c  lw          $v1, 0x201C($s2)
    ctx->pc = 0x11f680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8220)));
    // 0x11f684: 0x8e462028  lw          $a2, 0x2028($s2)
    ctx->pc = 0x11f684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8232)));
    // 0x11f688: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x11f688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11f68c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11f690: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x11f690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x11f694: 0x8e432024  lw          $v1, 0x2024($s2)
    ctx->pc = 0x11f694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8228)));
    // 0x11f698: 0x8e44201c  lw          $a0, 0x201C($s2)
    ctx->pc = 0x11f698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8220)));
    // 0x11f69c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x11f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x11f6a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11f6a4: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x11f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x11f6a8: 0x8e432024  lw          $v1, 0x2024($s2)
    ctx->pc = 0x11f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8228)));
    // 0x11f6ac: 0x8e44201c  lw          $a0, 0x201C($s2)
    ctx->pc = 0x11f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8220)));
    // 0x11f6b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x11f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x11f6b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11f6b8: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x11f6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x11f6bc: 0x8e432024  lw          $v1, 0x2024($s2)
    ctx->pc = 0x11f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8228)));
    // 0x11f6c0: 0x8e44201c  lw          $a0, 0x201C($s2)
    ctx->pc = 0x11f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8220)));
    // 0x11f6c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x11f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x11f6c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11f6cc: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x11f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x11f6d0: 0x8e442024  lw          $a0, 0x2024($s2)
    ctx->pc = 0x11f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8228)));
    // 0x11f6d4: 0x8e43201c  lw          $v1, 0x201C($s2)
    ctx->pc = 0x11f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8220)));
    // 0x11f6d8: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x11f6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11f6dc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x11f6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x11f6e0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x11f6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11f6e4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x11f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11f6e8: 0x61b00  sll         $v1, $a2, 12
    ctx->pc = 0x11f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 12));
    // 0x11f6ec: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x11f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x11f6f0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x11f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x11f6f4: 0x8c842014  lw          $a0, 0x2014($a0)
    ctx->pc = 0x11f6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8212)));
    // 0x11f6f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11f6fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11f700: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x11f700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x11f704: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x11f704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11f708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11f708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11f70c: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x11f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x11f710: 0x8c832014  lw          $v1, 0x2014($a0)
    ctx->pc = 0x11f710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8212)));
    // 0x11f714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11f714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11f718: 0xac832014  sw          $v1, 0x2014($a0)
    ctx->pc = 0x11f718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8212), GPR_U32(ctx, 3));
    // 0x11f71c: 0x8e432024  lw          $v1, 0x2024($s2)
    ctx->pc = 0x11f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8228)));
    // 0x11f720: 0x8e45201c  lw          $a1, 0x201C($s2)
    ctx->pc = 0x11f720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8220)));
    // 0x11f724: 0x8e442028  lw          $a0, 0x2028($s2)
    ctx->pc = 0x11f724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8232)));
    // 0x11f728: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x11f728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x11f72c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11f730: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x11f730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11f734: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11f734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11f738: 0xae432028  sw          $v1, 0x2028($s2)
    ctx->pc = 0x11f738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8232), GPR_U32(ctx, 3));
    // 0x11f73c: 0x8e432024  lw          $v1, 0x2024($s2)
    ctx->pc = 0x11f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8228)));
    // 0x11f740: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11f740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11f744: 0xae432024  sw          $v1, 0x2024($s2)
    ctx->pc = 0x11f744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8228), GPR_U32(ctx, 3));
    // 0x11f748: 0x8e442020  lw          $a0, 0x2020($s2)
    ctx->pc = 0x11f748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8224)));
    // 0x11f74c: 0x8e432024  lw          $v1, 0x2024($s2)
    ctx->pc = 0x11f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8228)));
    // 0x11f750: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x11f750u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x11f754: 0x0  nop
    ctx->pc = 0x11f754u;
    // NOP
    // 0x11f758: 0x0  nop
    ctx->pc = 0x11f758u;
    // NOP
    // 0x11f75c: 0x1810  mfhi        $v1
    ctx->pc = 0x11f75cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11f760: 0xae432024  sw          $v1, 0x2024($s2)
    ctx->pc = 0x11f760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8228), GPR_U32(ctx, 3));
    // 0x11f764: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11f764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11f768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f76c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11f76cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11f770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f774: 0x3e00008  jr          $ra
    ctx->pc = 0x11F774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F774u;
        // 0x11f778: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F77Cu;
}
