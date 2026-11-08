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

// Function: entry_001956a0
// Address: 0x1956a0 - 0x1956d8
void entry_001956a0_0x1956a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001956a0_0x1956a0");
#endif

    ctx->pc = 0x1956a0u;

    // 0x1956a0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1956a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1956a4: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x1956a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1956a8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1956A8u;
    {
        const bool branch_taken_0x1956a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1956ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956A8u;
        // 0x1956ac: 0x8e060034  lw          $a2, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956a8) {
            ctx->pc = 0x195774u;
            return;
        }
    }
    ctx->pc = 0x1956B0u;
    // 0x1956b0: 0x10c3001b  beq         $a2, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1956B0u;
    {
        const bool branch_taken_0x1956b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1956b0) {
            ctx->pc = 0x195720u;
            return;
        }
    }
    ctx->pc = 0x1956B8u;
    // 0x1956b8: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x1956b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x1956bc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1956bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1956c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1956c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1956c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1956c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1956c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1956C8u;
    {
        const bool branch_taken_0x1956c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1956CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956C8u;
        // 0x1956cc: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956c8) {
            ctx->pc = 0x1956D8u;
            return;
        }
    }
    ctx->pc = 0x1956D0u;
    // 0x1956d0: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x1956d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1956d4: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x1956d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
    ctx->pc = 0x1956d8u;
}
