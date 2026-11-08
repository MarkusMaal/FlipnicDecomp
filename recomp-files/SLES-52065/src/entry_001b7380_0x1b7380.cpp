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

// Function: entry_001b7380
// Address: 0x1b7380 - 0x1b73c4
void entry_001b7380_0x1b7380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7380_0x1b7380");
#endif

    switch (ctx->pc) {
        case 0x1b73bcu: goto label_1b73bc;
        default: break;
    }

    ctx->pc = 0x1b7380u;

    // 0x1b7380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7384: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x1b7384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1b7388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b738c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x1b738cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x1b7390: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b7390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7394: 0x0  nop
    ctx->pc = 0x1b7394u;
    // NOP
    // 0x1b7398: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b739c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b739cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b73a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b73a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b73a4: 0x0  nop
    ctx->pc = 0x1b73a4u;
    // NOP
    // 0x1b73a8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b73a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b73ac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B73ACu;
    {
        const bool branch_taken_0x1b73ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b73ac) {
            ctx->pc = 0x1B73C8u;
            return;
        }
    }
    ctx->pc = 0x1B73B4u;
    // 0x1b73b4: 0xc06d8f4  jal         func_1B63D0
    ctx->pc = 0x1B73B4u;
    SET_GPR_U32(ctx, 31, 0x1B73BCu);
    ctx->pc = 0x1B73B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B73B4u;
    // 0x1b73b8: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B63D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B63D0u, 0x1B73B4u, 0x1B73BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B73BCu;
label_1b73bc:
    // 0x1b73bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B73BCu;
    {
        const bool branch_taken_0x1b73bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73BCu;
        // 0x1b73c0: 0x8e710034  lw          $s1, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73bc) {
            ctx->pc = 0x1B73CCu;
            return;
        }
    }
    ctx->pc = 0x1B73C4u;
}
