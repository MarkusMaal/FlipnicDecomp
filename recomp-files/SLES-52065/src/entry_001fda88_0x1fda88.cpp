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

// Function: entry_001fda88
// Address: 0x1fda88 - 0x1fda9c
void entry_001fda88_0x1fda88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fda88_0x1fda88");
#endif

    ctx->pc = 0x1fda88u;

    // 0x1fda88: 0x91a42  srl         $v1, $t1, 9
    ctx->pc = 0x1fda88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 9));
    // 0x1fda8c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDA8Cu;
    {
        const bool branch_taken_0x1fda8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA8Cu;
        // 0x1fda90: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda8c) {
            ctx->pc = 0x1FDA9Cu;
            return;
        }
    }
    ctx->pc = 0x1FDA94u;
    // 0x1fda94: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1FDA94u;
    {
        const bool branch_taken_0x1fda94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA94u;
        // 0x1fda98: 0x930c2  srl         $a2, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fda94) {
            ctx->pc = 0x1FDAF8u;
            return;
        }
    }
    ctx->pc = 0x1FDA9Cu;
}
