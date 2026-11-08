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

// Function: entry_00208fec
// Address: 0x208fec - 0x209000
void entry_00208fec_0x208fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208fec_0x208fec");
#endif

    ctx->pc = 0x208fecu;

    // 0x208fec: 0x14e60032  bne         $a3, $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x208FECu;
    {
        const bool branch_taken_0x208fec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x208FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FECu;
        // 0x208ff0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208fec) {
            ctx->pc = 0x2090B8u;
            return;
        }
    }
    ctx->pc = 0x208FF4u;
    // 0x208ff4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x208ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x208ff8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x208FF8u;
    {
        const bool branch_taken_0x208ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208FF8u;
        // 0x208ffc: 0x24442c18  addiu       $a0, $v0, 0x2C18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ff8) {
            ctx->pc = 0x2090B8u;
            return;
        }
    }
    ctx->pc = 0x209000u;
}
