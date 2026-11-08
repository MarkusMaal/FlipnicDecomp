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

// Function: entry_001a904c
// Address: 0x1a904c - 0x1a9068
void entry_001a904c_0x1a904c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a904c_0x1a904c");
#endif

    ctx->pc = 0x1a904cu;

    // 0x1a904c: 0x0  nop
    ctx->pc = 0x1a904cu;
    // NOP
    // 0x1a9050: 0x8e8209b4  lw          $v0, 0x9B4($s4)
    ctx->pc = 0x1a9050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
    // 0x1a9054: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9054u;
    {
        const bool branch_taken_0x1a9054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9054u;
        // 0x1a9058: 0x24110020  addiu       $s1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9054) {
            ctx->pc = 0x1A9068u;
            return;
        }
    }
    ctx->pc = 0x1A905Cu;
    // 0x1a905c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A905Cu;
    {
        const bool branch_taken_0x1a905c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A905Cu;
        // 0x1a9060: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a905c) {
            ctx->pc = 0x1A9068u;
            return;
        }
    }
    ctx->pc = 0x1A9064u;
    // 0x1a9064: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x1a9064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1a9068u;
}
