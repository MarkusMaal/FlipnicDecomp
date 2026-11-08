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

// Function: entry_00120c84
// Address: 0x120c84 - 0x120c98
void entry_00120c84_0x120c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120c84_0x120c84");
#endif

    ctx->pc = 0x120c84u;

    // 0x120c84: 0x0  nop
    ctx->pc = 0x120c84u;
    // NOP
    // 0x120c88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120c8c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x120C8Cu;
    {
        const bool branch_taken_0x120c8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x120C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120C8Cu;
        // 0x120c90: 0x27a300ac  addiu       $v1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120c8c) {
            ctx->pc = 0x120C98u;
            return;
        }
    }
    ctx->pc = 0x120C94u;
    // 0x120c94: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x120c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x120c98u;
}
