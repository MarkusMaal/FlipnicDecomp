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

// Function: entry_0010d3c0
// Address: 0x10d3c0 - 0x10d418
void entry_0010d3c0_0x10d3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d3c0_0x10d3c0");
#endif

    switch (ctx->pc) {
        case 0x10d3e4u: goto label_10d3e4;
        default: break;
    }

    ctx->pc = 0x10d3c0u;

    // 0x10d3c0: 0x8624024e  lh          $a0, 0x24E($s1)
    ctx->pc = 0x10d3c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 590)));
    // 0x10d3c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10d3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10d3c8: 0x14830101  bne         $a0, $v1, . + 4 + (0x101 << 2)
    ctx->pc = 0x10D3C8u;
    {
        const bool branch_taken_0x10d3c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10d3c8) {
            ctx->pc = 0x10D7D0u;
            return;
        }
    }
    ctx->pc = 0x10D3D0u;
    // 0x10d3d0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x10d3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d3d4: 0x6410010  bgez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x10D3D4u;
    {
        const bool branch_taken_0x10d3d4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x10D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D3D4u;
        // 0x10d3d8: 0x8e302300  lw          $s0, 0x2300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3d4) {
            ctx->pc = 0x10D418u;
            return;
        }
    }
    ctx->pc = 0x10D3DCu;
    // 0x10d3dc: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x10D3DCu;
    SET_GPR_U32(ctx, 31, 0x10D3E4u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10D3DCu, 0x10D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D3E4u;
label_10d3e4:
    // 0x10d3e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10d3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10d3e8: 0x0  nop
    ctx->pc = 0x10d3e8u;
    // NOP
    // 0x10d3ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10d3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10d3f0: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x10d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x10d3f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d3f8: 0x0  nop
    ctx->pc = 0x10d3f8u;
    // NOP
    // 0x10d3fc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x10d3fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10d400: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x10d400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x10d404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d408: 0x0  nop
    ctx->pc = 0x10d408u;
    // NOP
    // 0x10d40c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10d40cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10d410: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10d410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10d414: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x10d414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    ctx->pc = 0x10d418u;
}
