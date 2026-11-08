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

// Function: entry_001873b4
// Address: 0x1873b4 - 0x1873ec
void entry_001873b4_0x1873b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001873b4_0x1873b4");
#endif

    switch (ctx->pc) {
        case 0x1873e8u: goto label_1873e8;
        default: break;
    }

    ctx->pc = 0x1873b4u;

    // 0x1873b4: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x1873b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x1873b8: 0x24429670  addiu       $v0, $v0, -0x6990
    ctx->pc = 0x1873b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940272));
    // 0x1873bc: 0x27a4015c  addiu       $a0, $sp, 0x15C
    ctx->pc = 0x1873bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x1873c0: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x1873c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x1873c4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1873c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1873c8: 0x34622400  ori         $v0, $v1, 0x2400
    ctx->pc = 0x1873c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x1873cc: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x1873ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x1873d0: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x1873d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x1873d4: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1873d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1873d8: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x1873d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x1873dc: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1873dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1873e0: 0xc061e24  jal         func_187890
    ctx->pc = 0x1873E0u;
    SET_GPR_U32(ctx, 31, 0x1873E8u);
    ctx->pc = 0x1873E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1873E0u;
    // 0x1873e4: 0xafa2014c  sw          $v0, 0x14C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187890u, 0x1873E0u, 0x1873E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1873E8u;
label_1873e8:
    // 0x1873e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1873e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1873ecu;
}
