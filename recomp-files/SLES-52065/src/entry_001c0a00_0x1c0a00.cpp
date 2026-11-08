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

// Function: entry_001c0a00
// Address: 0x1c0a00 - 0x1c0a48
void entry_001c0a00_0x1c0a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0a00_0x1c0a00");
#endif

    switch (ctx->pc) {
        case 0x1c0a1cu: goto label_1c0a1c;
        default: break;
    }

    ctx->pc = 0x1c0a00u;

    // 0x1c0a00: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x1c0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x1c0a04: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c0a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c0a08: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1C0A08u;
    {
        const bool branch_taken_0x1c0a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A08u;
        // 0x1c0a0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a08) {
            ctx->pc = 0x1C0910u;
            return;
        }
    }
    ctx->pc = 0x1C0A10u;
    // 0x1c0a10: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c0a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c0a14: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0A14u;
    SET_GPR_U32(ctx, 31, 0x1C0A1Cu);
    ctx->pc = 0x1C0A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A14u;
    // 0x1c0a18: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0A14u, 0x1C0A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A1Cu;
label_1c0a1c:
    // 0x1c0a1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0a20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a24: 0x8022f588  lb          $v0, -0xA78($at)
    ctx->pc = 0x1c0a24u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F588u));
    // 0x1c0a28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0A28u;
    {
        const bool branch_taken_0x1c0a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a28) {
            ctx->pc = 0x1C0A48u;
            return;
        }
    }
    ctx->pc = 0x1C0A30u;
    // 0x1c0a30: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1c0a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c0a34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a38: 0xac23f580  sw          $v1, -0xA80($at)
    ctx->pc = 0x1c0a38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F580u, _value); } while (0);
    // 0x1c0a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0a40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a44: 0xa022f588  sb          $v0, -0xA78($at)
    ctx->pc = 0x1c0a44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F588u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F588u, _value); } while (0);
    ctx->pc = 0x1c0a48u;
}
