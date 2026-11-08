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

// Function: entry_00168700
// Address: 0x168700 - 0x168710
void entry_00168700_0x168700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168700_0x168700");
#endif

    ctx->pc = 0x168700u;

    // 0x168700: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x168700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x168704: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x168704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x168708: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x168708u;
    {
        const bool branch_taken_0x168708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168708u;
        // 0x16870c: 0x24a503d0  addiu       $a1, $a1, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168708) {
            ctx->pc = 0x1686DCu;
            return;
        }
    }
    ctx->pc = 0x168710u;
}
