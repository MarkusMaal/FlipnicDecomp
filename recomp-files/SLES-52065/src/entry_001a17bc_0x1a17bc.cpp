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

// Function: entry_001a17bc
// Address: 0x1a17bc - 0x1a1800
void entry_001a17bc_0x1a17bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a17bc_0x1a17bc");
#endif

    switch (ctx->pc) {
        case 0x1a17f8u: goto label_1a17f8;
        default: break;
    }

    ctx->pc = 0x1a17bcu;

    // 0x1a17bc: 0x8e84069c  lw          $a0, 0x69C($s4)
    ctx->pc = 0x1a17bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
    // 0x1a17c0: 0x8e830698  lw          $v1, 0x698($s4)
    ctx->pc = 0x1a17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
    // 0x1a17c4: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x1a17c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1a17c8: 0x1483010e  bne         $a0, $v1, . + 4 + (0x10E << 2)
    ctx->pc = 0x1A17C8u;
    {
        const bool branch_taken_0x1a17c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a17c8) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A17D0u;
    // 0x1a17d0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a17d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a17d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a17d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a17d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a17dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a17dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a17e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a17e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a17e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a17e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a17e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a17ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a17ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a17f0: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A17F0u;
    SET_GPR_U32(ctx, 31, 0x1A17F8u);
    ctx->pc = 0x1A17F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A17F0u;
    // 0x1a17f4: 0xae820688  sw          $v0, 0x688($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A17F0u, 0x1A17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A17F8u;
label_1a17f8:
    // 0x1a17f8: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x1A17F8u;
    {
        const bool branch_taken_0x1a17f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a17f8) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A1800u;
}
