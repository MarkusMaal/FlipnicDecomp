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

// Function: entry_001fae3c
// Address: 0x1fae3c - 0x1fae54
void entry_001fae3c_0x1fae3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fae3c_0x1fae3c");
#endif

    ctx->pc = 0x1fae3cu;

    // 0x1fae3c: 0x8fa8014c  lw          $t0, 0x14C($sp)
    ctx->pc = 0x1fae3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x1fae40: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAE40u;
    {
        const bool branch_taken_0x1fae40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae40) {
            ctx->pc = 0x1FAE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAE40u;
            // 0x1fae44: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAE54u;
            return;
        }
    }
    ctx->pc = 0x1FAE48u;
    // 0x1fae48: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1fae48u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1fae4c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x1fae4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x1fae50: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1fae50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    ctx->pc = 0x1fae54u;
}
