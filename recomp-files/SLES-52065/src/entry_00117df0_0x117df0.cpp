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

// Function: entry_00117df0
// Address: 0x117df0 - 0x117e18
void entry_00117df0_0x117df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117df0_0x117df0");
#endif

    ctx->pc = 0x117df0u;

    // 0x117df0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x117df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117df4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x117DF4u;
    {
        const bool branch_taken_0x117df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117df4) {
            ctx->pc = 0x117E28u;
            return;
        }
    }
    ctx->pc = 0x117DFCu;
    // 0x117dfc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x117DFCu;
    {
        const bool branch_taken_0x117dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x117dfc) {
            ctx->pc = 0x117E18u;
            return;
        }
    }
    ctx->pc = 0x117E04u;
    // 0x117e04: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x117e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x117e08: 0x2442d981  addiu       $v0, $v0, -0x267F
    ctx->pc = 0x117e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957441));
    // 0x117e0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x117e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x117e10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x117E10u;
    {
        const bool branch_taken_0x117e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E10u;
        // 0x117e14: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e10) {
            ctx->pc = 0x117E28u;
            return;
        }
    }
    ctx->pc = 0x117E18u;
}
