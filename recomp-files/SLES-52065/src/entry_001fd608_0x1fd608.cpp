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

// Function: entry_001fd608
// Address: 0x1fd608 - 0x1fd61c
void entry_001fd608_0x1fd608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd608_0x1fd608");
#endif

    ctx->pc = 0x1fd608u;

label_1fd608:
    // 0x1fd608: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x1fd608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1fd60c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FD60Cu;
    {
        const bool branch_taken_0x1fd60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD60Cu;
        // 0x1fd610: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd60c) {
            ctx->pc = 0x1FD64Cu;
            return;
        }
    }
    ctx->pc = 0x1FD614u;
    // 0x1fd614: 0x461fffc  bgez        $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1FD614u;
    {
        const bool branch_taken_0x1fd614 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD614u;
        // 0x1fd618: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd614) {
            ctx->pc = 0x1FD608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd608;
        }
    }
    ctx->pc = 0x1FD61Cu;
}
