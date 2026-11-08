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

// Function: entry_001c9bd0
// Address: 0x1c9bd0 - 0x1c9c18
void entry_001c9bd0_0x1c9bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9bd0_0x1c9bd0");
#endif

    switch (ctx->pc) {
        case 0x1c9becu: goto label_1c9bec;
        default: break;
    }

    ctx->pc = 0x1c9bd0u;

    // 0x1c9bd0: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x1c9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1c9bd4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c9bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c9bd8: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1C9BD8u;
    {
        const bool branch_taken_0x1c9bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9BD8u;
        // 0x1c9bdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bd8) {
            ctx->pc = 0x1C9AE0u;
            return;
        }
    }
    ctx->pc = 0x1C9BE0u;
    // 0x1c9be0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c9be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c9be4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9BE4u;
    SET_GPR_U32(ctx, 31, 0x1C9BECu);
    ctx->pc = 0x1C9BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BE4u;
    // 0x1c9be8: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9BE4u, 0x1C9BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BECu;
label_1c9bec:
    // 0x1c9bec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bf0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9bf4: 0x8022f908  lb          $v0, -0x6F8($at)
    ctx->pc = 0x1c9bf4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F908u));
    // 0x1c9bf8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9BF8u;
    {
        const bool branch_taken_0x1c9bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9bf8) {
            ctx->pc = 0x1C9C18u;
            return;
        }
    }
    ctx->pc = 0x1C9C00u;
    // 0x1c9c00: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1c9c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c9c04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c08: 0xac23f900  sw          $v1, -0x700($at)
    ctx->pc = 0x1c9c08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F900u, _value); } while (0);
    // 0x1c9c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9c10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c14: 0xa022f908  sb          $v0, -0x6F8($at)
    ctx->pc = 0x1c9c14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F908u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F908u, _value); } while (0);
    ctx->pc = 0x1c9c18u;
}
