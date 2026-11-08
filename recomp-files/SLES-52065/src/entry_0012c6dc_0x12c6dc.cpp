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

// Function: entry_0012c6dc
// Address: 0x12c6dc - 0x12c700
void entry_0012c6dc_0x12c6dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c6dc_0x12c6dc");
#endif

    ctx->pc = 0x12c6dcu;

    // 0x12c6dc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x12c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12c6e0: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x12c6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x12c6e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12c6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6e8: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x12c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
    // 0x12c6ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12c6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6f0: 0xa2420047  sb          $v0, 0x47($s2)
    ctx->pc = 0x12c6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x12c6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12c6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6f8: 0xc04b058  jal         func_12C160
    ctx->pc = 0x12C6F8u;
    SET_GPR_U32(ctx, 31, 0x12C700u);
    ctx->pc = 0x12C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6F8u;
    // 0x12c6fc: 0xa2420046  sb          $v0, 0x46($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C160u, 0x12C6F8u, 0x12C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C700u;
}
