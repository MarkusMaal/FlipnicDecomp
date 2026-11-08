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

// Function: entry_00203eb8
// Address: 0x203eb8 - 0x203ec8
void entry_00203eb8_0x203eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203eb8_0x203eb8");
#endif

    ctx->pc = 0x203eb8u;

    // 0x203eb8: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203EB8u;
    {
        const bool branch_taken_0x203eb8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x203EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EB8u;
        // 0x203ebc: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203eb8) {
            ctx->pc = 0x203EC8u;
            return;
        }
    }
    ctx->pc = 0x203EC0u;
    // 0x203ec0: 0x16e20004  bne         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203EC0u;
    {
        const bool branch_taken_0x203ec0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x203EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EC0u;
        // 0x203ec4: 0x33c20008  andi        $v0, $fp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ec0) {
            ctx->pc = 0x203ED4u;
            return;
        }
    }
    ctx->pc = 0x203EC8u;
}
