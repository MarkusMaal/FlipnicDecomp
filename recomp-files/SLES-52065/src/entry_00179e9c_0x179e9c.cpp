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

// Function: entry_00179e9c
// Address: 0x179e9c - 0x179ed4
void entry_00179e9c_0x179e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179e9c_0x179e9c");
#endif

    ctx->pc = 0x179e9cu;

    // 0x179e9c: 0x0  nop
    ctx->pc = 0x179e9cu;
    // NOP
    // 0x179ea0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x179ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x179ea4: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x179ea4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x179ea8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x179ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179eac: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x179eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179eb0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x179eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179eb4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x179eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179eb8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x179eb8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x179ebc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x179ebcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x179ec0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x179ec0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x179ec4: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x179ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x179ec8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x179ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x179ecc: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x179ECCu;
    SET_GPR_U32(ctx, 31, 0x179ED4u);
    ctx->pc = 0x179ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179ECCu;
    // 0x179ed0: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x179ECCu, 0x179ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179ED4u;
}
