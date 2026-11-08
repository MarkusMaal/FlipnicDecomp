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

// Function: entry_001a4800
// Address: 0x1a4800 - 0x1a4838
void entry_001a4800_0x1a4800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4800_0x1a4800");
#endif

    switch (ctx->pc) {
        case 0x1a4808u: goto label_1a4808;
        default: break;
    }

    ctx->pc = 0x1a4800u;

    // 0x1a4800: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A4800u;
    SET_GPR_U32(ctx, 31, 0x1A4808u);
    ctx->pc = 0x1A4804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4800u;
    // 0x1a4804: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A4800u, 0x1A4808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4808u;
label_1a4808:
    // 0x1a4808: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1a4808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a480c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1a480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1a4810: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a4814: 0x0  nop
    ctx->pc = 0x1a4814u;
    // NOP
    // 0x1a4818: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a4818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a481c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a481cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a4820: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1a4820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1a4824: 0x0  nop
    ctx->pc = 0x1a4824u;
    // NOP
    // 0x1a4828: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4828u;
    {
        const bool branch_taken_0x1a4828 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4828u;
        // 0x1a482c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4828) {
            ctx->pc = 0x1A4838u;
            return;
        }
    }
    ctx->pc = 0x1A4830u;
    // 0x1a4830: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a4830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a4834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a4838u;
}
