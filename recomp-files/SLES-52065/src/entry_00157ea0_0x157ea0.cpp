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

// Function: entry_00157ea0
// Address: 0x157ea0 - 0x157ee8
void entry_00157ea0_0x157ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157ea0_0x157ea0");
#endif

    ctx->pc = 0x157ea0u;

    // 0x157ea0: 0xc48001c0  lwc1        $f0, 0x1C0($a0)
    ctx->pc = 0x157ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157ea4: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x157ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x157ea8: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x157ea8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x157eac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157eb0: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x157eb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x157eb4: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x157eb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x157eb8: 0x46002080  add.s       $f2, $f4, $f0
    ctx->pc = 0x157eb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x157ebc: 0xe4c40008  swc1        $f4, 0x8($a2)
    ctx->pc = 0x157ebcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x157ec0: 0xe4c30010  swc1        $f3, 0x10($a2)
    ctx->pc = 0x157ec0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x157ec4: 0xe4c20018  swc1        $f2, 0x18($a2)
    ctx->pc = 0x157ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x157ec8: 0xe4c10020  swc1        $f1, 0x20($a2)
    ctx->pc = 0x157ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x157ecc: 0xe4c20028  swc1        $f2, 0x28($a2)
    ctx->pc = 0x157eccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x157ed0: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x157ed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x157ed4: 0xe4c10030  swc1        $f1, 0x30($a2)
    ctx->pc = 0x157ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x157ed8: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x157ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x157edc: 0xe4c30040  swc1        $f3, 0x40($a2)
    ctx->pc = 0x157edcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x157ee0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x157EE0u;
    {
        const bool branch_taken_0x157ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EE0u;
        // 0x157ee4: 0xe4c00048  swc1        $f0, 0x48($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ee0) {
            ctx->pc = 0x157F00u;
            return;
        }
    }
    ctx->pc = 0x157EE8u;
}
