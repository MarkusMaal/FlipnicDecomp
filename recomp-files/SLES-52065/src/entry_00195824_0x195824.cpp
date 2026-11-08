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

// Function: entry_00195824
// Address: 0x195824 - 0x195864
void entry_00195824_0x195824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195824_0x195824");
#endif

    ctx->pc = 0x195824u;

    // 0x195824: 0x0  nop
    ctx->pc = 0x195824u;
    // NOP
    // 0x195828: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x195828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x19582c: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x19582cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x195830: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x195830u;
    {
        const bool branch_taken_0x195830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195830u;
        // 0x195834: 0x8e860320  lw          $a2, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195830) {
            ctx->pc = 0x195904u;
            return;
        }
    }
    ctx->pc = 0x195838u;
    // 0x195838: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19583c: 0x10c2001c  beq         $a2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19583Cu;
    {
        const bool branch_taken_0x19583c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x19583c) {
            ctx->pc = 0x1958B0u;
            return;
        }
    }
    ctx->pc = 0x195844u;
    // 0x195844: 0x8f848384  lw          $a0, -0x7C7C($gp)
    ctx->pc = 0x195844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x195848: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x195848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19584c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x195850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195854: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x195854u;
    {
        const bool branch_taken_0x195854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195854u;
        // 0x195858: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195854) {
            ctx->pc = 0x195864u;
            return;
        }
    }
    ctx->pc = 0x19585Cu;
    // 0x19585c: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x19585cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x195860: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x195860u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
    ctx->pc = 0x195864u;
}
