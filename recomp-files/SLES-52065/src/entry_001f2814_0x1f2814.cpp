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

// Function: entry_001f2814
// Address: 0x1f2814 - 0x1f282c
void entry_001f2814_0x1f2814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2814_0x1f2814");
#endif

    ctx->pc = 0x1f2814u;

    // 0x1f2814: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2814u;
    {
        const bool branch_taken_0x1f2814 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2814) {
            ctx->pc = 0x1F2818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2814u;
            // 0x1f2818: 0xace5fa80  sw          $a1, -0x580($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 4294965888), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F282Cu;
            return;
        }
    }
    ctx->pc = 0x1F281Cu;
    // 0x1f281c: 0x24e2fa80  addiu       $v0, $a3, -0x580
    ctx->pc = 0x1f281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965888));
    // 0x1f2820: 0x240800fb  addiu       $t0, $zero, 0xFB
    ctx->pc = 0x1f2820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x1f2824: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1f2824u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2828: 0xace5fa80  sw          $a1, -0x580($a3)
    ctx->pc = 0x1f2828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294965888), GPR_U32(ctx, 5));
    ctx->pc = 0x1f282cu;
}
