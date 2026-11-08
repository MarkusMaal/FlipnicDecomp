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

// Function: entry_001a73a8
// Address: 0x1a73a8 - 0x1a73e0
void entry_001a73a8_0x1a73a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a73a8_0x1a73a8");
#endif

    switch (ctx->pc) {
        case 0x1a73c0u: goto label_1a73c0;
        case 0x1a73c8u: goto label_1a73c8;
        case 0x1a73dcu: goto label_1a73dc;
        default: break;
    }

    ctx->pc = 0x1a73a8u;

    // 0x1a73a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a73a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a73ac: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1a73acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1a73b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a73b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1a73b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1a73b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1a73b8: 0xc062860  jal         func_18A180
    ctx->pc = 0x1A73B8u;
    SET_GPR_U32(ctx, 31, 0x1A73C0u);
    ctx->pc = 0x1A73BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A73B8u;
    // 0x1a73bc: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A73B8u, 0x1A73C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A73C0u;
label_1a73c0:
    // 0x1a73c0: 0xc062114  jal         func_188450
    ctx->pc = 0x1A73C0u;
    SET_GPR_U32(ctx, 31, 0x1A73C8u);
    ctx->pc = 0x1A73C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A73C0u;
    // 0x1a73c4: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1A73C0u, 0x1A73C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A73C8u;
label_1a73c8:
    // 0x1a73c8: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1a73c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a73cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a73ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a73d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a73d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a73d4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A73D4u;
    SET_GPR_U32(ctx, 31, 0x1A73DCu);
    ctx->pc = 0x1A73D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A73D4u;
    // 0x1a73d8: 0x24a50728  addiu       $a1, $a1, 0x728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A73D4u, 0x1A73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A73DCu;
label_1a73dc:
    // 0x1a73dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a73dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a73e0u;
}
