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

// Function: entry_0016b3a8
// Address: 0x16b3a8 - 0x16b3d4
void entry_0016b3a8_0x16b3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b3a8_0x16b3a8");
#endif

    switch (ctx->pc) {
        case 0x16b3b4u: goto label_16b3b4;
        default: break;
    }

    ctx->pc = 0x16b3a8u;

    // 0x16b3a8: 0xc62c0248  lwc1        $f12, 0x248($s1)
    ctx->pc = 0x16b3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16b3ac: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16B3ACu;
    SET_GPR_U32(ctx, 31, 0x16B3B4u);
    ctx->pc = 0x16B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3ACu;
    // 0x16b3b0: 0x26240220  addiu       $a0, $s1, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16B3ACu, 0x16B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3B4u;
label_16b3b4:
    // 0x16b3b4: 0xe6200238  swc1        $f0, 0x238($s1)
    ctx->pc = 0x16b3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    // 0x16b3b8: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x16b3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16b3bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16b3bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b3c0: 0x0  nop
    ctx->pc = 0x16b3c0u;
    // NOP
    // 0x16b3c4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16B3C4u;
    {
        const bool branch_taken_0x16b3c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b3c4) {
            ctx->pc = 0x16B3D4u;
            return;
        }
    }
    ctx->pc = 0x16B3CCu;
    // 0x16b3cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16B3CCu;
    {
        const bool branch_taken_0x16b3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3CCu;
        // 0x16b3d0: 0xe6210238  swc1        $f1, 0x238($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b3cc) {
            ctx->pc = 0x16B3ECu;
            return;
        }
    }
    ctx->pc = 0x16B3D4u;
}
