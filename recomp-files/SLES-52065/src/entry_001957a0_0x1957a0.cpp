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

// Function: entry_001957a0
// Address: 0x1957a0 - 0x1957cc
void entry_001957a0_0x1957a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001957a0_0x1957a0");
#endif

    ctx->pc = 0x1957a0u;

    // 0x1957a0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1957a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1957a4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1957A4u;
    {
        const bool branch_taken_0x1957a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1957A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957A4u;
        // 0x1957a8: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957a4) {
            ctx->pc = 0x195800u;
            return;
        }
    }
    ctx->pc = 0x1957ACu;
    // 0x1957ac: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x1957acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x1957b0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1957b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1957b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1957b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1957b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1957b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1957bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1957BCu;
    {
        const bool branch_taken_0x1957bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1957C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957BCu;
        // 0x1957c0: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957bc) {
            ctx->pc = 0x1957CCu;
            return;
        }
    }
    ctx->pc = 0x1957C4u;
    // 0x1957c4: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x1957c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1957c8: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x1957c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
    ctx->pc = 0x1957ccu;
}
