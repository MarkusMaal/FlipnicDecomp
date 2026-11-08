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

// Function: entry_00193db4
// Address: 0x193db4 - 0x193dd4
void entry_00193db4_0x193db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193db4_0x193db4");
#endif

    ctx->pc = 0x193db4u;

    // 0x193db4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193dbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x193dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193dc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193dc4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193dc4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193dc8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x193dc8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x193dcc: 0xc053c00  jal         func_14F000
    ctx->pc = 0x193DCCu;
    SET_GPR_U32(ctx, 31, 0x193DD4u);
    ctx->pc = 0x193DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DCCu;
    // 0x193dd0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x193DCCu, 0x193DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DD4u;
}
