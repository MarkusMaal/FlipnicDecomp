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

// Function: entry_0016d77c
// Address: 0x16d77c - 0x16d7a0
void entry_0016d77c_0x16d77c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d77c_0x16d77c");
#endif

    switch (ctx->pc) {
        case 0x16d784u: goto label_16d784;
        case 0x16d798u: goto label_16d798;
        default: break;
    }

    ctx->pc = 0x16d77cu;

    // 0x16d77c: 0xc042118  jal         func_108460
    ctx->pc = 0x16D77Cu;
    SET_GPR_U32(ctx, 31, 0x16D784u);
    ctx->pc = 0x16D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D77Cu;
    // 0x16d780: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16D77Cu, 0x16D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D784u;
label_16d784:
    // 0x16d784: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16d784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16d788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d78c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d790: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D790u;
    SET_GPR_U32(ctx, 31, 0x16D798u);
    ctx->pc = 0x16D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D790u;
    // 0x16d794: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D790u, 0x16D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D798u;
label_16d798:
    // 0x16d798: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16D798u;
    {
        const bool branch_taken_0x16d798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D798u;
        // 0x16d79c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d798) {
            ctx->pc = 0x16D7D0u;
            return;
        }
    }
    ctx->pc = 0x16D7A0u;
}
