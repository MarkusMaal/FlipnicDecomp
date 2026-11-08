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

// Function: entry_001d87d8
// Address: 0x1d87d8 - 0x1d8828
void entry_001d87d8_0x1d87d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d87d8_0x1d87d8");
#endif

    switch (ctx->pc) {
        case 0x1d87e0u: goto label_1d87e0;
        case 0x1d8814u: goto label_1d8814;
        default: break;
    }

    ctx->pc = 0x1d87d8u;

label_1d87d8:
    // 0x1d87d8: 0xc0776e2  jal         func_1DDB88
    ctx->pc = 0x1D87D8u;
    SET_GPR_U32(ctx, 31, 0x1D87E0u);
    ctx->pc = 0x1D87DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D87D8u;
    // 0x1d87dc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDB88u, 0x1D87D8u, 0x1D87E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D87E0u;
label_1d87e0:
    // 0x1d87e0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1d87e0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d87e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d87e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d87e8: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1d87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d87ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d87ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d87f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d87f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d87f4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1d87f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d87f8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1d87f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1d87fc: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1d87fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1d8800: 0x0  nop
    ctx->pc = 0x1d8800u;
    // NOP
    // 0x1d8804: 0x0  nop
    ctx->pc = 0x1d8804u;
    // NOP
    // 0x1d8808: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1d8808u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x1d880c: 0xc0776ac  jal         func_1DDAB0
    ctx->pc = 0x1D880Cu;
    SET_GPR_U32(ctx, 31, 0x1D8814u);
    ctx->pc = 0x1D8810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D880Cu;
    // 0x1d8810: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDAB0u, 0x1D880Cu, 0x1D8814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8814u;
label_1d8814:
    // 0x1d8814: 0x603fff0  bgezl       $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D8814u;
    {
        const bool branch_taken_0x1d8814 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d8814) {
            ctx->pc = 0x1D8818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8814u;
            // 0x1d8818: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D87D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d87d8;
        }
    }
    ctx->pc = 0x1D881Cu;
    // 0x1d881c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1D881Cu;
    {
        const bool branch_taken_0x1d881c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D881Cu;
        // 0x1d8820: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d881c) {
            ctx->pc = 0x1D8A88u;
            return;
        }
    }
    ctx->pc = 0x1D8824u;
    // 0x1d8824: 0x0  nop
    ctx->pc = 0x1d8824u;
    // NOP
    ctx->pc = 0x1d8828u;
}
