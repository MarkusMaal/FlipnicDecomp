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

// Function: entry_00199878
// Address: 0x199878 - 0x1998b0
void entry_00199878_0x199878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199878_0x199878");
#endif

    switch (ctx->pc) {
        case 0x199880u: goto label_199880;
        case 0x1998a8u: goto label_1998a8;
        default: break;
    }

    ctx->pc = 0x199878u;

    // 0x199878: 0xc063e08  jal         func_18F820
    ctx->pc = 0x199878u;
    SET_GPR_U32(ctx, 31, 0x199880u);
    ctx->pc = 0x19987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199878u;
    // 0x19987c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x199878u, 0x199880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199880u;
label_199880:
    // 0x199880: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x199880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199884: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x199884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x199888: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x199888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19988c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19988cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x199894: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x199894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x199898: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x199898u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19989c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19989cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1998a0: 0xc063de0  jal         func_18F780
    ctx->pc = 0x1998A0u;
    SET_GPR_U32(ctx, 31, 0x1998A8u);
    ctx->pc = 0x1998A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1998A0u;
    // 0x1998a4: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x1998A0u, 0x1998A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998A8u;
label_1998a8:
    // 0x1998a8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1998A8u;
    {
        const bool branch_taken_0x1998a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1998a8) {
            ctx->pc = 0x19993Cu;
            return;
        }
    }
    ctx->pc = 0x1998B0u;
}
