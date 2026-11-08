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

// Function: caseD_c
// Address: 0x1aed64 - 0x1aedb8
void caseD_c_0x1aed64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1aed64");
#endif

    switch (ctx->pc) {
        case 0x1aed9cu: goto label_1aed9c;
        case 0x1aeda4u: goto label_1aeda4;
        case 0x1aedb0u: goto label_1aedb0;
        default: break;
    }

    ctx->pc = 0x1aed64u;

    // 0x1aed64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aed64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aed68: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1aed68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1aed6c: 0xae8307a4  sw          $v1, 0x7A4($s4)
    ctx->pc = 0x1aed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1956), GPR_U32(ctx, 3));
    // 0x1aed70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aed70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aed74: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1aed74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aed78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aed78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aed7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aed7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aed80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aed80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1aed84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1aed84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1aed88: 0x0  nop
    ctx->pc = 0x1aed88u;
    // NOP
    // 0x1aed8c: 0xae8207a8  sw          $v0, 0x7A8($s4)
    ctx->pc = 0x1aed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1960), GPR_U32(ctx, 2));
    // 0x1aed90: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1aed90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1aed94: 0xc054660  jal         func_151980
    ctx->pc = 0x1AED94u;
    SET_GPR_U32(ctx, 31, 0x1AED9Cu);
    ctx->pc = 0x1AED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED94u;
    // 0x1aed98: 0x26840790  addiu       $a0, $s4, 0x790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1AED94u, 0x1AED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED9Cu;
label_1aed9c:
    // 0x1aed9c: 0xc069ae8  jal         func_1A6BA0
    ctx->pc = 0x1AED9Cu;
    SET_GPR_U32(ctx, 31, 0x1AEDA4u);
    ctx->pc = 0x1AEDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED9Cu;
    // 0x1aeda0: 0x268406d0  addiu       $a0, $s4, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BA0u, 0x1AED9Cu, 0x1AEDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDA4u;
label_1aeda4:
    // 0x1aeda4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aeda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeda8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AEDA8u;
    SET_GPR_U32(ctx, 31, 0x1AEDB0u);
    ctx->pc = 0x1AEDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEDA8u;
    // 0x1aedac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEDA8u, 0x1AEDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDB0u;
label_1aedb0:
    // 0x1aedb0: 0x1000fe08  b           . + 4 + (-0x1F8 << 2)
    ctx->pc = 0x1AEDB0u;
    {
        const bool branch_taken_0x1aedb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDB0u;
        // 0x1aedb4: 0xa28006b8  sb          $zero, 0x6B8($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedb0) {
            ctx->pc = 0x1AE5D4u;
            return;
        }
    }
    ctx->pc = 0x1AEDB8u;
}
