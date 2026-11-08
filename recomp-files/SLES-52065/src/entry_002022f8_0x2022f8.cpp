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

// Function: entry_002022f8
// Address: 0x2022f8 - 0x20231c
void entry_002022f8_0x2022f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002022f8_0x2022f8");
#endif

    ctx->pc = 0x2022f8u;

label_2022f8:
    // 0x2022f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2022f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2022fc: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2022fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x202300: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x202300u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x202304: 0x0  nop
    ctx->pc = 0x202304u;
    // NOP
    // 0x202308: 0x0  nop
    ctx->pc = 0x202308u;
    // NOP
    // 0x20230c: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20230Cu;
    {
        const bool branch_taken_0x20230c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20230c) {
            ctx->pc = 0x2022F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2022f8;
        }
    }
    ctx->pc = 0x202314u;
    // 0x202314: 0x10400375  beqz        $v0, . + 4 + (0x375 << 2)
    ctx->pc = 0x202314u;
    {
        const bool branch_taken_0x202314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202314u;
        // 0x202318: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202314) {
            ctx->pc = 0x2030ECu;
            return;
        }
    }
    ctx->pc = 0x20231Cu;
}
