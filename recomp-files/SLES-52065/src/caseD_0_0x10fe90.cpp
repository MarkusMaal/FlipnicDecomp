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

// Function: caseD_0
// Address: 0x10fe90 - 0x10fee8
void caseD_0_0x10fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x10fe90");
#endif

    switch (ctx->pc) {
        case 0x10fea8u: goto label_10fea8;
        default: break;
    }

    ctx->pc = 0x10fe90u;

    // 0x10fe90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10fe90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fe94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fe94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10fe98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10fe9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fea0: 0xc043ea4  jal         func_10FA90
    ctx->pc = 0x10FEA0u;
    SET_GPR_U32(ctx, 31, 0x10FEA8u);
    ctx->pc = 0x10FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEA0u;
    // 0x10fea4: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA90u, 0x10FEA0u, 0x10FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEA8u;
label_10fea8:
    // 0x10fea8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x10fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10feac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10feacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10feb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10feb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10feb4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x10feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10feb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10feb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10febc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10fec0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10fec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10fec4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10fec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10fec8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x10fec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10fecc: 0x0  nop
    ctx->pc = 0x10feccu;
    // NOP
    // 0x10fed0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x10fed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10fed4: 0x102000f3  beqz        $at, . + 4 + (0xF3 << 2)
    ctx->pc = 0x10FED4u;
    {
        const bool branch_taken_0x10fed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FED4u;
        // 0x10fed8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fed4) {
            ctx->pc = 0x1102A4u;
            return;
        }
    }
    ctx->pc = 0x10FEDCu;
    // 0x10fedc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10fedcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fee0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10FEE0u;
    {
        const bool branch_taken_0x10fee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEE0u;
        // 0x10fee4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fee0) {
            ctx->pc = 0x10FF18u;
            return;
        }
    }
    ctx->pc = 0x10FEE8u;
}
