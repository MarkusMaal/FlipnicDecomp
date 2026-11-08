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

// Function: entry_001b8af8
// Address: 0x1b8af8 - 0x1b8b5c
void entry_001b8af8_0x1b8af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8af8_0x1b8af8");
#endif

    switch (ctx->pc) {
        case 0x1b8b50u: goto label_1b8b50;
        default: break;
    }

    ctx->pc = 0x1b8af8u;

    // 0x1b8af8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8afc: 0x8023f400  lb          $v1, -0xC00($at)
    ctx->pc = 0x1b8afcu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36F400u));
    // 0x1b8b00: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B8B00u;
    {
        const bool branch_taken_0x1b8b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8b00) {
            ctx->pc = 0x1B8B5Cu;
            return;
        }
    }
    ctx->pc = 0x1B8B08u;
    // 0x1b8b08: 0x3c02602f  lui         $v0, 0x602F
    ctx->pc = 0x1b8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24623 << 16));
    // 0x1b8b0c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1b8b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x1b8b10: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x1b8b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1b8b14: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b8b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1b8b18: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x1b8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x1b8b1c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1b8b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1b8b20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b8b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b8b24: 0x3442521e  ori         $v0, $v0, 0x521E
    ctx->pc = 0x1b8b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21022);
    // 0x1b8b28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8b2c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b8b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b8b30: 0xfc22f418  sd          $v0, -0xBE8($at)
    ctx->pc = 0x1b8b30u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F418u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x36F418u, _value); } while (0);
    // 0x1b8b34: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b8b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b8b38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8b3c: 0x2484f410  addiu       $a0, $a0, -0xBF0
    ctx->pc = 0x1b8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964240));
    // 0x1b8b40: 0xfc23f410  sd          $v1, -0xBF0($at)
    ctx->pc = 0x1b8b40u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F410u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x36F410u, _value); } while (0);
    // 0x1b8b44: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x1b8b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
    // 0x1b8b48: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1B8B48u;
    SET_GPR_U32(ctx, 31, 0x1B8B50u);
    ctx->pc = 0x1B8B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8B48u;
    // 0x1b8b4c: 0x24c6f3f0  addiu       $a2, $a2, -0xC10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1B8B48u, 0x1B8B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B50u;
label_1b8b50:
    // 0x1b8b50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8b54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8b58: 0xa023f400  sb          $v1, -0xC00($at)
    ctx->pc = 0x1b8b58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F400u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F400u, _value); } while (0);
    ctx->pc = 0x1b8b5cu;
}
