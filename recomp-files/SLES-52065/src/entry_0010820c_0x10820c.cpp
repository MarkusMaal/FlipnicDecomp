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

// Function: entry_0010820c
// Address: 0x10820c - 0x108220
void entry_0010820c_0x10820c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010820c_0x10820c");
#endif

    ctx->pc = 0x10820cu;

    // 0x10820c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x10820cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x108210: 0x28e20018  slti        $v0, $a3, 0x18
    ctx->pc = 0x108210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x108214: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x108214u;
    {
        const bool branch_taken_0x108214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108214u;
        // 0x108218: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108214) {
            ctx->pc = 0x108188u;
            return;
        }
    }
    ctx->pc = 0x10821Cu;
    // 0x10821c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10821cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108220u;
}
