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

// Function: FUN_0020a3f8
// Address: 0x20a3f8 - 0x20a4c0
void FUN_0020a3f8_0x20a3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020a3f8_0x20a3f8");
#endif

    switch (ctx->pc) {
        case 0x20a428u: goto label_20a428;
        default: break;
    }

    ctx->pc = 0x20a3f8u;

    // 0x20a3f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20a3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20a3fc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x20a3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x20a400: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x20a400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20a404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a408: 0x48c00  sll         $s1, $a0, 16
    ctx->pc = 0x20a408u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x20a40c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20a410: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x20a410u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x20a414: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x20a414u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x20a418: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x20a418u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x20a41c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20a41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20a420: 0xc0827a6  jal         func_209E98
    ctx->pc = 0x20A420u;
    SET_GPR_U32(ctx, 31, 0x20A428u);
    ctx->pc = 0x20A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A420u;
    // 0x20a424: 0x69403  sra         $s2, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E98u, 0x20A420u, 0x20A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A428u;
label_20a428:
    // 0x20a428: 0x2603003f  addiu       $v1, $s0, 0x3F
    ctx->pc = 0x20a428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x20a42c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a430: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20a430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a434: 0x2610007e  addiu       $s0, $s0, 0x7E
    ctx->pc = 0x20a434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 126));
    // 0x20a438: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x20a438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20a43c: 0x32310002  andi        $s1, $s1, 0x2
    ctx->pc = 0x20a43cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x20a440: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x20a440u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x20a444: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A444u;
    {
        const bool branch_taken_0x20a444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A444u;
        // 0x20a448: 0x108183  sra         $s0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a444) {
            ctx->pc = 0x20A464u;
            goto label_20a464;
        }
    }
    ctx->pc = 0x20A44Cu;
    // 0x20a44c: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x20a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x20a450: 0x2643007e  addiu       $v1, $s2, 0x7E
    ctx->pc = 0x20a450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 126));
    // 0x20a454: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x20a454u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20a458: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x20a458u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x20a45c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20A45Cu;
    {
        const bool branch_taken_0x20a45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A45Cu;
        // 0x20a460: 0x33183  sra         $a2, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a45c) {
            ctx->pc = 0x20A478u;
            goto label_20a478;
        }
    }
    ctx->pc = 0x20A464u;
label_20a464:
    // 0x20a464: 0x2642001f  addiu       $v0, $s2, 0x1F
    ctx->pc = 0x20a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 31));
    // 0x20a468: 0x2643003e  addiu       $v1, $s2, 0x3E
    ctx->pc = 0x20a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 62));
    // 0x20a46c: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x20a46cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20a470: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x20a470u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x20a474: 0x33143  sra         $a2, $v1, 5
    ctx->pc = 0x20a474u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 5));
label_20a478:
    // 0x20a478: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x20a478u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20a47c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20a47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20a480: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20a480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20a484: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x20a484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x20a488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a48c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20a48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20a490: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A490u;
    {
        const bool branch_taken_0x20a490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A490u;
        // 0x20a494: 0x2061018  mult        $v0, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a490) {
            ctx->pc = 0x20A4A0u;
            goto label_20a4a0;
        }
    }
    ctx->pc = 0x20A498u;
    // 0x20a498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20A498u;
    {
        const bool branch_taken_0x20a498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A498u;
        // 0x20a49c: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a498) {
            ctx->pc = 0x20A4A4u;
            goto label_20a4a4;
        }
    }
    ctx->pc = 0x20A4A0u;
label_20a4a0:
    // 0x20a4a0: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x20a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_20a4a4:
    // 0x20a4a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x20a4a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20a4a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20a4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a4ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20a4acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a4b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x20a4b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a4b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x20A4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4B8u;
        // 0x20a4bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A4C0u;
}
