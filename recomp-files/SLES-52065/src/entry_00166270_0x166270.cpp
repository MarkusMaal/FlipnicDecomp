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

// Function: entry_00166270
// Address: 0x166270 - 0x16628c
void entry_00166270_0x166270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166270_0x166270");
#endif

    ctx->pc = 0x166270u;

    // 0x166270: 0x86050224  lh          $a1, 0x224($s0)
    ctx->pc = 0x166270u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x166274: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x166274u;
    {
        const bool branch_taken_0x166274 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x166274) {
            ctx->pc = 0x16628Cu;
            return;
        }
    }
    ctx->pc = 0x16627Cu;
    // 0x16627c: 0x86020234  lh          $v0, 0x234($s0)
    ctx->pc = 0x16627cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x166280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166284: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x166284u;
    {
        const bool branch_taken_0x166284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166284u;
        // 0x166288: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166284) {
            ctx->pc = 0x16629Cu;
            return;
        }
    }
    ctx->pc = 0x16628Cu;
}
