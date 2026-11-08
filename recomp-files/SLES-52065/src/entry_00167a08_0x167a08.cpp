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

// Function: entry_00167a08
// Address: 0x167a08 - 0x167a34
void entry_00167a08_0x167a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167a08_0x167a08");
#endif

    switch (ctx->pc) {
        case 0x167a10u: goto label_167a10;
        case 0x167a2cu: goto label_167a2c;
        default: break;
    }

    ctx->pc = 0x167a08u;

    // 0x167a08: 0xc042570  jal         func_1095C0
    ctx->pc = 0x167A08u;
    SET_GPR_U32(ctx, 31, 0x167A10u);
    ctx->pc = 0x167A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A08u;
    // 0x167a0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x167A08u, 0x167A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A10u;
label_167a10:
    // 0x167a10: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167a14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167a18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167a1c: 0xa20301d3  sb          $v1, 0x1D3($s0)
    ctx->pc = 0x167a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 3));
    // 0x167a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a24: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167A24u;
    SET_GPR_U32(ctx, 31, 0x167A2Cu);
    ctx->pc = 0x167A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A24u;
    // 0x167a28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167A24u, 0x167A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A2Cu;
label_167a2c:
    // 0x167a2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x167A2Cu;
    {
        const bool branch_taken_0x167a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a2c) {
            ctx->pc = 0x167A54u;
            return;
        }
    }
    ctx->pc = 0x167A34u;
}
