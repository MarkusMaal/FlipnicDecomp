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

// Function: entry_001f36f8
// Address: 0x1f36f8 - 0x1f370c
void entry_001f36f8_0x1f36f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f36f8_0x1f36f8");
#endif

    ctx->pc = 0x1f36f8u;

    // 0x1f36f8: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F36F8u;
    {
        const bool branch_taken_0x1f36f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36F8u;
        // 0x1f36fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36f8) {
            ctx->pc = 0x1F370Cu;
            return;
        }
    }
    ctx->pc = 0x1F3700u;
    // 0x1f3700: 0x9622fb80  lhu         $v0, -0x480($s1)
    ctx->pc = 0x1f3700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294966144)));
    // 0x1f3704: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3704u;
    {
        const bool branch_taken_0x1f3704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3704u;
        // 0x1f3708: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3704) {
            ctx->pc = 0x1F3724u;
            return;
        }
    }
    ctx->pc = 0x1F370Cu;
}
