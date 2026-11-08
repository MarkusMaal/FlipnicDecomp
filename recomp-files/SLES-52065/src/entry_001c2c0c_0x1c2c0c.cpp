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

// Function: entry_001c2c0c
// Address: 0x1c2c0c - 0x1c2c28
void entry_001c2c0c_0x1c2c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2c0c_0x1c2c0c");
#endif

    switch (ctx->pc) {
        case 0x1c2c14u: goto label_1c2c14;
        default: break;
    }

    ctx->pc = 0x1c2c0cu;

    // 0x1c2c0c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C2C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C2C14u);
    ctx->pc = 0x1C2C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C0Cu;
    // 0x1c2c10: 0x8c24f5d0  lw          $a0, -0xA30($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C2C0Cu, 0x1C2C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C14u;
label_1c2c14:
    // 0x1c2c14: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2c18: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1c2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c2c1c: 0xac20f5d0  sw          $zero, -0xA30($at)
    ctx->pc = 0x1c2c1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F5D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5D0u, _value); } while (0);
    // 0x1c2c20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C2C20u;
    {
        const bool branch_taken_0x1c2c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C20u;
        // 0x1c2c24: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c20) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2C28u;
}
