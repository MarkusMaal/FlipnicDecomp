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

// Function: entry_00207ef4
// Address: 0x207ef4 - 0x207f0c
void entry_00207ef4_0x207ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207ef4_0x207ef4");
#endif

    ctx->pc = 0x207ef4u;

    // 0x207ef4: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x207ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x207ef8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207EF8u;
    {
        const bool branch_taken_0x207ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EF8u;
        // 0x207efc: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ef8) {
            ctx->pc = 0x207F0Cu;
            return;
        }
    }
    ctx->pc = 0x207F00u;
    // 0x207f00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x207f00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x207F04u;
    {
        const bool branch_taken_0x207f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F04u;
        // 0x207f08: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f04) {
            ctx->pc = 0x207F18u;
            return;
        }
    }
    ctx->pc = 0x207F0Cu;
}
