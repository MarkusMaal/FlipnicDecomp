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

// Function: entry_001c4270
// Address: 0x1c4270 - 0x1c42c0
void entry_001c4270_0x1c4270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4270_0x1c4270");
#endif

    ctx->pc = 0x1c4270u;

    // 0x1c4270: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c4270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c4274: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c4274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c4278: 0x14620063  bne         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1C4278u;
    {
        const bool branch_taken_0x1c4278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4278u;
        // 0x1c427c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4278) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C4280u;
    // 0x1c4280: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4284: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c4284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c4288: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c4288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c428c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c4290: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4294: 0xac22f5e8  sw          $v0, -0xA18($at)
    ctx->pc = 0x1c4294u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5E8u, _value); } while (0);
    // 0x1c4298: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c429c: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c429cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c42a0: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c42a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c42a4: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1C42A4u;
    {
        const bool branch_taken_0x1c42a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c42a4) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C42ACu;
    // 0x1c42ac: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1c42acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1c42b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c42b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c42b4: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c42b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c42b8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1C42B8u;
    {
        const bool branch_taken_0x1c42b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42B8u;
        // 0x1c42bc: 0xac20f5e8  sw          $zero, -0xA18($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42b8) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C42C0u;
}
