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

// Function: entry_001c7370
// Address: 0x1c7370 - 0x1c73b8
void entry_001c7370_0x1c7370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7370_0x1c7370");
#endif

    ctx->pc = 0x1c7370u;

    // 0x1c7370: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1c7370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1c7374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7378: 0x14620102  bne         $v1, $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x1C7378u;
    {
        const bool branch_taken_0x1c7378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7378u;
        // 0x1c737c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7378) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7380u;
    // 0x1c7380: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7384: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c7388: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c7388u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c738c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c7390: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7394: 0xac22f880  sw          $v0, -0x780($at)
    ctx->pc = 0x1c7394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F880u, _value); } while (0);
    // 0x1c7398: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c739c: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c739cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c73a0: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c73a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c73a4: 0x144000f7  bnez        $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x1C73A4u;
    {
        const bool branch_taken_0x1c73a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c73a4) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C73ACu;
    // 0x1c73ac: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c73acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c73b0: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x1C73B0u;
    {
        const bool branch_taken_0x1c73b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73B0u;
        // 0x1c73b4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73b0) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C73B8u;
}
