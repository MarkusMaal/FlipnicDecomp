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

// Function: entry_001c3ce4
// Address: 0x1c3ce4 - 0x1c3d2c
void entry_001c3ce4_0x1c3ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3ce4_0x1c3ce4");
#endif

    ctx->pc = 0x1c3ce4u;

    // 0x1c3ce4: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1c3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1c3ce8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3cec: 0x146201c6  bne         $v1, $v0, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x1C3CECu;
    {
        const bool branch_taken_0x1c3cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CECu;
        // 0x1c3cf0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3cec) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3CF4u;
    // 0x1c3cf4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3cf8: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1c3cfc: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3d00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3d04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3d08: 0xac22f5e8  sw          $v0, -0xA18($at)
    ctx->pc = 0x1c3d08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5E8u, _value); } while (0);
    // 0x1c3d0c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c3d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c3d10: 0x8c22f5e8  lw          $v0, -0xA18($at)
    ctx->pc = 0x1c3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5E8u));
    // 0x1c3d14: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1c3d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c3d18: 0x144001bb  bnez        $v0, . + 4 + (0x1BB << 2)
    ctx->pc = 0x1C3D18u;
    {
        const bool branch_taken_0x1c3d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d18) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3D20u;
    // 0x1c3d20: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1c3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c3d24: 0x100001b8  b           . + 4 + (0x1B8 << 2)
    ctx->pc = 0x1C3D24u;
    {
        const bool branch_taken_0x1c3d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D24u;
        // 0x1c3d28: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d24) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3D2Cu;
}
