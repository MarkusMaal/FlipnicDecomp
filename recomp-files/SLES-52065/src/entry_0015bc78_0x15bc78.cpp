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

// Function: entry_0015bc78
// Address: 0x15bc78 - 0x15bc90
void entry_0015bc78_0x15bc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bc78_0x15bc78");
#endif

    switch (ctx->pc) {
        case 0x15bc88u: goto label_15bc88;
        default: break;
    }

    ctx->pc = 0x15bc78u;

    // 0x15bc78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15bc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15bc80: 0xc0425a4  jal         func_109690
    ctx->pc = 0x15BC80u;
    SET_GPR_U32(ctx, 31, 0x15BC88u);
    ctx->pc = 0x15BC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BC80u;
    // 0x15bc84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15BC80u, 0x15BC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC88u;
label_15bc88:
    // 0x15bc88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15BC88u;
    {
        const bool branch_taken_0x15bc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc88) {
            ctx->pc = 0x15BCB0u;
            return;
        }
    }
    ctx->pc = 0x15BC90u;
}
