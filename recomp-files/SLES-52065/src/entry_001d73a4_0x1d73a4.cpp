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

// Function: entry_001d73a4
// Address: 0x1d73a4 - 0x1d73dc
void entry_001d73a4_0x1d73a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d73a4_0x1d73a4");
#endif

    switch (ctx->pc) {
        case 0x1d73acu: goto label_1d73ac;
        case 0x1d73c8u: goto label_1d73c8;
        case 0x1d73d4u: goto label_1d73d4;
        default: break;
    }

    ctx->pc = 0x1d73a4u;

    // 0x1d73a4: 0xc077492  jal         func_1DD248
    ctx->pc = 0x1D73A4u;
    SET_GPR_U32(ctx, 31, 0x1D73ACu);
    ctx->pc = 0x1D73A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73A4u;
    // 0x1d73a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD248u, 0x1D73A4u, 0x1D73ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73ACu;
label_1d73ac:
    // 0x1d73ac: 0x92c3000f  lbu         $v1, 0xF($s6)
    ctx->pc = 0x1d73acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 15)));
    // 0x1d73b0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1d73b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1d73b4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D73B4u;
    {
        const bool branch_taken_0x1d73b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d73b4) {
            ctx->pc = 0x1D73B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D73B4u;
            // 0x1d73b8: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D73DCu;
            return;
        }
    }
    ctx->pc = 0x1D73BCu;
    // 0x1d73bc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d73bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d73c0: 0xc07755a  jal         func_1DD568
    ctx->pc = 0x1D73C0u;
    SET_GPR_U32(ctx, 31, 0x1D73C8u);
    ctx->pc = 0x1D73C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73C0u;
    // 0x1d73c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD568u, 0x1D73C0u, 0x1D73C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73C8u;
label_1d73c8:
    // 0x1d73c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d73c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d73cc: 0xc07758e  jal         func_1DD638
    ctx->pc = 0x1D73CCu;
    SET_GPR_U32(ctx, 31, 0x1D73D4u);
    ctx->pc = 0x1D73D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73CCu;
    // 0x1d73d0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD638u, 0x1D73CCu, 0x1D73D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73D4u;
label_1d73d4:
    // 0x1d73d4: 0x92c3000f  lbu         $v1, 0xF($s6)
    ctx->pc = 0x1d73d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 15)));
    // 0x1d73d8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d73d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    ctx->pc = 0x1d73dcu;
}
