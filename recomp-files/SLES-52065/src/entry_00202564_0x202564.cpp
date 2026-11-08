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

// Function: entry_00202564
// Address: 0x202564 - 0x202578
void entry_00202564_0x202564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202564_0x202564");
#endif

    ctx->pc = 0x202564u;

    // 0x202564: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x202564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x202568: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x202568u;
    {
        const bool branch_taken_0x202568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202568u;
        // 0x20256c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202568) {
            ctx->pc = 0x20262Cu;
            return;
        }
    }
    ctx->pc = 0x202570u;
    // 0x202570: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x202570u;
    {
        const bool branch_taken_0x202570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x202570) {
            ctx->pc = 0x202574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202570u;
            // 0x202574: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202598u;
            return;
        }
    }
    ctx->pc = 0x202578u;
}
