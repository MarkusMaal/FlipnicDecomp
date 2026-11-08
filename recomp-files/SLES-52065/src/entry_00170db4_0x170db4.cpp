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

// Function: entry_00170db4
// Address: 0x170db4 - 0x170dd8
void entry_00170db4_0x170db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170db4_0x170db4");
#endif

    ctx->pc = 0x170db4u;

    // 0x170db4: 0x92020264  lbu         $v0, 0x264($s0)
    ctx->pc = 0x170db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x170db8: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x170DB8u;
    {
        const bool branch_taken_0x170db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170db8) {
            ctx->pc = 0x170F98u;
            return;
        }
    }
    ctx->pc = 0x170DC0u;
    // 0x170dc0: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x170dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x170dc4: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x170DC4u;
    {
        const bool branch_taken_0x170dc4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x170dc4) {
            ctx->pc = 0x170DD8u;
            return;
        }
    }
    ctx->pc = 0x170DCCu;
    // 0x170dcc: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x170dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x170dd0: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x170DD0u;
    {
        const bool branch_taken_0x170dd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x170dd0) {
            ctx->pc = 0x170E20u;
            return;
        }
    }
    ctx->pc = 0x170DD8u;
}
