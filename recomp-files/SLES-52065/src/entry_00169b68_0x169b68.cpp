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

// Function: entry_00169b68
// Address: 0x169b68 - 0x169b90
void entry_00169b68_0x169b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169b68_0x169b68");
#endif

    switch (ctx->pc) {
        case 0x169b88u: goto label_169b88;
        default: break;
    }

    ctx->pc = 0x169b68u;

    // 0x169b68: 0x92030222  lbu         $v1, 0x222($s0)
    ctx->pc = 0x169b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x169b6c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x169B6Cu;
    {
        const bool branch_taken_0x169b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169b6c) {
            ctx->pc = 0x169BB0u;
            return;
        }
    }
    ctx->pc = 0x169B74u;
    // 0x169b74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x169b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x169b80: 0xc0425a4  jal         func_109690
    ctx->pc = 0x169B80u;
    SET_GPR_U32(ctx, 31, 0x169B88u);
    ctx->pc = 0x169B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B80u;
    // 0x169b84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169B80u, 0x169B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B88u;
label_169b88:
    // 0x169b88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x169B88u;
    {
        const bool branch_taken_0x169b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B88u;
        // 0x169b8c: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b88) {
            ctx->pc = 0x169BB4u;
            return;
        }
    }
    ctx->pc = 0x169B90u;
}
