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

// Function: entry_0016227c
// Address: 0x16227c - 0x162318
void entry_0016227c_0x16227c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016227c_0x16227c");
#endif

    switch (ctx->pc) {
        case 0x16229cu: goto label_16229c;
        default: break;
    }

    ctx->pc = 0x16227cu;

    // 0x16227c: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x16227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x162280: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x162280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x162284: 0x2a24021  addu        $t0, $s5, $v0
    ctx->pc = 0x162284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x162288: 0x2024821  addu        $t1, $s0, $v0
    ctx->pc = 0x162288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x16228c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16228cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162290: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x162290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x162294: 0xc054a14  jal         func_152850
    ctx->pc = 0x162294u;
    SET_GPR_U32(ctx, 31, 0x16229Cu);
    ctx->pc = 0x162298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162294u;
    // 0x162298: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152850u, 0x162294u, 0x16229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16229Cu;
label_16229c:
    // 0x16229c: 0xae220338  sw          $v0, 0x338($s1)
    ctx->pc = 0x16229cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
    // 0x1622a0: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x1622a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x1622a4: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1622A4u;
    {
        const bool branch_taken_0x1622a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1622a4) {
            ctx->pc = 0x162318u;
            return;
        }
    }
    ctx->pc = 0x1622ACu;
    // 0x1622ac: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1622acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1622b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1622b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1622b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1622b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1622b8: 0x0  nop
    ctx->pc = 0x1622b8u;
    // NOP
    // 0x1622bc: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x1622bcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x1622c0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1622c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1622c4: 0x0  nop
    ctx->pc = 0x1622c4u;
    // NOP
    // 0x1622c8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1622C8u;
    {
        const bool branch_taken_0x1622c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1622c8) {
            ctx->pc = 0x162318u;
            return;
        }
    }
    ctx->pc = 0x1622D0u;
    // 0x1622d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1622d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1622d4: 0x0  nop
    ctx->pc = 0x1622d4u;
    // NOP
    // 0x1622d8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1622d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1622dc: 0x0  nop
    ctx->pc = 0x1622dcu;
    // NOP
    // 0x1622e0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1622E0u;
    {
        const bool branch_taken_0x1622e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1622e0) {
            ctx->pc = 0x162318u;
            return;
        }
    }
    ctx->pc = 0x1622E8u;
    // 0x1622e8: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1622e8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1622ec: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1622ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1622f0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1622f0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1622f4: 0x0  nop
    ctx->pc = 0x1622f4u;
    // NOP
    // 0x1622f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1622f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1622fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1622fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162300: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x162300u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x162304: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x162304u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x162308: 0x0  nop
    ctx->pc = 0x162308u;
    // NOP
    // 0x16230c: 0x0  nop
    ctx->pc = 0x16230cu;
    // NOP
    // 0x162310: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x162310u;
    {
        const bool branch_taken_0x162310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162310u;
        // 0x162314: 0xe62002e8  swc1        $f0, 0x2E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162310) {
            ctx->pc = 0x162330u;
            return;
        }
    }
    ctx->pc = 0x162318u;
}
