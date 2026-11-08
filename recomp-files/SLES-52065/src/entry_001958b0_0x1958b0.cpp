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

// Function: entry_001958b0
// Address: 0x1958b0 - 0x1958d0
void entry_001958b0_0x1958b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001958b0_0x1958b0");
#endif

    ctx->pc = 0x1958b0u;

    // 0x1958b0: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x1958b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x1958b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1958b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1958b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1958bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1958bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1958c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1958C0u;
    {
        const bool branch_taken_0x1958c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1958C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958C0u;
        // 0x1958c4: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958c0) {
            ctx->pc = 0x1958D0u;
            return;
        }
    }
    ctx->pc = 0x1958C8u;
    // 0x1958c8: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x1958c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1958cc: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x1958ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
    ctx->pc = 0x1958d0u;
}
