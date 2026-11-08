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

// Function: entry_001c7294
// Address: 0x1c7294 - 0x1c72dc
void entry_001c7294_0x1c7294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7294_0x1c7294");
#endif

    ctx->pc = 0x1c7294u;

    // 0x1c7294: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x1c7294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x1c7298: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c729c: 0x14620139  bne         $v1, $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x1C729Cu;
    {
        const bool branch_taken_0x1c729c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C729Cu;
        // 0x1c72a0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c729c) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C72A4u;
    // 0x1c72a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c72a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c72a8: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c72a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1c72ac: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c72acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c72b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c72b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c72b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c72b8: 0xac22f880  sw          $v0, -0x780($at)
    ctx->pc = 0x1c72b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F880u, _value); } while (0);
    // 0x1c72bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c72bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c72c0: 0x8c22f880  lw          $v0, -0x780($at)
    ctx->pc = 0x1c72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F880u));
    // 0x1c72c4: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c72c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c72c8: 0x1440012e  bnez        $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x1C72C8u;
    {
        const bool branch_taken_0x1c72c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c72c8) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C72D0u;
    // 0x1c72d0: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c72d4: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x1C72D4u;
    {
        const bool branch_taken_0x1c72d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72D4u;
        // 0x1c72d8: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c72d4) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C72DCu;
}
