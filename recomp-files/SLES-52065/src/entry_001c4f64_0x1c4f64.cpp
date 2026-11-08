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

// Function: entry_001c4f64
// Address: 0x1c4f64 - 0x1c4fac
void entry_001c4f64_0x1c4f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4f64_0x1c4f64");
#endif

    switch (ctx->pc) {
        case 0x1c4fa4u: goto label_1c4fa4;
        default: break;
    }

    ctx->pc = 0x1c4f64u;

    // 0x1c4f64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4f68: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x1c4f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1c4f6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c4f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c4f70: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1c4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1c4f74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4f78: 0x0  nop
    ctx->pc = 0x1c4f78u;
    // NOP
    // 0x1c4f7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c4f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c4f80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c4f84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c4f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c4f88: 0x0  nop
    ctx->pc = 0x1c4f88u;
    // NOP
    // 0x1c4f8c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1c4f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c4f90: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4F90u;
    {
        const bool branch_taken_0x1c4f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F90u;
        // 0x1c4f94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f90) {
            ctx->pc = 0x1C4FB4u;
            return;
        }
    }
    ctx->pc = 0x1C4F98u;
    // 0x1c4f98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f9c: 0xc0713f8  jal         func_1C4FE0
    ctx->pc = 0x1C4F9Cu;
    SET_GPR_U32(ctx, 31, 0x1C4FA4u);
    ctx->pc = 0x1C4FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F9Cu;
    // 0x1c4fa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FE0u, 0x1C4F9Cu, 0x1C4FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FA4u;
label_1c4fa4:
    // 0x1c4fa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4FA4u;
    {
        const bool branch_taken_0x1c4fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FA4u;
        // 0x1c4fa8: 0xae600074  sw          $zero, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fa4) {
            ctx->pc = 0x1C4FB0u;
            return;
        }
    }
    ctx->pc = 0x1C4FACu;
}
