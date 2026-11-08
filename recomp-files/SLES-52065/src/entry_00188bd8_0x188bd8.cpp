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

// Function: entry_00188bd8
// Address: 0x188bd8 - 0x188c00
void entry_00188bd8_0x188bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188bd8_0x188bd8");
#endif

    ctx->pc = 0x188bd8u;

    // 0x188bd8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x188bd8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x188bdc: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x188bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188be0: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x188be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x188be4: 0xc6a20068  lwc1        $f2, 0x68($s5)
    ctx->pc = 0x188be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188be8: 0xc6a10044  lwc1        $f1, 0x44($s5)
    ctx->pc = 0x188be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188bec: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x188becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188bf0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x188bf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x188bf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x188bf8: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x188BF8u;
    {
        const bool branch_taken_0x188bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BF8u;
        // 0x188bfc: 0xe6a00014  swc1        $f0, 0x14($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bf8) {
            ctx->pc = 0x188E94u;
            return;
        }
    }
    ctx->pc = 0x188C00u;
}
