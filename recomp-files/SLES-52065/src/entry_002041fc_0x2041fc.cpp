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

// Function: entry_002041fc
// Address: 0x2041fc - 0x20420c
void entry_002041fc_0x2041fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002041fc_0x2041fc");
#endif

    ctx->pc = 0x2041fcu;

    // 0x2041fc: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2041FCu;
    {
        const bool branch_taken_0x2041fc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x204200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041FCu;
        // 0x204200: 0xafb2020c  sw          $s2, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041fc) {
            ctx->pc = 0x20420Cu;
            return;
        }
    }
    ctx->pc = 0x204204u;
    // 0x204204: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x204204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x204208: 0x3c2f024  and         $fp, $fp, $v0
    ctx->pc = 0x204208u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
    ctx->pc = 0x20420cu;
}
