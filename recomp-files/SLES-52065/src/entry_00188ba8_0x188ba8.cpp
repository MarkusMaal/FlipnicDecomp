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

// Function: entry_00188ba8
// Address: 0x188ba8 - 0x188bc0
void entry_00188ba8_0x188ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188ba8_0x188ba8");
#endif

    ctx->pc = 0x188ba8u;

    // 0x188ba8: 0xc6a2006c  lwc1        $f2, 0x6C($s5)
    ctx->pc = 0x188ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188bac: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x188bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188bb0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x188bb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x188bb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x188bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x188bb8: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x188BB8u;
    {
        const bool branch_taken_0x188bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BB8u;
        // 0x188bbc: 0xe6a00010  swc1        $f0, 0x10($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188bb8) {
            ctx->pc = 0x188E94u;
            return;
        }
    }
    ctx->pc = 0x188BC0u;
}
