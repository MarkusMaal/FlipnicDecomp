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

// Function: entry_0016c2d8
// Address: 0x16c2d8 - 0x16c338
void entry_0016c2d8_0x16c2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c2d8_0x16c2d8");
#endif

    switch (ctx->pc) {
        case 0x16c30cu: goto label_16c30c;
        case 0x16c320u: goto label_16c320;
        case 0x16c32cu: goto label_16c32c;
        default: break;
    }

    ctx->pc = 0x16c2d8u;

label_16c2d8:
    // 0x16c2d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16c2d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c2dc:
    // 0x16c2dc: 0x0  nop
    ctx->pc = 0x16c2dcu;
    // NOP
label_16c2e0:
    // 0x16c2e0: 0x0  nop
    ctx->pc = 0x16c2e0u;
    // NOP
label_16c2e4:
    // 0x16c2e4: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
label_16c2e8:
    if (ctx->pc == 0x16C2E8u) {
        ctx->pc = 0x16C2ECu;
        goto label_16c2ec;
    }
    ctx->pc = 0x16C2E4u;
    {
        const bool branch_taken_0x16c2e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c2e4) {
            ctx->pc = 0x16C2D4u;
            return;
        }
    }
    ctx->pc = 0x16C2ECu;
label_16c2ec:
    // 0x16c2ec: 0xc6210228  lwc1        $f1, 0x228($s1)
    ctx->pc = 0x16c2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16c2f0:
    // 0x16c2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c2f4:
    // 0x16c2f4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16c2f4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_16c2f8:
    // 0x16c2f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16c2f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_16c2fc:
    // 0x16c2fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16c2fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16c300:
    // 0x16c300: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16c300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16c304:
    // 0x16c304: 0xc055c40  jal         func_157100
label_16c308:
    if (ctx->pc == 0x16C308u) {
        ctx->pc = 0x16C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C304u;
        // 0x16c308: 0xe6200224  swc1        $f0, 0x224($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C30Cu;
        goto label_16c30c;
    }
    ctx->pc = 0x16C304u;
    SET_GPR_U32(ctx, 31, 0x16C30Cu);
    ctx->pc = 0x16C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C304u;
    // 0x16c308: 0xe6200224  swc1        $f0, 0x224($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16C304u, 0x16C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C30Cu;
label_16c30c:
    // 0x16c30c: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16c30cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16c310:
    // 0x16c310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c314:
    // 0x16c314: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16c314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16c318:
    // 0x16c318: 0x320f809  jalr        $t9
label_16c31c:
    if (ctx->pc == 0x16C31Cu) {
        ctx->pc = 0x16C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C318u;
        // 0x16c31c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C320u;
        goto label_16c320;
    }
    ctx->pc = 0x16C318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C320u);
        ctx->pc = 0x16C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C318u;
        // 0x16c31c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C318u, 0x16C320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16C320u;
label_16c320:
    // 0x16c320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c324:
    // 0x16c324: 0xc042118  jal         func_108460
label_16c328:
    if (ctx->pc == 0x16C328u) {
        ctx->pc = 0x16C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C324u;
        // 0x16c328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C32Cu;
        goto label_16c32c;
    }
    ctx->pc = 0x16C324u;
    SET_GPR_U32(ctx, 31, 0x16C32Cu);
    ctx->pc = 0x16C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C324u;
    // 0x16c328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16C324u, 0x16C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C32Cu;
label_16c32c:
    // 0x16c32c: 0xae300230  sw          $s0, 0x230($s1)
    ctx->pc = 0x16c32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 16));
label_16c330:
    // 0x16c330: 0x1000000a  b           . + 4 + (0xA << 2)
label_16c334:
    if (ctx->pc == 0x16C334u) {
        ctx->pc = 0x16C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C330u;
        // 0x16c334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16C338u;
        goto label_fallthrough_0x16c330;
    }
    ctx->pc = 0x16C330u;
    {
        const bool branch_taken_0x16c330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C330u;
        // 0x16c334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c330) {
            ctx->pc = 0x16C35Cu;
            return;
        }
    }
label_fallthrough_0x16c330:
    ctx->pc = 0x16C338u;
}
