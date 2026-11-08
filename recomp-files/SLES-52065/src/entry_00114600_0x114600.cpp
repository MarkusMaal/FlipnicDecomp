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

// Function: entry_00114600
// Address: 0x114600 - 0x114648
void entry_00114600_0x114600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114600_0x114600");
#endif

    switch (ctx->pc) {
        case 0x114634u: goto label_114634;
        default: break;
    }

    ctx->pc = 0x114600u;

label_114600:
    // 0x114600: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x114600u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_114604:
    // 0x114604: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x114604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_114608:
    // 0x114608: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x114608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_11460c:
    // 0x11460c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11460cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_114610:
    // 0x114610: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x114610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_114614:
    // 0x114614: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x114614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_114618:
    // 0x114618: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x114618u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_11461c:
    // 0x11461c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x11461cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_114620:
    // 0x114620: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x114620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_114624:
    // 0x114624: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x114624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_114628:
    // 0x114628: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x114628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_11462c:
    // 0x11462c: 0x320f809  jalr        $t9
label_114630:
    if (ctx->pc == 0x114630u) {
        ctx->pc = 0x114630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11462Cu;
        // 0x114630: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114634u;
        goto label_114634;
    }
    ctx->pc = 0x11462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114634u);
        ctx->pc = 0x114630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11462Cu;
        // 0x114630: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11462Cu, 0x114634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114634u;
label_114634:
    // 0x114634: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x114634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_114638:
    // 0x114638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11463c:
    // 0x11463c: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x11463cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_114640:
    // 0x114640: 0x320f809  jalr        $t9
label_114644:
    if (ctx->pc == 0x114644u) {
        ctx->pc = 0x114644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114640u;
        // 0x114644: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114648u;
        goto label_fallthrough_0x114640;
    }
    ctx->pc = 0x114640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114648u);
        ctx->pc = 0x114644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114640u;
        // 0x114644: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114640u, 0x114648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x114640:
    ctx->pc = 0x114648u;
}
