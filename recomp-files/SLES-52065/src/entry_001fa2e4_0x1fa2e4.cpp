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

// Function: entry_001fa2e4
// Address: 0x1fa2e4 - 0x1fa300
void entry_001fa2e4_0x1fa2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa2e4_0x1fa2e4");
#endif

    ctx->pc = 0x1fa2e4u;

    // 0x1fa2e4: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x1fa2e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1fa2e8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1fa2e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1fa2ec: 0x6410041  bgez        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x1FA2ECu;
    {
        const bool branch_taken_0x1fa2ec = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1FA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2ECu;
        // 0x1fa2f0: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2ec) {
            ctx->pc = 0x1FA3F4u;
            return;
        }
    }
    ctx->pc = 0x1FA2F4u;
    // 0x1fa2f4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1fa2f4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1fa2f8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1FA2F8u;
    {
        const bool branch_taken_0x1fa2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2F8u;
        // 0x1fa2fc: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2f8) {
            ctx->pc = 0x1FA3E4u;
            return;
        }
    }
    ctx->pc = 0x1FA300u;
}
