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

// Function: entry_00115ac8
// Address: 0x115ac8 - 0x115b14
void entry_00115ac8_0x115ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115ac8_0x115ac8");
#endif

    switch (ctx->pc) {
        case 0x115ae4u: goto label_115ae4;
        default: break;
    }

    ctx->pc = 0x115ac8u;

    // 0x115ac8: 0x8e420254  lw          $v0, 0x254($s2)
    ctx->pc = 0x115ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x115acc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x115accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x115ad0: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x115ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
    // 0x115ad4: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x115AD4u;
    {
        const bool branch_taken_0x115ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x115AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AD4u;
        // 0x115ad8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ad4) {
            ctx->pc = 0x115B48u;
            return;
        }
    }
    ctx->pc = 0x115ADCu;
    // 0x115adc: 0xc042570  jal         func_1095C0
    ctx->pc = 0x115ADCu;
    SET_GPR_U32(ctx, 31, 0x115AE4u);
    ctx->pc = 0x115AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115ADCu;
    // 0x115ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x115ADCu, 0x115AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115AE4u;
label_115ae4:
    // 0x115ae4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115ae8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x115ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x115aec: 0xa24301d3  sb          $v1, 0x1D3($s2)
    ctx->pc = 0x115aecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 3));
    // 0x115af0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x115af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115af4: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x115af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115af8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x115af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x115afc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x115afcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x115b00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x115b00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x115b04: 0x0  nop
    ctx->pc = 0x115b04u;
    // NOP
    // 0x115b08: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x115B08u;
    {
        const bool branch_taken_0x115b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115b08) {
            ctx->pc = 0x115B14u;
            return;
        }
    }
    ctx->pc = 0x115B10u;
    // 0x115b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x115b14u;
}
