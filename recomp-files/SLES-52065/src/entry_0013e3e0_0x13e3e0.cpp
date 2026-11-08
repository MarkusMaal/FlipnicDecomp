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

// Function: entry_0013e3e0
// Address: 0x13e3e0 - 0x13e470
void entry_0013e3e0_0x13e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e3e0_0x13e3e0");
#endif

    switch (ctx->pc) {
        case 0x13e410u: goto label_13e410;
        default: break;
    }

    ctx->pc = 0x13e3e0u;

label_13e3e0:
    // 0x13e3e0: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x13e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
label_13e3e4:
    // 0x13e3e4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_13e3e8:
    // 0x13e3e8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x13e3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e3ec:
    // 0x13e3ec: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_13e3f0:
    if (ctx->pc == 0x13E3F0u) {
        ctx->pc = 0x13E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3ECu;
        // 0x13e3f0: 0x27b700f0  addiu       $s7, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E3F4u;
        goto label_13e3f4;
    }
    ctx->pc = 0x13E3ECu;
    {
        const bool branch_taken_0x13e3ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3ECu;
        // 0x13e3f0: 0x27b700f0  addiu       $s7, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3ec) {
            ctx->pc = 0x13E470u;
            return;
        }
    }
    ctx->pc = 0x13E3F4u;
label_13e3f4:
    // 0x13e3f4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e3f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e3f8:
    // 0x13e3f8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x13e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_13e3fc:
    // 0x13e3fc: 0x8f3900e8  lw          $t9, 0xE8($t9)
    ctx->pc = 0x13e3fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 232)));
label_13e400:
    // 0x13e400: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_13e404:
    // 0x13e404: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13e404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e408:
    // 0x13e408: 0x320f809  jalr        $t9
label_13e40c:
    if (ctx->pc == 0x13E40Cu) {
        ctx->pc = 0x13E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E408u;
        // 0x13e40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E410u;
        goto label_13e410;
    }
    ctx->pc = 0x13E408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E410u);
        ctx->pc = 0x13E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E408u;
        // 0x13e40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E408u, 0x13E410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E410u;
label_13e410:
    // 0x13e410: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x13e410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_13e414:
    // 0x13e414: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x13e414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_13e418:
    // 0x13e418: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x13e418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_13e41c:
    // 0x13e41c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e420:
    // 0x13e420: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13e420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e424:
    // 0x13e424: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x13e424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_13e428:
    // 0x13e428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13e42c:
    // 0x13e42c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x13e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_13e430:
    // 0x13e430: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x13e430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13e434:
    // 0x13e434: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x13e434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13e438:
    // 0x13e438: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x13e438u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
label_13e43c:
    // 0x13e43c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13e43cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_13e440:
    // 0x13e440: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x13e440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_13e444:
    // 0x13e444: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x13e444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_13e448:
    // 0x13e448: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x13e448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_13e44c:
    // 0x13e44c: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x13e44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_13e450:
    // 0x13e450: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x13e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_13e454:
    // 0x13e454: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e458:
    // 0x13e458: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_13e45c:
    // 0x13e45c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x13e45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13e460:
    // 0x13e460: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13e460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13e464:
    // 0x13e464: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x13e464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_13e468:
    // 0x13e468: 0x320f809  jalr        $t9
label_13e46c:
    if (ctx->pc == 0x13E46Cu) {
        ctx->pc = 0x13E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E468u;
        // 0x13e46c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E470u;
        goto label_fallthrough_0x13e468;
    }
    ctx->pc = 0x13E468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E470u);
        ctx->pc = 0x13E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E468u;
        // 0x13e46c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E468u, 0x13E470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13e468:
    ctx->pc = 0x13E470u;
}
