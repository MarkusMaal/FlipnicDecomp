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

// Function: entry_0015bc90
// Address: 0x15bc90 - 0x15bcb0
void entry_0015bc90_0x15bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bc90_0x15bc90");
#endif

    switch (ctx->pc) {
        case 0x15bc98u: goto label_15bc98;
        default: break;
    }

    ctx->pc = 0x15bc90u;

    // 0x15bc90: 0xc042570  jal         func_1095C0
    ctx->pc = 0x15BC90u;
    SET_GPR_U32(ctx, 31, 0x15BC98u);
    ctx->pc = 0x15BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BC90u;
    // 0x15bc94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x15BC90u, 0x15BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC98u;
label_15bc98:
    // 0x15bc98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15bc9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bca0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15bca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15bca4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15bca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15bca8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15BCA8u;
    SET_GPR_U32(ctx, 31, 0x15BCB0u);
    ctx->pc = 0x15BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BCA8u;
    // 0x15bcac: 0xa22001d3  sb          $zero, 0x1D3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15BCA8u, 0x15BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BCB0u;
}
