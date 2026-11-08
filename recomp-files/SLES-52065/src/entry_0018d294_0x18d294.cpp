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

// Function: entry_0018d294
// Address: 0x18d294 - 0x18d2c8
void entry_0018d294_0x18d294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d294_0x18d294");
#endif

    ctx->pc = 0x18d294u;

    // 0x18d294: 0xc6410490  lwc1        $f1, 0x490($s2)
    ctx->pc = 0x18d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d298: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d29c: 0xc6400498  lwc1        $f0, 0x498($s2)
    ctx->pc = 0x18d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d2a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18d2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18d2a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18d2a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d2a8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x18d2a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18d2ac: 0x0  nop
    ctx->pc = 0x18d2acu;
    // NOP
    // 0x18d2b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18D2B0u;
    {
        const bool branch_taken_0x18d2b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2B0u;
        // 0x18d2b4: 0xe6400490  swc1        $f0, 0x490($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2b0) {
            ctx->pc = 0x18D2C8u;
            return;
        }
    }
    ctx->pc = 0x18D2B8u;
    // 0x18d2b8: 0xe6420490  swc1        $f2, 0x490($s2)
    ctx->pc = 0x18d2b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
    // 0x18d2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d2c0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18D2C0u;
    SET_GPR_U32(ctx, 31, 0x18D2C8u);
    ctx->pc = 0x18D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2C0u;
    // 0x18d2c4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18D2C0u, 0x18D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D2C8u;
}
