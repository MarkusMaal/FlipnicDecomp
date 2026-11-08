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

// Function: entry_001bb944
// Address: 0x1bb944 - 0x1bb96c
void entry_001bb944_0x1bb944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb944_0x1bb944");
#endif

    ctx->pc = 0x1bb944u;

    // 0x1bb944: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BB944u;
    {
        const bool branch_taken_0x1bb944 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb944) {
            ctx->pc = 0x1BB9A8u;
            return;
        }
    }
    ctx->pc = 0x1BB94Cu;
    // 0x1bb94c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bb94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bb950: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bb950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bb954: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB954u;
    {
        const bool branch_taken_0x1bb954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb954) {
            ctx->pc = 0x1BB974u;
            return;
        }
    }
    ctx->pc = 0x1BB95Cu;
    // 0x1bb95c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB95Cu;
    {
        const bool branch_taken_0x1bb95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb95c) {
            ctx->pc = 0x1BB96Cu;
            return;
        }
    }
    ctx->pc = 0x1BB964u;
    // 0x1bb964: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB964u;
    {
        const bool branch_taken_0x1bb964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB964u;
        // 0x1bb968: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb964) {
            ctx->pc = 0x1BB974u;
            return;
        }
    }
    ctx->pc = 0x1BB96Cu;
}
