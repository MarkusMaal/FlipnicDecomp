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

// Function: FUN_001614f0
// Address: 0x1614f0 - 0x1615a8
void FUN_001614f0_0x1614f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001614f0_0x1614f0");
#endif

    switch (ctx->pc) {
        case 0x16152cu: goto label_16152c;
        case 0x161538u: goto label_161538;
        default: break;
    }

    ctx->pc = 0x1614f0u;

    // 0x1614f0: 0x3c080080  lui         $t0, 0x80
    ctx->pc = 0x1614f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    // 0x1614f4: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x1614f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x1614f8: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1614f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1614fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1614fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x161500: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x161500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x161504: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x161504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x161508: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x161508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x16150c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16150cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161510: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x161510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x161514: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x161514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x161518: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x161518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x16151c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x16151cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x161520: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x161520u;
    {
        const bool branch_taken_0x161520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x161524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161520u;
        // 0x161524: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161520) {
            ctx->pc = 0x1615A0u;
            goto label_1615a0;
        }
    }
    ctx->pc = 0x161528u;
    // 0x161528: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x161528u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16152c:
    // 0x16152c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x16152cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161530: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x161530u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161534: 0xcc4021  addu        $t0, $a2, $t4
    ctx->pc = 0x161534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_161538:
    // 0x161538: 0x10b1821  addu        $v1, $t0, $t3
    ctx->pc = 0x161538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x16153c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x16153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161540: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x161540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x161544: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x161544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161548: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161548u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16154c: 0x0  nop
    ctx->pc = 0x16154cu;
    // NOP
    // 0x161550: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x161550u;
    {
        const bool branch_taken_0x161550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161550) {
            ctx->pc = 0x16155Cu;
            goto label_16155c;
        }
    }
    ctx->pc = 0x161558u;
    // 0x161558: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x161558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_16155c:
    // 0x16155c: 0x0  nop
    ctx->pc = 0x16155cu;
    // NOP
    // 0x161560: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x161560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x161564: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x161564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161568: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x161568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16156c: 0x0  nop
    ctx->pc = 0x16156cu;
    // NOP
    // 0x161570: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x161570u;
    {
        const bool branch_taken_0x161570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161570) {
            ctx->pc = 0x16157Cu;
            goto label_16157c;
        }
    }
    ctx->pc = 0x161578u;
    // 0x161578: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x161578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_16157c:
    // 0x16157c: 0x0  nop
    ctx->pc = 0x16157cu;
    // NOP
    // 0x161580: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x161580u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x161584: 0x29430003  slti        $v1, $t2, 0x3
    ctx->pc = 0x161584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x161588: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x161588u;
    {
        const bool branch_taken_0x161588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161588u;
        // 0x16158c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161588) {
            ctx->pc = 0x161538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161538;
        }
    }
    ctx->pc = 0x161590u;
    // 0x161590: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x161590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x161594: 0x127182a  slt         $v1, $t1, $a3
    ctx->pc = 0x161594u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x161598: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x161598u;
    {
        const bool branch_taken_0x161598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161598u;
        // 0x16159c: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161598) {
            ctx->pc = 0x16152Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16152c;
        }
    }
    ctx->pc = 0x1615A0u;
label_1615a0:
    // 0x1615a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1615A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1615A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1615A8u;
}
