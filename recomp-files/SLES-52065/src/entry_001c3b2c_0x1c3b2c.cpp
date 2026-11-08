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

// Function: entry_001c3b2c
// Address: 0x1c3b2c - 0x1c3b74
void entry_001c3b2c_0x1c3b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3b2c_0x1c3b2c");
#endif

    ctx->pc = 0x1c3b2cu;

    // 0x1c3b2c: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1c3b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1c3b30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3b34: 0x14620234  bne         $v1, $v0, . + 4 + (0x234 << 2)
    ctx->pc = 0x1C3B34u;
    {
        const bool branch_taken_0x1c3b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B34u;
        // 0x1c3b38: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b34) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3B3Cu;
    // 0x1c3b3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3b40: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c3b44: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3b48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3b4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3b50: 0xac22f5e8  sw          $v0, -0xA18($at)
    ctx->pc = 0x1c3b50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5E8u, _value); } while (0);
    // 0x1c3b54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3b58: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3b5c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c3b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c3b60: 0x14400229  bnez        $v0, . + 4 + (0x229 << 2)
    ctx->pc = 0x1C3B60u;
    {
        const bool branch_taken_0x1c3b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b60) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3B68u;
    // 0x1c3b68: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c3b6c: 0x10000226  b           . + 4 + (0x226 << 2)
    ctx->pc = 0x1C3B6Cu;
    {
        const bool branch_taken_0x1c3b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B6Cu;
        // 0x1c3b70: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b6c) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3B74u;
}
