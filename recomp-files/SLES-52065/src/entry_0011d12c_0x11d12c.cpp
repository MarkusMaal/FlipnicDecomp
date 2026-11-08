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

// Function: entry_0011d12c
// Address: 0x11d12c - 0x11d160
void entry_0011d12c_0x11d12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d12c_0x11d12c");
#endif

    switch (ctx->pc) {
        case 0x11d14cu: goto label_11d14c;
        case 0x11d158u: goto label_11d158;
        default: break;
    }

    ctx->pc = 0x11d12cu;

    // 0x11d12c: 0x0  nop
    ctx->pc = 0x11d12cu;
    // NOP
    // 0x11d130: 0x8e2503e8  lw          $a1, 0x3E8($s1)
    ctx->pc = 0x11d130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1000)));
    // 0x11d134: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11d134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d138: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x11d138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x11d13c: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x11d13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x11d140: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x11d140u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x11d144: 0xc074f10  jal         func_1D3C40
    ctx->pc = 0x11D144u;
    SET_GPR_U32(ctx, 31, 0x11D14Cu);
    ctx->pc = 0x11D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D144u;
    // 0x11d148: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C40u, 0x11D144u, 0x11D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D14Cu;
label_11d14c:
    // 0x11d14c: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x11d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x11d150: 0xc074f7a  jal         func_1D3DE8
    ctx->pc = 0x11D150u;
    SET_GPR_U32(ctx, 31, 0x11D158u);
    ctx->pc = 0x11D154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D150u;
    // 0x11d154: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3DE8u, 0x11D150u, 0x11D158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D158u;
label_11d158:
    // 0x11d158: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11D158u;
    {
        const bool branch_taken_0x11d158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D158u;
        // 0x11d15c: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d158) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11D160u;
}
