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

// Function: entry_0012c438
// Address: 0x12c438 - 0x12c44c
void entry_0012c438_0x12c438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c438_0x12c438");
#endif

    ctx->pc = 0x12c438u;

    // 0x12c438: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C438u;
    {
        const bool branch_taken_0x12c438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C438u;
        // 0x12c43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c438) {
            ctx->pc = 0x12C44Cu;
            return;
        }
    }
    ctx->pc = 0x12C440u;
    // 0x12c440: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12c440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c444: 0x144300a5  bne         $v0, $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x12C444u;
    {
        const bool branch_taken_0x12c444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C444u;
        // 0x12c448: 0x3c038080  lui         $v1, 0x8080 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c444) {
            ctx->pc = 0x12C6DCu;
            return;
        }
    }
    ctx->pc = 0x12C44Cu;
}
