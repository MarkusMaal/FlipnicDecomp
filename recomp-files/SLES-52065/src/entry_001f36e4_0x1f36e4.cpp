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

// Function: entry_001f36e4
// Address: 0x1f36e4 - 0x1f36f8
void entry_001f36e4_0x1f36e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f36e4_0x1f36e4");
#endif

    ctx->pc = 0x1f36e4u;

    // 0x1f36e4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F36E4u;
    {
        const bool branch_taken_0x1f36e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F36E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36E4u;
        // 0x1f36e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36e4) {
            ctx->pc = 0x1F36F8u;
            return;
        }
    }
    ctx->pc = 0x1F36ECu;
    // 0x1f36ec: 0x9222fb80  lbu         $v0, -0x480($s1)
    ctx->pc = 0x1f36ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294966144)));
    // 0x1f36f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F36F0u;
    {
        const bool branch_taken_0x1f36f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36F0u;
        // 0x1f36f4: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36f0) {
            ctx->pc = 0x1F3724u;
            return;
        }
    }
    ctx->pc = 0x1F36F8u;
}
