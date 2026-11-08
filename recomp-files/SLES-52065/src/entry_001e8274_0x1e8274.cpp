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

// Function: entry_001e8274
// Address: 0x1e8274 - 0x1e82a4
void entry_001e8274_0x1e8274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8274_0x1e8274");
#endif

    ctx->pc = 0x1e8274u;

    // 0x1e8274: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E8274u;
    {
        const bool branch_taken_0x1e8274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8274) {
            ctx->pc = 0x1E82A4u;
            return;
        }
    }
    ctx->pc = 0x1E827Cu;
    // 0x1e827c: 0x0  nop
    ctx->pc = 0x1e827cu;
    // NOP
    // 0x1e8280: 0xafdd00a4  sw          $sp, 0xA4($fp)
    ctx->pc = 0x1e8280u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 29));
    // 0x1e8284: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x1e8284u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8288: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x1e8288u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e828c: 0x86070004  lh          $a3, 0x4($s0)
    ctx->pc = 0x1e828cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e8290: 0x86060006  lh          $a2, 0x6($s0)
    ctx->pc = 0x1e8290u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1e8294: 0xa4890000  sh          $t1, 0x0($a0)
    ctx->pc = 0x1e8294u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x1e8298: 0xa4880002  sh          $t0, 0x2($a0)
    ctx->pc = 0x1e8298u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e829c: 0xa4870004  sh          $a3, 0x4($a0)
    ctx->pc = 0x1e829cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e82a0: 0xa4860006  sh          $a2, 0x6($a0)
    ctx->pc = 0x1e82a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1e82a4u;
}
