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

// Function: FUN_00173800
// Address: 0x173800 - 0x17391c
void FUN_00173800_0x173800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00173800_0x173800");
#endif

    switch (ctx->pc) {
        case 0x173830u: goto label_173830;
        case 0x17383cu: goto label_17383c;
        case 0x173844u: goto label_173844;
        case 0x17384cu: goto label_17384c;
        case 0x173864u: goto label_173864;
        case 0x1738a8u: goto label_1738a8;
        case 0x1738d4u: goto label_1738d4;
        case 0x173900u: goto label_173900;
        default: break;
    }

    ctx->pc = 0x173800u;

    // 0x173800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x173800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x173804: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x173804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x173808: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x173808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17380c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x173810: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173814: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x173814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17381c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17381cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173820: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x173820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x173824: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x173824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173828: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x173828u;
    {
        const bool branch_taken_0x173828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173828u;
        // 0x17382c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173828) {
            ctx->pc = 0x173870u;
            goto label_173870;
        }
    }
    ctx->pc = 0x173830u;
label_173830:
    // 0x173830: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x173830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x173834: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173834u;
    SET_GPR_U32(ctx, 31, 0x17383Cu);
    ctx->pc = 0x173838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173834u;
    // 0x173838: 0x509821  addu        $s3, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173834u, 0x17383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17383Cu;
label_17383c:
    // 0x17383c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17383Cu;
    SET_GPR_U32(ctx, 31, 0x173844u);
    ctx->pc = 0x173840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17383Cu;
    // 0x173840: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17383Cu, 0x173844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173844u;
label_173844:
    // 0x173844: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173844u;
    SET_GPR_U32(ctx, 31, 0x17384Cu);
    ctx->pc = 0x173848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173844u;
    // 0x173848: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173844u, 0x17384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17384Cu;
label_17384c:
    // 0x17384c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x17384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x173850: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173854: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x173854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x173858: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x173858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17385c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17385Cu;
    SET_GPR_U32(ctx, 31, 0x173864u);
    ctx->pc = 0x173860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17385Cu;
    // 0x173860: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17385Cu, 0x173864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173864u;
label_173864:
    // 0x173864: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x173864u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x173868: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x173868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x17386c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17386cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_173870:
    // 0x173870: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x173870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x173874: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x173874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x173878: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x173878u;
    {
        const bool branch_taken_0x173878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173878u;
        // 0x17387c: 0x3c024190  lui         $v0, 0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173878) {
            ctx->pc = 0x173830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173830;
        }
    }
    ctx->pc = 0x173880u;
    // 0x173880: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x173880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x173884: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x173884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x173888: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x173888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17388c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x17388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x173890: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x173890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x173894: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x173894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x173898: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x173898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x17389c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17389cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1738a0: 0xc05cdb4  jal         func_1736D0
    ctx->pc = 0x1738A0u;
    SET_GPR_U32(ctx, 31, 0x1738A8u);
    ctx->pc = 0x1738A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738A0u;
    // 0x1738a4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1736D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1736D0u, 0x1738A0u, 0x1738A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1738A8u;
label_1738a8:
    // 0x1738a8: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x1738a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x1738ac: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x1738acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x1738b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1738b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1738b4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1738b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1738b8: 0x3c02bd4c  lui         $v0, 0xBD4C
    ctx->pc = 0x1738b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48460 << 16));
    // 0x1738bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1738bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1738c0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1738c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1738c4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1738c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x1738c8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1738c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1738cc: 0xc05cdb4  jal         func_1736D0
    ctx->pc = 0x1738CCu;
    SET_GPR_U32(ctx, 31, 0x1738D4u);
    ctx->pc = 0x1738D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738CCu;
    // 0x1738d0: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1736D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1736D0u, 0x1738CCu, 0x1738D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1738D4u;
label_1738d4:
    // 0x1738d4: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x1738d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x1738d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1738d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1738dc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1738dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1738e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1738e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1738e4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1738e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1738e8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1738e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1738ec: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1738ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x1738f0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1738f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1738f4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1738f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1738f8: 0xc05cdb4  jal         func_1736D0
    ctx->pc = 0x1738F8u;
    SET_GPR_U32(ctx, 31, 0x173900u);
    ctx->pc = 0x1738FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738F8u;
    // 0x1738fc: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1736D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1736D0u, 0x1738F8u, 0x173900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173900u;
label_173900:
    // 0x173900: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x173900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173904: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x173904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17390c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17390cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173914: 0x3e00008  jr          $ra
    ctx->pc = 0x173914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173914u;
        // 0x173918: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17391Cu;
}
