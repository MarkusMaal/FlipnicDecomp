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

// Function: entry_00134a44
// Address: 0x134a44 - 0x134a58
void entry_00134a44_0x134a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134a44_0x134a44");
#endif

    ctx->pc = 0x134a44u;

    // 0x134a44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134A44u;
    {
        const bool branch_taken_0x134a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134a44) {
            ctx->pc = 0x134A58u;
            return;
        }
    }
    ctx->pc = 0x134A4Cu;
    // 0x134a4c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x134a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x134a50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x134a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134a54: 0xae420098  sw          $v0, 0x98($s2)
    ctx->pc = 0x134a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
    ctx->pc = 0x134a58u;
}
