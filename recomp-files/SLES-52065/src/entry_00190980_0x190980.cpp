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

// Function: entry_00190980
// Address: 0x190980 - 0x1909a8
void entry_00190980_0x190980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190980_0x190980");
#endif

    switch (ctx->pc) {
        case 0x190990u: goto label_190990;
        default: break;
    }

    ctx->pc = 0x190980u;

    // 0x190980: 0x26240210  addiu       $a0, $s1, 0x210
    ctx->pc = 0x190980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x190984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190988: 0xc063f28  jal         func_18FCA0
    ctx->pc = 0x190988u;
    SET_GPR_U32(ctx, 31, 0x190990u);
    ctx->pc = 0x19098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190988u;
    // 0x19098c: 0xaf808704  sw          $zero, -0x78FC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936324), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FCA0u, 0x190988u, 0x190990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190990u;
label_190990:
    // 0x190990: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x190990u;
    {
        const bool branch_taken_0x190990 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x190994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190990u;
        // 0x190994: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190990) {
            ctx->pc = 0x1909A8u;
            return;
        }
    }
    ctx->pc = 0x190998u;
    // 0x190998: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x190998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19099c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x19099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x1909a0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1909a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1909a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1909a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    ctx->pc = 0x1909a8u;
}
