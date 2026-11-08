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

// Function: entry_001c5678
// Address: 0x1c5678 - 0x1c56bc
void entry_001c5678_0x1c5678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5678_0x1c5678");
#endif

    ctx->pc = 0x1c5678u;

    // 0x1c5678: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1c5678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c567c: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x1c567cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x1c5680: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1c5680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1c5684: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c5684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c5688: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1c5688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1c568c: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x1c568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5690: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1c5690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5694: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c5694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c5698: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c569c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1c569cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c56a0: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x1c56a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1c56a4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1c56a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1c56a8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1c56a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1c56ac: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x1c56acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1c56b0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1c56b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1c56b4: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1C56B4u;
    SET_GPR_U32(ctx, 31, 0x1C56BCu);
    ctx->pc = 0x1C56B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56B4u;
    // 0x1c56b8: 0xe4600034  swc1        $f0, 0x34($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1C56B4u, 0x1C56BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56BCu;
}
