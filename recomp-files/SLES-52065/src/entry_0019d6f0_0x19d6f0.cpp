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

// Function: entry_0019d6f0
// Address: 0x19d6f0 - 0x19d738
void entry_0019d6f0_0x19d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d6f0_0x19d6f0");
#endif

    switch (ctx->pc) {
        case 0x19d72cu: goto label_19d72c;
        default: break;
    }

    ctx->pc = 0x19d6f0u;

    // 0x19d6f0: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x19d6f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19d6f4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x19D6F4u;
    {
        const bool branch_taken_0x19d6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d6f4) {
            ctx->pc = 0x19D6D0u;
            return;
        }
    }
    ctx->pc = 0x19D6FCu;
    // 0x19d6fc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x19D6FCu;
    {
        const bool branch_taken_0x19d6fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d6fc) {
            ctx->pc = 0x19D738u;
            return;
        }
    }
    ctx->pc = 0x19D704u;
    // 0x19d704: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x19d704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d708: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19d70c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19d70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19d710: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19d710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d714: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19d714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19d718: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19d718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19d71c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19d71cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19d720: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19d720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x19d724: 0xc063de0  jal         func_18F780
    ctx->pc = 0x19D724u;
    SET_GPR_U32(ctx, 31, 0x19D72Cu);
    ctx->pc = 0x19D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D724u;
    // 0x19d728: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x19D724u, 0x19D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D72Cu;
label_19d72c:
    // 0x19d72c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19d72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d730: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19D730u;
    SET_GPR_U32(ctx, 31, 0x19D738u);
    ctx->pc = 0x19D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D730u;
    // 0x19d734: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19D730u, 0x19D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D738u;
}
