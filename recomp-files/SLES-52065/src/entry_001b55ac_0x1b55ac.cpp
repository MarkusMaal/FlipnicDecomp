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

// Function: entry_001b55ac
// Address: 0x1b55ac - 0x1b55fc
void entry_001b55ac_0x1b55ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b55ac_0x1b55ac");
#endif

    switch (ctx->pc) {
        case 0x1b55b4u: goto label_1b55b4;
        case 0x1b55bcu: goto label_1b55bc;
        case 0x1b55c8u: goto label_1b55c8;
        case 0x1b55d8u: goto label_1b55d8;
        default: break;
    }

    ctx->pc = 0x1b55acu;

    // 0x1b55ac: 0xc073088  jal         func_1CC220
    ctx->pc = 0x1B55ACu;
    SET_GPR_U32(ctx, 31, 0x1B55B4u);
    ctx->pc = 0x1CC220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC220u, 0x1B55ACu, 0x1B55B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55B4u;
label_1b55b4:
    // 0x1b55b4: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B55B4u;
    SET_GPR_U32(ctx, 31, 0x1B55BCu);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B55B4u, 0x1B55BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55BCu;
label_1b55bc:
    // 0x1b55bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b55bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55c0: 0xc0485a4  jal         func_121690
    ctx->pc = 0x1B55C0u;
    SET_GPR_U32(ctx, 31, 0x1B55C8u);
    ctx->pc = 0x1B55C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55C0u;
    // 0x1b55c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x1B55C0u, 0x1B55C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55C8u;
label_1b55c8:
    // 0x1b55c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b55c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b55cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b55ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b55d0: 0xc046b40  jal         func_11AD00
    ctx->pc = 0x1B55D0u;
    SET_GPR_U32(ctx, 31, 0x1B55D8u);
    ctx->pc = 0x1B55D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55D0u;
    // 0x1b55d4: 0x24a50d88  addiu       $a1, $a1, 0xD88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD00u, 0x1B55D0u, 0x1B55D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55D8u;
label_1b55d8:
    // 0x1b55d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b55d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b55dc: 0x8022f260  lb          $v0, -0xDA0($at)
    ctx->pc = 0x1b55dcu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F260u));
    // 0x1b55e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B55E0u;
    {
        const bool branch_taken_0x1b55e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b55e0) {
            ctx->pc = 0x1B55FCu;
            return;
        }
    }
    ctx->pc = 0x1B55E8u;
    // 0x1b55e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b55ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b55ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b55f0: 0xa022f258  sb          $v0, -0xDA8($at)
    ctx->pc = 0x1b55f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F258u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F258u, _value); } while (0);
    // 0x1b55f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b55f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b55f8: 0xa022f260  sb          $v0, -0xDA0($at)
    ctx->pc = 0x1b55f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F260u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F260u, _value); } while (0);
    ctx->pc = 0x1b55fcu;
}
