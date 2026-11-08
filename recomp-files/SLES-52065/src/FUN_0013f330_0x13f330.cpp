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

// Function: FUN_0013f330
// Address: 0x13f330 - 0x13f40c
void FUN_0013f330_0x13f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f330_0x13f330");
#endif

    switch (ctx->pc) {
        case 0x13f368u: goto label_13f368;
        case 0x13f394u: goto label_13f394;
        case 0x13f3dcu: goto label_13f3dc;
        default: break;
    }

    ctx->pc = 0x13f330u;

    // 0x13f330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13f334: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13f338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13f33c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f344: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f348: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x13f348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x13f34c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f350: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x13f350u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x13f354: 0x0  nop
    ctx->pc = 0x13f354u;
    // NOP
    // 0x13f358: 0x0  nop
    ctx->pc = 0x13f358u;
    // NOP
    // 0x13f35c: 0x2812  mflo        $a1
    ctx->pc = 0x13f35cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x13f360: 0xc04fc44  jal         func_13F110
    ctx->pc = 0x13F360u;
    SET_GPR_U32(ctx, 31, 0x13F368u);
    ctx->pc = 0x13F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F360u;
    // 0x13f364: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F110u, 0x13F360u, 0x13F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F368u;
label_13f368:
    // 0x13f368: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x13f368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x13f36c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13f370: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x13f370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x13f374: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x13f374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x13f378: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13f378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13f37c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x13F37Cu;
    {
        const bool branch_taken_0x13f37c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F37Cu;
        // 0x13f380: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f37c) {
            ctx->pc = 0x13F3F4u;
            goto label_13f3f4;
        }
    }
    ctx->pc = 0x13F384u;
    // 0x13f384: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x13f384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13f388: 0x2470fffe  addiu       $s0, $v1, -0x2
    ctx->pc = 0x13f388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x13f38c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13F38Cu;
    {
        const bool branch_taken_0x13f38c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f38c) {
            ctx->pc = 0x13F3E8u;
            goto label_13f3e8;
        }
    }
    ctx->pc = 0x13F394u;
label_13f394:
    // 0x13f394: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x13f394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13f398: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13f398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13f39c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x13f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x13f3a0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x13f3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13f3a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x13f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13f3a8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x13f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13f3ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13f3b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f3b4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x13f3b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13f3b8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F3B8u;
    {
        const bool branch_taken_0x13f3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f3b8) {
            ctx->pc = 0x13F3C4u;
            goto label_13f3c4;
        }
    }
    ctx->pc = 0x13F3C0u;
    // 0x13f3c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_13f3c4:
    // 0x13f3c4: 0x0  nop
    ctx->pc = 0x13f3c4u;
    // NOP
    // 0x13f3c8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13f3cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f3d0: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x13f3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f3d4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13F3D4u;
    SET_GPR_U32(ctx, 31, 0x13F3DCu);
    ctx->pc = 0x13F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F3D4u;
    // 0x13f3d8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13F3D4u, 0x13F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F3DCu;
label_13f3dc:
    // 0x13f3dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x13f3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x13f3e0: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13F3E0u;
    {
        const bool branch_taken_0x13f3e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F3E0u;
        // 0x13f3e4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3e0) {
            ctx->pc = 0x13F394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13f394;
        }
    }
    ctx->pc = 0x13F3E8u;
label_13f3e8:
    // 0x13f3e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13f3ec: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x13f3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x13f3f0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x13f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_13f3f4:
    // 0x13f3f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13f3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f3f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f3f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f3fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f404: 0x3e00008  jr          $ra
    ctx->pc = 0x13F404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F404u;
        // 0x13f408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F40Cu;
}
