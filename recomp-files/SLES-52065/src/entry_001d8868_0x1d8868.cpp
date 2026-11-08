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

// Function: entry_001d8868
// Address: 0x1d8868 - 0x1d88b8
void entry_001d8868_0x1d8868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8868_0x1d8868");
#endif

    switch (ctx->pc) {
        case 0x1d8870u: goto label_1d8870;
        case 0x1d88a4u: goto label_1d88a4;
        default: break;
    }

    ctx->pc = 0x1d8868u;

label_1d8868:
    // 0x1d8868: 0xc0776d8  jal         func_1DDB60
    ctx->pc = 0x1D8868u;
    SET_GPR_U32(ctx, 31, 0x1D8870u);
    ctx->pc = 0x1D886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8868u;
    // 0x1d886c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDB60u, 0x1D8868u, 0x1D8870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8870u;
label_1d8870:
    // 0x1d8870: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1d8870u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d8874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d8878: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1d8878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d887c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d887cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d8880: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8884: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1d8884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d8888: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1d8888u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1d888c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1d888cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1d8890: 0x0  nop
    ctx->pc = 0x1d8890u;
    // NOP
    // 0x1d8894: 0x0  nop
    ctx->pc = 0x1d8894u;
    // NOP
    // 0x1d8898: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1d8898u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x1d889c: 0xc077688  jal         func_1DDA20
    ctx->pc = 0x1D889Cu;
    SET_GPR_U32(ctx, 31, 0x1D88A4u);
    ctx->pc = 0x1D88A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D889Cu;
    // 0x1d88a0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDA20u, 0x1D889Cu, 0x1D88A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D88A4u;
label_1d88a4:
    // 0x1d88a4: 0x603fff0  bgezl       $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D88A4u;
    {
        const bool branch_taken_0x1d88a4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d88a4) {
            ctx->pc = 0x1D88A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D88A4u;
            // 0x1d88a8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8868;
        }
    }
    ctx->pc = 0x1D88ACu;
    // 0x1d88ac: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1D88ACu;
    {
        const bool branch_taken_0x1d88ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88ACu;
        // 0x1d88b0: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d88ac) {
            ctx->pc = 0x1D8A88u;
            return;
        }
    }
    ctx->pc = 0x1D88B4u;
    // 0x1d88b4: 0x0  nop
    ctx->pc = 0x1d88b4u;
    // NOP
    ctx->pc = 0x1d88b8u;
}
