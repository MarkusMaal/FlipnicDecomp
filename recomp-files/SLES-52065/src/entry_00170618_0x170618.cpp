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

// Function: entry_00170618
// Address: 0x170618 - 0x170624
void entry_00170618_0x170618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170618_0x170618");
#endif

    ctx->pc = 0x170618u;

    // 0x170618: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x170618u;
    {
        const bool branch_taken_0x170618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170618u;
        // 0x17061c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170618) {
            ctx->pc = 0x170624u;
            return;
        }
    }
    ctx->pc = 0x170620u;
    // 0x170620: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x170620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x170624u;
}
