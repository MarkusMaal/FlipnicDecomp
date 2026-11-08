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

// Function: entry_00162904
// Address: 0x162904 - 0x162980
void entry_00162904_0x162904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162904_0x162904");
#endif

    switch (ctx->pc) {
        case 0x16290cu: goto label_16290c;
        default: break;
    }

    ctx->pc = 0x162904u;

    // 0x162904: 0xc055c70  jal         func_1571C0
    ctx->pc = 0x162904u;
    SET_GPR_U32(ctx, 31, 0x16290Cu);
    ctx->pc = 0x162908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162904u;
    // 0x162908: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1571C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1571C0u, 0x162904u, 0x16290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16290Cu;
label_16290c:
    // 0x16290c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16290cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x162910: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x162910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x162914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162918: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x162918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16291c: 0xc4410134  lwc1        $f1, 0x134($v0)
    ctx->pc = 0x16291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162920: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x162920u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x162924: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x162924u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x162928: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x162928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x16292c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16292cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x162930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162934: 0x0  nop
    ctx->pc = 0x162934u;
    // NOP
    // 0x162938: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x162938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16293c: 0x0  nop
    ctx->pc = 0x16293cu;
    // NOP
    // 0x162940: 0x45000068  bc1f        . + 4 + (0x68 << 2)
    ctx->pc = 0x162940u;
    {
        const bool branch_taken_0x162940 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162940u;
        // 0x162944: 0x3c033fb3  lui         $v1, 0x3FB3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162940) {
            ctx->pc = 0x162AE4u;
            return;
        }
    }
    ctx->pc = 0x162948u;
    // 0x162948: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16294c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x16294cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x162950: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x162950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162958: 0x0  nop
    ctx->pc = 0x162958u;
    // NOP
    // 0x16295c: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x16295cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[21]); }
    // 0x162960: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x162960u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x162964: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162968: 0x0  nop
    ctx->pc = 0x162968u;
    // NOP
    // 0x16296c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x16296cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162970: 0x0  nop
    ctx->pc = 0x162970u;
    // NOP
    // 0x162974: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x162974u;
    {
        const bool branch_taken_0x162974 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x162978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162974u;
        // 0x162978: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162974) {
            ctx->pc = 0x162980u;
            return;
        }
    }
    ctx->pc = 0x16297Cu;
    // 0x16297c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x16297cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x162980u;
}
