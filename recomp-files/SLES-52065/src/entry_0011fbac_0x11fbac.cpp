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

// Function: entry_0011fbac
// Address: 0x11fbac - 0x11fbc8
void entry_0011fbac_0x11fbac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fbac_0x11fbac");
#endif

    ctx->pc = 0x11fbacu;

    // 0x11fbac: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x11fbb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11fbb4: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x11fbb8: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x11fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x11fbbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11fbc0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x11FBC0u;
    {
        const bool branch_taken_0x11fbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBC0u;
        // 0x11fbc4: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbc0) {
            ctx->pc = 0x11FCA4u;
            return;
        }
    }
    ctx->pc = 0x11FBC8u;
}
