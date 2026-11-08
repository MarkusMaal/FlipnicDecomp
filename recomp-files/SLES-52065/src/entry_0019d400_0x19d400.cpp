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

// Function: entry_0019d400
// Address: 0x19d400 - 0x19d418
void entry_0019d400_0x19d400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d400_0x19d400");
#endif

    ctx->pc = 0x19d400u;

    // 0x19d400: 0x8ea307f4  lw          $v1, 0x7F4($s5)
    ctx->pc = 0x19d400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2036)));
    // 0x19d404: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x19d404u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19d408: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19D408u;
    {
        const bool branch_taken_0x19d408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D408u;
        // 0x19d40c: 0x2a53021  addu        $a2, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d408) {
            ctx->pc = 0x19D3BCu;
            return;
        }
    }
    ctx->pc = 0x19D410u;
    // 0x19d410: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19D410u;
    {
        const bool branch_taken_0x19d410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D410u;
        // 0x19d414: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d410) {
            ctx->pc = 0x19D424u;
            return;
        }
    }
    ctx->pc = 0x19D418u;
}
