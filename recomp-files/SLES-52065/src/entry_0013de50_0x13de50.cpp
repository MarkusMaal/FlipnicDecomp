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

// Function: entry_0013de50
// Address: 0x13de50 - 0x13de68
void entry_0013de50_0x13de50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013de50_0x13de50");
#endif

    ctx->pc = 0x13de50u;

    // 0x13de50: 0x12630005  beq         $s3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DE50u;
    {
        const bool branch_taken_0x13de50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x13de50) {
            ctx->pc = 0x13DE68u;
            return;
        }
    }
    ctx->pc = 0x13DE58u;
    // 0x13de58: 0x8ea30198  lw          $v1, 0x198($s5)
    ctx->pc = 0x13de58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 408)));
    // 0x13de5c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x13de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13de60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13de60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13de64: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x13de64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    ctx->pc = 0x13de68u;
}
