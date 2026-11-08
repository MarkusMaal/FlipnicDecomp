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

// Function: entry_00167a34
// Address: 0x167a34 - 0x167a54
void entry_00167a34_0x167a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167a34_0x167a34");
#endif

    switch (ctx->pc) {
        case 0x167a3cu: goto label_167a3c;
        default: break;
    }

    ctx->pc = 0x167a34u;

    // 0x167a34: 0xc042570  jal         func_1095C0
    ctx->pc = 0x167A34u;
    SET_GPR_U32(ctx, 31, 0x167A3Cu);
    ctx->pc = 0x167A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A34u;
    // 0x167a38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x167A34u, 0x167A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A3Cu;
label_167a3c:
    // 0x167a3c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167a48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167a4c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167A4Cu;
    SET_GPR_U32(ctx, 31, 0x167A54u);
    ctx->pc = 0x167A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A4Cu;
    // 0x167a50: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167A4Cu, 0x167A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A54u;
}
