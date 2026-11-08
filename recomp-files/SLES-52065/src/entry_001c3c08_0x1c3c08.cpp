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

// Function: entry_001c3c08
// Address: 0x1c3c08 - 0x1c3c50
void entry_001c3c08_0x1c3c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3c08_0x1c3c08");
#endif

    ctx->pc = 0x1c3c08u;

    // 0x1c3c08: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c3c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c3c0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3c10: 0x146201fd  bne         $v1, $v0, . + 4 + (0x1FD << 2)
    ctx->pc = 0x1C3C10u;
    {
        const bool branch_taken_0x1c3c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C10u;
        // 0x1c3c14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c10) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3C18u;
    // 0x1c3c18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3c1c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c3c20: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3c24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3c28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3c2c: 0xac22f5e8  sw          $v0, -0xA18($at)
    ctx->pc = 0x1c3c2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5E8u, _value); } while (0);
    // 0x1c3c30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3c34: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3c38: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c3c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c3c3c: 0x144001f2  bnez        $v0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x1C3C3Cu;
    {
        const bool branch_taken_0x1c3c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3c3c) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3C44u;
    // 0x1c3c44: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c3c48: 0x100001ef  b           . + 4 + (0x1EF << 2)
    ctx->pc = 0x1C3C48u;
    {
        const bool branch_taken_0x1c3c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C48u;
        // 0x1c3c4c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c48) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3C50u;
}
