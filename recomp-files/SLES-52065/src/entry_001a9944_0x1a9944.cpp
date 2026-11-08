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

// Function: entry_001a9944
// Address: 0x1a9944 - 0x1a9958
void entry_001a9944_0x1a9944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9944_0x1a9944");
#endif

    ctx->pc = 0x1a9944u;

    // 0x1a9944: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a9948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a9948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a994c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a9950: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9950u;
    {
        const bool branch_taken_0x1a9950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9950u;
        // 0x1a9954: 0xac620680  sw          $v0, 0x680($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9950) {
            ctx->pc = 0x1A996Cu;
            return;
        }
    }
    ctx->pc = 0x1A9958u;
}
