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

// Function: FUN_0016f680
// Address: 0x16f680 - 0x16f774
void FUN_0016f680_0x16f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016f680_0x16f680");
#endif

    switch (ctx->pc) {
        case 0x16f694u: goto label_16f694;
        case 0x16f6c8u: goto label_16f6c8;
        case 0x16f730u: goto label_16f730;
        default: break;
    }

    ctx->pc = 0x16f680u;

    // 0x16f680: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x16f680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f684: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16f684u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f688: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16f688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16f68c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x16F68Cu;
    {
        const bool branch_taken_0x16f68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F68Cu;
        // 0x16f690: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f68c) {
            ctx->pc = 0x16F760u;
            goto label_16f760;
        }
    }
    ctx->pc = 0x16F694u;
label_16f694:
    // 0x16f694: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x16f694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f698: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x16f698u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f69c: 0x0  nop
    ctx->pc = 0x16f69cu;
    // NOP
    // 0x16f6a0: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x16F6A0u;
    {
        const bool branch_taken_0x16f6a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f6a0) {
            ctx->pc = 0x16F754u;
            goto label_16f754;
        }
    }
    ctx->pc = 0x16F6A8u;
    // 0x16f6a8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x16f6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f6ac: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f6b0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f6b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16f6b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f6bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16f6c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16F6C0u;
    {
        const bool branch_taken_0x16f6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6C0u;
        // 0x16f6c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6c0) {
            ctx->pc = 0x16F710u;
            goto label_16f710;
        }
    }
    ctx->pc = 0x16F6C8u;
label_16f6c8:
    // 0x16f6c8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x16f6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16f6cc: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x16f6ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x16f6d0: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x16f6d0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x16f6d4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16f6d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f6d8: 0x0  nop
    ctx->pc = 0x16f6d8u;
    // NOP
    // 0x16f6dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16F6DCu;
    {
        const bool branch_taken_0x16f6dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6DCu;
        // 0x16f6e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6dc) {
            ctx->pc = 0x16F6ECu;
            goto label_16f6ec;
        }
    }
    ctx->pc = 0x16F6E4u;
    // 0x16f6e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F6E4u;
    {
        const bool branch_taken_0x16f6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f6e4) {
            ctx->pc = 0x16F6F4u;
            goto label_16f6f4;
        }
    }
    ctx->pc = 0x16F6ECu;
label_16f6ec:
    // 0x16f6ec: 0x0  nop
    ctx->pc = 0x16f6ecu;
    // NOP
    // 0x16f6f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f6f4:
    // 0x16f6f4: 0x0  nop
    ctx->pc = 0x16f6f4u;
    // NOP
    // 0x16f6f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F6F8u;
    {
        const bool branch_taken_0x16f6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f6f8) {
            ctx->pc = 0x16F708u;
            goto label_16f708;
        }
    }
    ctx->pc = 0x16F700u;
    // 0x16f700: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16F700u;
    {
        const bool branch_taken_0x16f700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F700u;
        // 0x16f704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f700) {
            ctx->pc = 0x16F76Cu;
            goto label_16f76c;
        }
    }
    ctx->pc = 0x16F708u;
label_16f708:
    // 0x16f708: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16f708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16f70c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16f70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_16f710:
    // 0x16f710: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x16f710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16f714: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x16F714u;
    {
        const bool branch_taken_0x16f714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f714) {
            ctx->pc = 0x16F6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f6c8;
        }
    }
    ctx->pc = 0x16F71Cu;
    // 0x16f71c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x16f71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f720: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16f720u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f724: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16f724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16f728: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16F728u;
    {
        const bool branch_taken_0x16f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F728u;
        // 0x16f72c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f728) {
            ctx->pc = 0x16F73Cu;
            goto label_16f73c;
        }
    }
    ctx->pc = 0x16F730u;
label_16f730:
    // 0x16f730: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16f730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16f734: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x16f734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x16f738: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16f738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_16f73c:
    // 0x16f73c: 0x0  nop
    ctx->pc = 0x16f73cu;
    // NOP
    // 0x16f740: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x16f740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16f744: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16F744u;
    {
        const bool branch_taken_0x16f744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F744u;
        // 0x16f748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f744) {
            ctx->pc = 0x16F730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f730;
        }
    }
    ctx->pc = 0x16F74Cu;
    // 0x16f74c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16F74Cu;
    {
        const bool branch_taken_0x16f74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f74c) {
            ctx->pc = 0x16F76Cu;
            goto label_16f76c;
        }
    }
    ctx->pc = 0x16F754u;
label_16f754:
    // 0x16f754: 0x0  nop
    ctx->pc = 0x16f754u;
    // NOP
    // 0x16f758: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16f758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16f75c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16f75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_16f760:
    // 0x16f760: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x16f760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16f764: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x16F764u;
    {
        const bool branch_taken_0x16f764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F764u;
        // 0x16f768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f764) {
            ctx->pc = 0x16F694u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f694;
        }
    }
    ctx->pc = 0x16F76Cu;
label_16f76c:
    // 0x16f76c: 0x3e00008  jr          $ra
    ctx->pc = 0x16F76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F774u;
}
