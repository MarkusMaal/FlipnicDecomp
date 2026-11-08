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

// Function: entry_00110238
// Address: 0x110238 - 0x110258
void entry_00110238_0x110238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110238_0x110238");
#endif

    ctx->pc = 0x110238u;

    // 0x110238: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x110238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11023c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x11023cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110240: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x110240u;
    {
        const bool branch_taken_0x110240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110240) {
            ctx->pc = 0x1101F4u;
            return;
        }
    }
    ctx->pc = 0x110248u;
    // 0x110248: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11024c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110250: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x110250u;
    {
        const bool branch_taken_0x110250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110250u;
        // 0x110254: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110250) {
            ctx->pc = 0x1102A4u;
            return;
        }
    }
    ctx->pc = 0x110258u;
}
