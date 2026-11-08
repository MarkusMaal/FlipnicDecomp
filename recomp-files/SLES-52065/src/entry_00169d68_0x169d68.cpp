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

// Function: entry_00169d68
// Address: 0x169d68 - 0x169d88
void entry_00169d68_0x169d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169d68_0x169d68");
#endif

    switch (ctx->pc) {
        case 0x169d78u: goto label_169d78;
        default: break;
    }

    ctx->pc = 0x169d68u;

    // 0x169d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x169d70: 0xc0425a4  jal         func_109690
    ctx->pc = 0x169D70u;
    SET_GPR_U32(ctx, 31, 0x169D78u);
    ctx->pc = 0x169D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D70u;
    // 0x169d74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169D70u, 0x169D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D78u;
label_169d78:
    // 0x169d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169d7c: 0xa20301d3  sb          $v1, 0x1D3($s0)
    ctx->pc = 0x169d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 3));
    // 0x169d80: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x169D80u;
    {
        const bool branch_taken_0x169d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D80u;
        // 0x169d84: 0xae0001d4  sw          $zero, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d80) {
            ctx->pc = 0x169E48u;
            return;
        }
    }
    ctx->pc = 0x169D88u;
}
