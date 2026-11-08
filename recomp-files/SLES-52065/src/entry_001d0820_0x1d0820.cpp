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

// Function: entry_001d0820
// Address: 0x1d0820 - 0x1d0840
void entry_001d0820_0x1d0820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0820_0x1d0820");
#endif

    ctx->pc = 0x1d0820u;

    // 0x1d0820: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d0820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d0824: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d0824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0828: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d0828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d082c: 0x2882000b  slti        $v0, $a0, 0xB
    ctx->pc = 0x1d082cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d0830: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D0830u;
    {
        const bool branch_taken_0x1d0830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0830u;
        // 0x1d0834: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0830) {
            ctx->pc = 0x1D079Cu;
            return;
        }
    }
    ctx->pc = 0x1D0838u;
    // 0x1d0838: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d0838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d083c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d083cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d0840u;
}
