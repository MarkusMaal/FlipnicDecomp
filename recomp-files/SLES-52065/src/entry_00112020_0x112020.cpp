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

// Function: entry_00112020
// Address: 0x112020 - 0x11203c
void entry_00112020_0x112020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112020_0x112020");
#endif

    ctx->pc = 0x112020u;

    // 0x112020: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x112020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x112024: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x112024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112028: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x112028u;
    {
        const bool branch_taken_0x112028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112028u;
        // 0x11202c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112028) {
            ctx->pc = 0x112014u;
            return;
        }
    }
    ctx->pc = 0x112030u;
    // 0x112030: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x112030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x112034: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x112034u;
    {
        const bool branch_taken_0x112034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112034u;
        // 0x112038: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112034) {
            ctx->pc = 0x112334u;
            return;
        }
    }
    ctx->pc = 0x11203Cu;
}
