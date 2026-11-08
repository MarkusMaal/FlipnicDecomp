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

// Function: entry_0016725c
// Address: 0x16725c - 0x167280
void entry_0016725c_0x16725c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016725c_0x16725c");
#endif

    switch (ctx->pc) {
        case 0x167264u: goto label_167264;
        case 0x167278u: goto label_167278;
        default: break;
    }

    ctx->pc = 0x16725cu;

    // 0x16725c: 0xc042118  jal         func_108460
    ctx->pc = 0x16725Cu;
    SET_GPR_U32(ctx, 31, 0x167264u);
    ctx->pc = 0x167260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16725Cu;
    // 0x167260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16725Cu, 0x167264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167264u;
label_167264:
    // 0x167264: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16726c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16726cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167270: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167270u;
    SET_GPR_U32(ctx, 31, 0x167278u);
    ctx->pc = 0x167274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167270u;
    // 0x167274: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167270u, 0x167278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167278u;
label_167278:
    // 0x167278: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x167278u;
    {
        const bool branch_taken_0x167278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167278) {
            ctx->pc = 0x1672D8u;
            return;
        }
    }
    ctx->pc = 0x167280u;
}
