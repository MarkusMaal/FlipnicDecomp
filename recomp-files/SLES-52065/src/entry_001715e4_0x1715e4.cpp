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

// Function: entry_001715e4
// Address: 0x1715e4 - 0x1715f8
void entry_001715e4_0x1715e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001715e4_0x1715e4");
#endif

    ctx->pc = 0x1715e4u;

    // 0x1715e4: 0x0  nop
    ctx->pc = 0x1715e4u;
    // NOP
    // 0x1715e8: 0x14690003  bne         $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1715E8u;
    {
        const bool branch_taken_0x1715e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x1715ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715E8u;
        // 0x1715ec: 0x10a2021  addu        $a0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715e8) {
            ctx->pc = 0x1715F8u;
            return;
        }
    }
    ctx->pc = 0x1715F0u;
    // 0x1715f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1715F0u;
    {
        const bool branch_taken_0x1715f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1715F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715F0u;
        // 0x1715f4: 0xe4940000  swc1        $f20, 0x0($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715f0) {
            ctx->pc = 0x171654u;
            return;
        }
    }
    ctx->pc = 0x1715F8u;
}
