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

// Function: FUN_001fb818
// Address: 0x1fb818 - 0x1fb8fc
void FUN_001fb818_0x1fb818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fb818_0x1fb818");
#endif

    switch (ctx->pc) {
        case 0x1fb898u: goto label_1fb898;
        default: break;
    }

    ctx->pc = 0x1fb818u;

    // 0x1fb818: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1fb818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb81c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fb81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb820: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x1fb820u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x1fb824: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fb824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb828: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x1fb828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x1fb82c: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x1fb82cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1fb830: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x1FB830u;
    {
        const bool branch_taken_0x1fb830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb830) {
            ctx->pc = 0x1FB834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB830u;
            // 0x1fb834: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB8E0u;
            goto label_1fb8e0;
        }
    }
    ctx->pc = 0x1FB838u;
    // 0x1fb838: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FB838u;
    {
        const bool branch_taken_0x1fb838 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1fb838) {
            ctx->pc = 0x1FB83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB838u;
            // 0x1fb83c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB884u;
            goto label_1fb884;
        }
    }
    ctx->pc = 0x1FB840u;
    // 0x1fb840: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1fb840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1fb844: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1fb844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1fb848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb84c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1fb84cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb850: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1fb850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1fb854: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fb854u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fb858: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1FB858u;
    {
        const bool branch_taken_0x1fb858 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb858) {
            ctx->pc = 0x1FB8F0u;
            goto label_1fb8f0;
        }
    }
    ctx->pc = 0x1FB860u;
    // 0x1fb860: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB860u;
    {
        const bool branch_taken_0x1fb860 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1FB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB860u;
        // 0x1fb864: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb860) {
            ctx->pc = 0x1FB870u;
            goto label_1fb870;
        }
    }
    ctx->pc = 0x1FB868u;
    // 0x1fb868: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1FB868u;
    {
        const bool branch_taken_0x1fb868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB868u;
        // 0x1fb86c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb868) {
            ctx->pc = 0x1FB8F0u;
            goto label_1fb8f0;
        }
    }
    ctx->pc = 0x1FB870u;
label_1fb870:
    // 0x1fb870: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1fb870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1fb874: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb878: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1fb878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1fb87c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1FB87Cu;
    {
        const bool branch_taken_0x1fb87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB87Cu;
        // 0x1fb880: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb87c) {
            ctx->pc = 0x1FB8F0u;
            goto label_1fb8f0;
        }
    }
    ctx->pc = 0x1FB884u;
label_1fb884:
    // 0x1fb884: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb888: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x1fb888u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fb88c: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x1fb88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1fb890: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB890u;
    {
        const bool branch_taken_0x1fb890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb890) {
            ctx->pc = 0x1FB8A0u;
            goto label_1fb8a0;
        }
    }
    ctx->pc = 0x1FB898u;
label_1fb898:
    // 0x1fb898: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB898u;
        // 0x1fb89c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB8A0u;
label_1fb8a0:
    // 0x1fb8a0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1fb8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1fb8a4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1fb8a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1fb8a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb8ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1fb8acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb8b0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1fb8b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1fb8b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fb8b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fb8b8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1FB8B8u;
    {
        const bool branch_taken_0x1fb8b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fb8b8) {
            ctx->pc = 0x1FB8F0u;
            goto label_1fb8f0;
        }
    }
    ctx->pc = 0x1FB8C0u;
    // 0x1fb8c0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB8C0u;
    {
        const bool branch_taken_0x1fb8c0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1FB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8C0u;
        // 0x1fb8c4: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8c0) {
            ctx->pc = 0x1FB8D8u;
            goto label_1fb8d8;
        }
    }
    ctx->pc = 0x1FB8C8u;
    // 0x1fb8c8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1fb8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1fb8cc: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x1fb8ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fb8d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fb8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fb8d4: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x1fb8d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_1fb8d8:
    // 0x1fb8d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB8D8u;
    {
        const bool branch_taken_0x1fb8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8D8u;
        // 0x1fb8dc: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8d8) {
            ctx->pc = 0x1FB8F0u;
            goto label_1fb8f0;
        }
    }
    ctx->pc = 0x1FB8E0u;
label_1fb8e0:
    // 0x1fb8e0: 0x14a2ffed  bne         $a1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FB8E0u;
    {
        const bool branch_taken_0x1fb8e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fb8e0) {
            ctx->pc = 0x1FB898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb898;
        }
    }
    ctx->pc = 0x1FB8E8u;
    // 0x1fb8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8E8u;
        // 0x1fb8ec: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB8F0u;
label_1fb8f0:
    // 0x1fb8f0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1fb8f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fb8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8F4u;
        // 0x1fb8f8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB8FCu;
}
