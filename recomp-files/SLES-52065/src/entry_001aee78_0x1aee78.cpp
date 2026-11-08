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

// Function: entry_001aee78
// Address: 0x1aee78 - 0x1aeea4
void entry_001aee78_0x1aee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aee78_0x1aee78");
#endif

    ctx->pc = 0x1aee78u;

    // 0x1aee78: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1aee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aee7c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1aee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1aee80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aee80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aee84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aee84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee88: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1aee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1aee8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aee8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aee90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aee90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aee94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aee94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1aee98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1aee98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1aee9c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AEE9Cu;
    SET_GPR_U32(ctx, 31, 0x1AEEA4u);
    ctx->pc = 0x1AEEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE9Cu;
    // 0x1aeea0: 0xae8206c0  sw          $v0, 0x6C0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1728), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEE9Cu, 0x1AEEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEEA4u;
}
