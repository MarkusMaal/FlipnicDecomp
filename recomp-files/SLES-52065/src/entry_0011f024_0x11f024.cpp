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

// Function: entry_0011f024
// Address: 0x11f024 - 0x11f03c
void entry_0011f024_0x11f024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f024_0x11f024");
#endif

    ctx->pc = 0x11f024u;

    // 0x11f024: 0x0  nop
    ctx->pc = 0x11f024u;
    // NOP
    // 0x11f028: 0x2e810010  sltiu       $at, $s4, 0x10
    ctx->pc = 0x11f028u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x11f02c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F02Cu;
    {
        const bool branch_taken_0x11f02c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F02Cu;
        // 0x11f030: 0x2f41023  subu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f02c) {
            ctx->pc = 0x11F03Cu;
            return;
        }
    }
    ctx->pc = 0x11F034u;
    // 0x11f034: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x11F034u;
    {
        const bool branch_taken_0x11f034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F034u;
        // 0x11f038: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f034) {
            ctx->pc = 0x11F260u;
            return;
        }
    }
    ctx->pc = 0x11F03Cu;
}
