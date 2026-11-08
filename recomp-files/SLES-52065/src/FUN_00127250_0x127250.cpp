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

// Function: FUN_00127250
// Address: 0x127250 - 0x127318
void FUN_00127250_0x127250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127250_0x127250");
#endif

    switch (ctx->pc) {
        case 0x127264u: goto label_127264;
        case 0x1272e8u: goto label_1272e8;
        default: break;
    }

    ctx->pc = 0x127250u;

    // 0x127250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x127250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x127254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x127254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x127258: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x127258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x12725c: 0xc049704  jal         func_125C10
    ctx->pc = 0x12725Cu;
    SET_GPR_U32(ctx, 31, 0x127264u);
    ctx->pc = 0x127260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12725Cu;
    // 0x127260: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C10u, 0x12725Cu, 0x127264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127264u;
label_127264:
    // 0x127264: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x127264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x127268: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x127268u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
    // 0x12726c: 0x250889c0  addiu       $t0, $t0, -0x7640
    ctx->pc = 0x12726cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937024));
    // 0x127270: 0x3c05c1c8  lui         $a1, 0xC1C8
    ctx->pc = 0x127270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49608 << 16));
    // 0x127274: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x127274u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x127278: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x127278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12727c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x12727cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x127280: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x127280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x127284: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x127284u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x127288: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x127288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x12728c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x12728cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x127290: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x127290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x127294: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x127294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
    // 0x127298: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x127298u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12729c: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x12729cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1272a0: 0x7ca40070  sq          $a0, 0x70($a1)
    ctx->pc = 0x1272a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 4));
    // 0x1272a4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1272a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1272a8: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x1272a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x1272ac: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1272acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1272b0: 0xafa6003c  sw          $a2, 0x3C($sp)
    ctx->pc = 0x1272b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 6));
    // 0x1272b4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1272b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1272b8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1272b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1272bc: 0x7c830080  sq          $v1, 0x80($a0)
    ctx->pc = 0x1272bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 3));
    // 0x1272c0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1272c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1272c4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1272c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1272c8: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x1272c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x1272cc: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x1272ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
    // 0x1272d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1272d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1272d4: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1272d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1272d8: 0x7c620090  sq          $v0, 0x90($v1)
    ctx->pc = 0x1272d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 144), GPR_VEC(ctx, 2));
    // 0x1272dc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1272dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1272e0: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x1272E0u;
    SET_GPR_U32(ctx, 31, 0x1272E8u);
    ctx->pc = 0x1272E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1272E0u;
    // 0x1272e4: 0x244400a0  addiu       $a0, $v0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x1272E0u, 0x1272E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1272E8u;
label_1272e8:
    // 0x1272e8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1272e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1272ec: 0x3c024226  lui         $v0, 0x4226
    ctx->pc = 0x1272ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
    // 0x1272f0: 0x344327f0  ori         $v1, $v0, 0x27F0
    ctx->pc = 0x1272f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10224);
    // 0x1272f4: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x1272f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x1272f8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1272f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1272fc: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x1272fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x127300: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x127300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x127304: 0xac4000e4  sw          $zero, 0xE4($v0)
    ctx->pc = 0x127304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 0));
    // 0x127308: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x127308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x12730c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12730cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127310: 0x3e00008  jr          $ra
    ctx->pc = 0x127310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127310u;
        // 0x127314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127318u;
}
