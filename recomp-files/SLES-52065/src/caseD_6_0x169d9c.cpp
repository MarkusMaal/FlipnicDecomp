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

// Function: caseD_6
// Address: 0x169d9c - 0x169dd8
void caseD_6_0x169d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x169d9c");
#endif

    ctx->pc = 0x169d9cu;

    // 0x169d9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x169d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x169da0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x169da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x169da4: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x169da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x169da8: 0x84640034  lh          $a0, 0x34($v1)
    ctx->pc = 0x169da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x169dac: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x169DACu;
    {
        const bool branch_taken_0x169dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DACu;
        // 0x169db0: 0x84630036  lh          $v1, 0x36($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169dac) {
            ctx->pc = 0x169DFCu;
            return;
        }
    }
    ctx->pc = 0x169DB4u;
    // 0x169db4: 0x8f868384  lw          $a2, -0x7C7C($gp)
    ctx->pc = 0x169db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x169db8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x169db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x169dbc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x169dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x169dc0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x169dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x169dc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169dc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x169DC8u;
    {
        const bool branch_taken_0x169dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DC8u;
        // 0x169dcc: 0x24470018  addiu       $a3, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169dc8) {
            ctx->pc = 0x169DD8u;
            return;
        }
    }
    ctx->pc = 0x169DD0u;
    // 0x169dd0: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x169dd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x169dd4: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x169dd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
    ctx->pc = 0x169dd8u;
}
