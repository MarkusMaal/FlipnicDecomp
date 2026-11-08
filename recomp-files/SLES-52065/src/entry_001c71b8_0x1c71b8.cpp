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

// Function: entry_001c71b8
// Address: 0x1c71b8 - 0x1c7200
void entry_001c71b8_0x1c71b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c71b8_0x1c71b8");
#endif

    ctx->pc = 0x1c71b8u;

    // 0x1c71b8: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1c71b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1c71bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c71bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c71c0: 0x14620170  bne         $v1, $v0, . + 4 + (0x170 << 2)
    ctx->pc = 0x1C71C0u;
    {
        const bool branch_taken_0x1c71c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71C0u;
        // 0x1c71c4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71c0) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C71C8u;
    // 0x1c71c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c71c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c71cc: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c71ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c71d0: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c71d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c71d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c71d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c71d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c71dc: 0xac22f880  sw          $v0, -0x780($at)
    ctx->pc = 0x1c71dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F880u, _value); } while (0);
    // 0x1c71e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c71e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c71e4: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c71e8: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c71e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c71ec: 0x14400165  bnez        $v0, . + 4 + (0x165 << 2)
    ctx->pc = 0x1C71ECu;
    {
        const bool branch_taken_0x1c71ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c71ec) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C71F4u;
    // 0x1c71f4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c71f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c71f8: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x1C71F8u;
    {
        const bool branch_taken_0x1c71f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C71FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71F8u;
        // 0x1c71fc: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71f8) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7200u;
}
