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

// Function: FUN_00129f70
// Address: 0x129f70 - 0x12a04c
void FUN_00129f70_0x129f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00129f70_0x129f70");
#endif

    switch (ctx->pc) {
        case 0x129f8cu: goto label_129f8c;
        case 0x129f94u: goto label_129f94;
        case 0x129fa0u: goto label_129fa0;
        case 0x129fc0u: goto label_129fc0;
        case 0x129fd0u: goto label_129fd0;
        case 0x129fe0u: goto label_129fe0;
        case 0x129ff0u: goto label_129ff0;
        case 0x12a014u: goto label_12a014;
        case 0x12a020u: goto label_12a020;
        default: break;
    }

    ctx->pc = 0x129f70u;

    // 0x129f70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x129f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x129f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x129f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x129f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x129f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x129f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x129f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f80: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x129f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x129f84: 0xc04c6f4  jal         func_131BD0
    ctx->pc = 0x129F84u;
    SET_GPR_U32(ctx, 31, 0x129F8Cu);
    ctx->pc = 0x129F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129F84u;
    // 0x129f88: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BD0u, 0x129F84u, 0x129F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F8Cu;
label_129f8c:
    // 0x129f8c: 0xc04c720  jal         func_131C80
    ctx->pc = 0x129F8Cu;
    SET_GPR_U32(ctx, 31, 0x129F94u);
    ctx->pc = 0x129F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129F8Cu;
    // 0x129f90: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C80u, 0x129F8Cu, 0x129F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F94u;
label_129f94:
    // 0x129f94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f98: 0xc04c6f4  jal         func_131BD0
    ctx->pc = 0x129F98u;
    SET_GPR_U32(ctx, 31, 0x129FA0u);
    ctx->pc = 0x129F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129F98u;
    // 0x129f9c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BD0u, 0x129F98u, 0x129FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FA0u;
label_129fa0:
    // 0x129fa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x129fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x129fa4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x129fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x129fa8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x129fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x129fac: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x129facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x129fb0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x129fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x129fb4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x129fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x129fb8: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x129FB8u;
    SET_GPR_U32(ctx, 31, 0x129FC0u);
    ctx->pc = 0x129FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FB8u;
    // 0x129fbc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x129FB8u, 0x129FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FC0u;
label_129fc0:
    // 0x129fc0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x129fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x129fc4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x129fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x129fc8: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x129FC8u;
    SET_GPR_U32(ctx, 31, 0x129FD0u);
    ctx->pc = 0x129FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FC8u;
    // 0x129fcc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x129FC8u, 0x129FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FD0u;
label_129fd0:
    // 0x129fd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x129fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x129fd4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x129fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x129fd8: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x129FD8u;
    SET_GPR_U32(ctx, 31, 0x129FE0u);
    ctx->pc = 0x129FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FD8u;
    // 0x129fdc: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x129FD8u, 0x129FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FE0u;
label_129fe0:
    // 0x129fe0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x129fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x129fe4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x129fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x129fe8: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x129FE8u;
    SET_GPR_U32(ctx, 31, 0x129FF0u);
    ctx->pc = 0x129FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FE8u;
    // 0x129fec: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x129FE8u, 0x129FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FF0u;
label_129ff0:
    // 0x129ff0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x129ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x129ff4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x129ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x129ff8: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x129ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x129ffc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x129ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12a000: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x12a000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x12a004: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x12a004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12a008: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x12a008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x12a00c: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x12A00Cu;
    SET_GPR_U32(ctx, 31, 0x12A014u);
    ctx->pc = 0x12A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A00Cu;
    // 0x12a010: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x12A00Cu, 0x12A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A014u;
label_12a014:
    // 0x12a014: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12a014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12a018: 0xc07d308  jal         func_1F4C20
    ctx->pc = 0x12A018u;
    SET_GPR_U32(ctx, 31, 0x12A020u);
    ctx->pc = 0x12A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A018u;
    // 0x12a01c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C20u, 0x12A018u, 0x12A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A020u;
label_12a020:
    // 0x12a020: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12a020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a024: 0x0  nop
    ctx->pc = 0x12a024u;
    // NOP
    // 0x12a028: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12a028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a02c: 0x0  nop
    ctx->pc = 0x12a02cu;
    // NOP
    // 0x12a030: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12A030u;
    {
        const bool branch_taken_0x12a030 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A030u;
        // 0x12a034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a030) {
            ctx->pc = 0x12A03Cu;
            goto label_12a03c;
        }
    }
    ctx->pc = 0x12A038u;
    // 0x12a038: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12a03c:
    // 0x12a03c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12a03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a044: 0x3e00008  jr          $ra
    ctx->pc = 0x12A044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A044u;
        // 0x12a048: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A04Cu;
}
