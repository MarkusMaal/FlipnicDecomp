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

// Function: entry_00173870
// Address: 0x173870 - 0x17391c
void entry_00173870_0x173870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173870_0x173870");
#endif

    switch (ctx->pc) {
        case 0x1738a8u: goto label_1738a8;
        case 0x1738d4u: goto label_1738d4;
        case 0x173900u: goto label_173900;
        default: break;
    }

    ctx->pc = 0x173870u;

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
            return;
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
