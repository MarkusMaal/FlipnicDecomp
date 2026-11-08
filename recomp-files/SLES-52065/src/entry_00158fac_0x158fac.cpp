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

// Function: entry_00158fac
// Address: 0x158fac - 0x158fe4
void entry_00158fac_0x158fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158fac_0x158fac");
#endif

    switch (ctx->pc) {
        case 0x158fc4u: goto label_158fc4;
        default: break;
    }

    ctx->pc = 0x158facu;

    // 0x158fac: 0xc4810200  lwc1        $f1, 0x200($a0)
    ctx->pc = 0x158facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158fb0: 0xc4a001c0  lwc1        $f0, 0x1C0($a1)
    ctx->pc = 0x158fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158fb4: 0x248401e0  addiu       $a0, $a0, 0x1E0
    ctx->pc = 0x158fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    // 0x158fb8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x158fb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x158fbc: 0xc054d0c  jal         func_153430
    ctx->pc = 0x158FBCu;
    SET_GPR_U32(ctx, 31, 0x158FC4u);
    ctx->pc = 0x158FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158FBCu;
    // 0x158fc0: 0x24a50210  addiu       $a1, $a1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153430u, 0x158FBCu, 0x158FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158FC4u;
label_158fc4:
    // 0x158fc4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x158fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158fc8: 0x0  nop
    ctx->pc = 0x158fc8u;
    // NOP
    // 0x158fcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158fd0: 0x0  nop
    ctx->pc = 0x158fd0u;
    // NOP
    // 0x158fd4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x158FD4u;
    {
        const bool branch_taken_0x158fd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FD4u;
        // 0x158fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fd4) {
            ctx->pc = 0x158FE4u;
            return;
        }
    }
    ctx->pc = 0x158FDCu;
    // 0x158fdc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x158FDCu;
    {
        const bool branch_taken_0x158fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FDCu;
        // 0x158fe0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fdc) {
            ctx->pc = 0x158FE4u;
            return;
        }
    }
    ctx->pc = 0x158FE4u;
}
