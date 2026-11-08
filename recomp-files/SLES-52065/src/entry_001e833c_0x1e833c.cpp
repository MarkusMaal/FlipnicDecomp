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

// Function: entry_001e833c
// Address: 0x1e833c - 0x1e836c
void entry_001e833c_0x1e833c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e833c_0x1e833c");
#endif

    ctx->pc = 0x1e833cu;

    // 0x1e833c: 0x1140000b  beqz        $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x1E833Cu;
    {
        const bool branch_taken_0x1e833c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e833c) {
            ctx->pc = 0x1E836Cu;
            return;
        }
    }
    ctx->pc = 0x1E8344u;
    // 0x1e8344: 0x0  nop
    ctx->pc = 0x1e8344u;
    // NOP
    // 0x1e8348: 0xafdd00e4  sw          $sp, 0xE4($fp)
    ctx->pc = 0x1e8348u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 228), GPR_U32(ctx, 29));
    // 0x1e834c: 0x85280000  lh          $t0, 0x0($t1)
    ctx->pc = 0x1e834cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1e8350: 0x85270002  lh          $a3, 0x2($t1)
    ctx->pc = 0x1e8350u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1e8354: 0x85260004  lh          $a2, 0x4($t1)
    ctx->pc = 0x1e8354u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1e8358: 0x85240006  lh          $a0, 0x6($t1)
    ctx->pc = 0x1e8358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x1e835c: 0xa5480000  sh          $t0, 0x0($t2)
    ctx->pc = 0x1e835cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e8360: 0xa5470002  sh          $a3, 0x2($t2)
    ctx->pc = 0x1e8360u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e8364: 0xa5460004  sh          $a2, 0x4($t2)
    ctx->pc = 0x1e8364u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e8368: 0xa5440006  sh          $a0, 0x6($t2)
    ctx->pc = 0x1e8368u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1e836cu;
}
