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

// Function: entry_001c3a50
// Address: 0x1c3a50 - 0x1c3a98
void entry_001c3a50_0x1c3a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3a50_0x1c3a50");
#endif

    ctx->pc = 0x1c3a50u;

    // 0x1c3a50: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c3a54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3a58: 0x1462026b  bne         $v1, $v0, . + 4 + (0x26B << 2)
    ctx->pc = 0x1C3A58u;
    {
        const bool branch_taken_0x1c3a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A58u;
        // 0x1c3a5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a58) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3A60u;
    // 0x1c3a60: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3a64: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c3a68: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3a6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3a70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3a74: 0xac22f5e8  sw          $v0, -0xA18($at)
    ctx->pc = 0x1c3a74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5E8u, _value); } while (0);
    // 0x1c3a78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3a7c: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3a80: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c3a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c3a84: 0x14400260  bnez        $v0, . + 4 + (0x260 << 2)
    ctx->pc = 0x1C3A84u;
    {
        const bool branch_taken_0x1c3a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a84) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3A8Cu;
    // 0x1c3a8c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c3a90: 0x1000025d  b           . + 4 + (0x25D << 2)
    ctx->pc = 0x1C3A90u;
    {
        const bool branch_taken_0x1c3a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A90u;
        // 0x1c3a94: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a90) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3A98u;
}
