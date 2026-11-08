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

// Function: entry_0019138c
// Address: 0x19138c - 0x1913a8
void entry_0019138c_0x19138c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019138c_0x19138c");
#endif

    ctx->pc = 0x19138cu;

    // 0x19138c: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x19138cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191390: 0x8ca42cd0  lw          $a0, 0x2CD0($a1)
    ctx->pc = 0x191390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11472)));
    // 0x191394: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191394u;
    {
        const bool branch_taken_0x191394 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x191398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191394u;
        // 0x191398: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191394) {
            ctx->pc = 0x1913A8u;
            return;
        }
    }
    ctx->pc = 0x19139Cu;
    // 0x19139c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19139Cu;
    {
        const bool branch_taken_0x19139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19139Cu;
        // 0x1913a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19139c) {
            ctx->pc = 0x1913C0u;
            return;
        }
    }
    ctx->pc = 0x1913A4u;
    // 0x1913a4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1913a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x1913a8u;
}
