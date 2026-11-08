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

// Function: entry_001e72cc
// Address: 0x1e72cc - 0x1e72ec
void entry_001e72cc_0x1e72cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e72cc_0x1e72cc");
#endif

    ctx->pc = 0x1e72ccu;

label_1e72cc:
    // 0x1e72cc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1e72ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e72d0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x1e72d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e72d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e72d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e72d8: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x1e72d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1e72dc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1e72dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1e72e0: 0x0  nop
    ctx->pc = 0x1e72e0u;
    // NOP
    // 0x1e72e4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E72E4u;
    {
        const bool branch_taken_0x1e72e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e72e4) {
            ctx->pc = 0x1E72CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e72cc;
        }
    }
    ctx->pc = 0x1E72ECu;
}
