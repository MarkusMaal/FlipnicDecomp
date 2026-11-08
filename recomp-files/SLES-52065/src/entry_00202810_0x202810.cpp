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

// Function: entry_00202810
// Address: 0x202810 - 0x202828
void entry_00202810_0x202810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202810_0x202810");
#endif

    ctx->pc = 0x202810u;

    // 0x202810: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x202810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x202814: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x202814u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x202818: 0x1200009a  beqz        $s0, . + 4 + (0x9A << 2)
    ctx->pc = 0x202818u;
    {
        const bool branch_taken_0x202818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202818u;
        // 0x20281c: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202818) {
            ctx->pc = 0x202A84u;
            return;
        }
    }
    ctx->pc = 0x202820u;
    // 0x202820: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x202820u;
    {
        const bool branch_taken_0x202820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202820) {
            ctx->pc = 0x202824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202820u;
            // 0x202824: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202848u;
            return;
        }
    }
    ctx->pc = 0x202828u;
}
