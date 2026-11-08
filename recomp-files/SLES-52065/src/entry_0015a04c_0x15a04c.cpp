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

// Function: entry_0015a04c
// Address: 0x15a04c - 0x15a064
void entry_0015a04c_0x15a04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a04c_0x15a04c");
#endif

    ctx->pc = 0x15a04cu;

    // 0x15a04c: 0x86230228  lh          $v1, 0x228($s1)
    ctx->pc = 0x15a04cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x15a050: 0x86220230  lh          $v0, 0x230($s1)
    ctx->pc = 0x15a050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x15a054: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A054u;
    {
        const bool branch_taken_0x15a054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A054u;
        // 0x15a058: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a054) {
            ctx->pc = 0x15A068u;
            return;
        }
    }
    ctx->pc = 0x15A05Cu;
    // 0x15a05c: 0x86220234  lh          $v0, 0x234($s1)
    ctx->pc = 0x15a05cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x15a060: 0xa622022e  sh          $v0, 0x22E($s1)
    ctx->pc = 0x15a060u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 558), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15a064u;
}
