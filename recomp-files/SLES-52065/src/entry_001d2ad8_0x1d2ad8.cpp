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

// Function: entry_001d2ad8
// Address: 0x1d2ad8 - 0x1d2b08
void entry_001d2ad8_0x1d2ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2ad8_0x1d2ad8");
#endif

    switch (ctx->pc) {
        case 0x1d2ae0u: goto label_1d2ae0;
        case 0x1d2af0u: goto label_1d2af0;
        default: break;
    }

    ctx->pc = 0x1d2ad8u;

    // 0x1d2ad8: 0xc07e18a  jal         func_1F8628
    ctx->pc = 0x1D2AD8u;
    SET_GPR_U32(ctx, 31, 0x1D2AE0u);
    ctx->pc = 0x1D2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AD8u;
    // 0x1d2adc: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8628u, 0x1D2AD8u, 0x1D2AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AE0u;
label_1d2ae0:
    // 0x1d2ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ae4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ae8: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2AE8u;
    SET_GPR_U32(ctx, 31, 0x1D2AF0u);
    ctx->pc = 0x1D2AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AE8u;
    // 0x1d2aec: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2AE8u, 0x1D2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AF0u;
label_1d2af0:
    // 0x1d2af0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2af4: 0x8c230340  lw          $v1, 0x340($at)
    ctx->pc = 0x1d2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370340u));
    // 0x1d2af8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2afc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2b00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D2B00u;
    {
        const bool branch_taken_0x1d2b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B00u;
        // 0x1d2b04: 0xac230340  sw          $v1, 0x340($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b00) {
            ctx->pc = 0x1D2B2Cu;
            return;
        }
    }
    ctx->pc = 0x1D2B08u;
}
