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

// Function: entry_00202410
// Address: 0x202410 - 0x202420
void entry_00202410_0x202410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202410_0x202410");
#endif

    ctx->pc = 0x202410u;

    // 0x202410: 0x2486ffd0  addiu       $a2, $a0, -0x30
    ctx->pc = 0x202410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x202414: 0x2cc2000a  sltiu       $v0, $a2, 0xA
    ctx->pc = 0x202414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x202418: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x202418u;
    {
        const bool branch_taken_0x202418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202418u;
        // 0x20241c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202418) {
            ctx->pc = 0x202500u;
            return;
        }
    }
    ctx->pc = 0x202420u;
}
