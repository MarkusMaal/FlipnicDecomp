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

// Function: entry_00165f90
// Address: 0x165f90 - 0x165fac
void entry_00165f90_0x165f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165f90_0x165f90");
#endif

    ctx->pc = 0x165f90u;

    // 0x165f90: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x165f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x165f94: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165F94u;
    {
        const bool branch_taken_0x165f94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x165f94) {
            ctx->pc = 0x165FACu;
            return;
        }
    }
    ctx->pc = 0x165F9Cu;
    // 0x165f9c: 0xa6000226  sh          $zero, 0x226($s0)
    ctx->pc = 0x165f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x165fa0: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x165fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x165fa4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x165FA4u;
    {
        const bool branch_taken_0x165fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FA4u;
        // 0x165fa8: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fa4) {
            ctx->pc = 0x165FD8u;
            return;
        }
    }
    ctx->pc = 0x165FACu;
}
