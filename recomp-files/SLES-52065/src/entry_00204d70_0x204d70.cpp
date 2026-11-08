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

// Function: entry_00204d70
// Address: 0x204d70 - 0x204d88
void entry_00204d70_0x204d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204d70_0x204d70");
#endif

    ctx->pc = 0x204d70u;

    // 0x204d70: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x204d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x204d74: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x204d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x204d78: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x204D78u;
    {
        const bool branch_taken_0x204d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D78u;
        // 0x204d7c: 0x26c25190  addiu       $v0, $s6, 0x5190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d78) {
            ctx->pc = 0x204D28u;
            return;
        }
    }
    ctx->pc = 0x204D80u;
    // 0x204d80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x204D80u;
    {
        const bool branch_taken_0x204d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D80u;
        // 0x204d84: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d80) {
            ctx->pc = 0x204D90u;
            return;
        }
    }
    ctx->pc = 0x204D88u;
}
