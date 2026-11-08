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

// Function: entry_0016c214
// Address: 0x16c214 - 0x16c22c
void entry_0016c214_0x16c214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c214_0x16c214");
#endif

    ctx->pc = 0x16c214u;

    // 0x16c214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c218: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16C218u;
    {
        const bool branch_taken_0x16c218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c218) {
            ctx->pc = 0x16C22Cu;
            return;
        }
    }
    ctx->pc = 0x16C220u;
    // 0x16c220: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x16c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c224: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16C224u;
    {
        const bool branch_taken_0x16c224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C224u;
        // 0x16c228: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c224) {
            ctx->pc = 0x16C278u;
            return;
        }
    }
    ctx->pc = 0x16C22Cu;
}
