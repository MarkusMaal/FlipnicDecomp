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

// Function: entry_0016ba30
// Address: 0x16ba30 - 0x16ba60
void entry_0016ba30_0x16ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ba30_0x16ba30");
#endif

    ctx->pc = 0x16ba30u;

    // 0x16ba30: 0x8f8585fc  lw          $a1, -0x7A04($gp)
    ctx->pc = 0x16ba30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
    // 0x16ba34: 0x28a30064  slti        $v1, $a1, 0x64
    ctx->pc = 0x16ba34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x16ba38: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16BA38u;
    {
        const bool branch_taken_0x16ba38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA38u;
        // 0x16ba3c: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba38) {
            ctx->pc = 0x16BA60u;
            return;
        }
    }
    ctx->pc = 0x16BA40u;
    // 0x16ba40: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x16ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x16ba44: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16ba44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x16ba48: 0xac207500  sw          $zero, 0x7500($at)
    ctx->pc = 0x16ba48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367500u, _value); } while (0);
    // 0x16ba4c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16ba4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x16ba50: 0xac207504  sw          $zero, 0x7504($at)
    ctx->pc = 0x16ba50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x367504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x367504u, _value); } while (0);
    // 0x16ba54: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16ba54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x16ba58: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x16BA58u;
    {
        const bool branch_taken_0x16ba58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA58u;
        // 0x16ba5c: 0xac207508  sw          $zero, 0x7508($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba58) {
            ctx->pc = 0x16BB40u;
            return;
        }
    }
    ctx->pc = 0x16BA60u;
}
